#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonSemiAnalyticalProcess::class$ = NULL;
        jmethodID *PythonSemiAnalyticalProcess::mids$ = NULL;
        bool PythonSemiAnalyticalProcess::live$ = false;

        jclass PythonSemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonSemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_f666564f549c2e32] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateNominalSpacecraftState_280c3390961e0a50] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_280c3390961e0a50] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSemiAnalyticalProcess::PythonSemiAnalyticalProcess() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonSemiAnalyticalProcess::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonSemiAnalyticalProcess::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonSemiAnalyticalProcess::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self);
        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_PythonSemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSemiAnalyticalProcess, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_PythonSemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) t_PythonSemiAnalyticalProcess_init_ },
          { Py_tp_getset, t_PythonSemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSemiAnalyticalProcess, t_PythonSemiAnalyticalProcess, PythonSemiAnalyticalProcess);

        void t_PythonSemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSemiAnalyticalProcess), &PY_TYPE_DEF(PythonSemiAnalyticalProcess), module, "PythonSemiAnalyticalProcess", 1);
        }

        void t_PythonSemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "class_", make_descriptor(PythonSemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "wrapfn_", make_descriptor(t_PythonSemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSemiAnalyticalProcess::initializeClass);
          JNINativeMethod methods[] = {
            { "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V", (void *) t_PythonSemiAnalyticalProcess_finalizeEstimation0 },
            { "finalizeOperationsObservationGrid", "()V", (void *) t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1 },
            { "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;", (void *) t_PythonSemiAnalyticalProcess_getObserver2 },
            { "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3 },
            { "pythonDecRef", "()V", (void *) t_PythonSemiAnalyticalProcess_pythonDecRef4 },
            { "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5 },
            { "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateShortPeriods6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_PythonSemiAnalyticalProcess::wrap_Object(PythonSemiAnalyticalProcess(((t_PythonSemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds)
        {
          PythonSemiAnalyticalProcess object((jobject) NULL);

          INT_CALL(object = PythonSemiAnalyticalProcess());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args)
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

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
          PyObject *o1 = ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(::org::hipparchus::filtering::kalman::ProcessEstimate(a1));
          PyObject *result = PyObject_CallMethod(obj, "finalizeEstimation", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "finalizeOperationsObservationGrid", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObserver", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
          {
            throwTypeError("getObserver", result);
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

        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodicTerms", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateNominalSpacecraftState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateShortPeriods", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data)
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
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *StationDisplacement::class$ = NULL;
          jmethodID *StationDisplacement::mids$ = NULL;
          bool StationDisplacement::live$ = false;

          jclass StationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/StationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_displacement_729c7f08824f83c6] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D StationDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_729c7f08824f83c6], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args);

          static PyMethodDef t_StationDisplacement__methods_[] = {
            DECLARE_METHOD(t_StationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StationDisplacement)[] = {
            { Py_tp_methods, t_StationDisplacement__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StationDisplacement, t_StationDisplacement, StationDisplacement);

          void t_StationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(StationDisplacement), &PY_TYPE_DEF(StationDisplacement), module, "StationDisplacement", 0);
          }

          void t_StationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "class_", make_descriptor(StationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "wrapfn_", make_descriptor(t_StationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StationDisplacement::initializeClass, 1)))
              return NULL;
            return t_StationDisplacement::wrap_Object(StationDisplacement(((t_StationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
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
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Embedding::class$ = NULL;
        jmethodID *Embedding::mids$ = NULL;
        bool Embedding::live$ = false;

        jclass Embedding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Embedding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_toSpace_2214f7ad5b6ca158] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_toSubSpace_2214f7ad5b6ca158] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Embedding::toSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSpace_2214f7ad5b6ca158], a0.this$));
        }

        ::org::hipparchus::geometry::Point Embedding::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_2214f7ad5b6ca158], a0.this$));
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
        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args);
        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data);
        static PyGetSetDef t_Embedding__fields_[] = {
          DECLARE_GET_FIELD(t_Embedding, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Embedding__methods_[] = {
          DECLARE_METHOD(t_Embedding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, of_, METH_VARARGS),
          DECLARE_METHOD(t_Embedding, toSpace, METH_O),
          DECLARE_METHOD(t_Embedding, toSubSpace, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Embedding)[] = {
          { Py_tp_methods, t_Embedding__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Embedding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Embedding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Embedding, t_Embedding, Embedding);
        PyObject *t_Embedding::wrap_Object(const Embedding& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Embedding::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Embedding::install(PyObject *module)
        {
          installType(&PY_TYPE(Embedding), &PY_TYPE_DEF(Embedding), module, "Embedding", 0);
        }

        void t_Embedding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "class_", make_descriptor(Embedding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "wrapfn_", make_descriptor(t_Embedding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Embedding::initializeClass, 1)))
            return NULL;
          return t_Embedding::wrap_Object(Embedding(((t_Embedding *) arg)->object.this$));
        }
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Embedding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
          return NULL;
        }

        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSubSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
          return NULL;
        }
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Divide::class$ = NULL;
        jmethodID *Divide::mids$ = NULL;
        bool Divide::live$ = false;

        jclass Divide::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Divide");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Divide::Divide() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Divide::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Divide_value(t_Divide *self, PyObject *args);

        static PyMethodDef t_Divide__methods_[] = {
          DECLARE_METHOD(t_Divide, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Divide)[] = {
          { Py_tp_methods, t_Divide__methods_ },
          { Py_tp_init, (void *) t_Divide_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Divide)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Divide, t_Divide, Divide);

        void t_Divide::install(PyObject *module)
        {
          installType(&PY_TYPE(Divide), &PY_TYPE_DEF(Divide), module, "Divide", 0);
        }

        void t_Divide::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "class_", make_descriptor(Divide::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "wrapfn_", make_descriptor(t_Divide::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Divide::initializeClass, 1)))
            return NULL;
          return t_Divide::wrap_Object(Divide(((t_Divide *) arg)->object.this$));
        }
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Divide::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds)
        {
          Divide object((jobject) NULL);

          INT_CALL(object = Divide());
          self->object = object;

          return 0;
        }

        static PyObject *t_Divide_value(t_Divide *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IonosphereFreeCombination::class$ = NULL;
          jmethodID *IonosphereFreeCombination::mids$ = NULL;
          bool IonosphereFreeCombination::live$ = false;

          jclass IonosphereFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IonosphereFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_IonosphereFreeCombination__methods_[] = {
            DECLARE_METHOD(t_IonosphereFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereFreeCombination)[] = {
            { Py_tp_methods, t_IonosphereFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(IonosphereFreeCombination, t_IonosphereFreeCombination, IonosphereFreeCombination);

          void t_IonosphereFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereFreeCombination), &PY_TYPE_DEF(IonosphereFreeCombination), module, "IonosphereFreeCombination", 0);
          }

          void t_IonosphereFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "class_", make_descriptor(IonosphereFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "wrapfn_", make_descriptor(t_IonosphereFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereFreeCombination::initializeClass, 1)))
              return NULL;
            return t_IonosphereFreeCombination::wrap_Object(IonosphereFreeCombination(((t_IonosphereFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereFreeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseSecantSolver::class$ = NULL;
        jmethodID *BaseSecantSolver::mids$ = NULL;
        bool BaseSecantSolver::live$ = false;

        jclass BaseSecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseSecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_95e80d55b360a35f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_82bbd98edb095e2c] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_solve_adfe53463c8924a7] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_56a10f62288dcd3e] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_e5c64c32be09ef5b] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_95e80d55b360a35f], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_82bbd98edb095e2c], a0, a1.this$, a2, a3, a4);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_adfe53463c8924a7], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BaseSecantSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_56a10f62288dcd3e], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data);
        static PyGetSetDef t_BaseSecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseSecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseSecantSolver__methods_[] = {
          DECLARE_METHOD(t_BaseSecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseSecantSolver)[] = {
          { Py_tp_methods, t_BaseSecantSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseSecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseSecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BaseSecantSolver, t_BaseSecantSolver, BaseSecantSolver);
        PyObject *t_BaseSecantSolver::wrap_Object(const BaseSecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseSecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseSecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseSecantSolver), &PY_TYPE_DEF(BaseSecantSolver), module, "BaseSecantSolver", 0);
        }

        void t_BaseSecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "class_", make_descriptor(BaseSecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "wrapfn_", make_descriptor(t_BaseSecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseSecantSolver::initializeClass, 1)))
            return NULL;
          return t_BaseSecantSolver::wrap_Object(BaseSecantSolver(((t_BaseSecantSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseSecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BaseSecantSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeIntegrator::live$ = false;

        jclass AdaptiveStepsizeIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5cf41328bbe9ebd3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_3644a0740275e98a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_b74f83833fdad017] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_b74f83833fdad017] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_88c6c25d850bcf5e] = env->getMethodID(cls, "initializeStep", "(ZI[DLorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_setInitialStepSize_8ba9fe7a847cecad] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_aa31b8b89ee72c31] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_49f4b5153d696ea5] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_67c50c21236171f5] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_9ab16ee510aba086] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_resetInternalState_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5cf41328bbe9ebd3, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3644a0740275e98a, a0.this$, a1, a2, a3, a4)) {}

        jdouble AdaptiveStepsizeIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_b74f83833fdad017]);
        }

        jdouble AdaptiveStepsizeIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_b74f83833fdad017]);
        }

        jdouble AdaptiveStepsizeIntegrator::initializeStep(jboolean a0, jint a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ODEStateAndDerivative & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_88c6c25d850bcf5e], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_8ba9fe7a847cecad], a0);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_aa31b8b89ee72c31], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_49f4b5153d696ea5], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeIntegrator, t_AdaptiveStepsizeIntegrator, AdaptiveStepsizeIntegrator);

        void t_AdaptiveStepsizeIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeIntegrator), module, "AdaptiveStepsizeIntegrator", 0);
        }

        void t_AdaptiveStepsizeIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "class_", make_descriptor(AdaptiveStepsizeIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeIntegrator::wrap_Object(AdaptiveStepsizeIntegrator(((t_AdaptiveStepsizeIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a3((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "ZI[Dk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }

        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$FieldOccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$FieldOccultationAngles::mids$ = NULL;
      bool OccultationEngine$FieldOccultationAngles::live$ = false;

      jclass OccultationEngine$FieldOccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$FieldOccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_81520b552cb3fa26] = env->getMethodID(cls, "getLimbRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOccultedApparentRadius_81520b552cb3fa26] = env->getMethodID(cls, "getOccultedApparentRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSeparation_81520b552cb3fa26] = env->getMethodID(cls, "getSeparation", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getLimbRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLimbRadius_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getOccultedApparentRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOccultedApparentRadius_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getSeparation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSeparation_81520b552cb3fa26]));
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
      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$FieldOccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, separation),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$FieldOccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, of_, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$FieldOccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$FieldOccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$FieldOccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$FieldOccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$FieldOccultationAngles, t_OccultationEngine$FieldOccultationAngles, OccultationEngine$FieldOccultationAngles);
      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_Object(const OccultationEngine$FieldOccultationAngles& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OccultationEngine$FieldOccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$FieldOccultationAngles), &PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles), module, "OccultationEngine$FieldOccultationAngles", 0);
      }

      void t_OccultationEngine$FieldOccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "class_", make_descriptor(OccultationEngine$FieldOccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$FieldOccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$FieldOccultationAngles::wrap_Object(OccultationEngine$FieldOccultationAngles(((t_OccultationEngine$FieldOccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLimbRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLimbRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log10::class$ = NULL;
        jmethodID *Log10::mids$ = NULL;
        bool Log10::live$ = false;

        jclass Log10::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log10");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log10::Log10() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Log10::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log10::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args);

        static PyMethodDef t_Log10__methods_[] = {
          DECLARE_METHOD(t_Log10, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log10)[] = {
          { Py_tp_methods, t_Log10__methods_ },
          { Py_tp_init, (void *) t_Log10_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log10)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log10, t_Log10, Log10);

        void t_Log10::install(PyObject *module)
        {
          installType(&PY_TYPE(Log10), &PY_TYPE_DEF(Log10), module, "Log10", 0);
        }

        void t_Log10::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "class_", make_descriptor(Log10::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "wrapfn_", make_descriptor(t_Log10::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log10::initializeClass, 1)))
            return NULL;
          return t_Log10::wrap_Object(Log10(((t_Log10 *) arg)->object.this$));
        }
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log10::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds)
        {
          Log10 object((jobject) NULL);

          INT_CALL(object = Log10());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args)
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
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *UnivariateIntegrator::class$ = NULL;
        jmethodID *UnivariateIntegrator::mids$ = NULL;
        bool UnivariateIntegrator::live$ = false;

        jclass UnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/UnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_076ce9f904fe1577] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble UnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint UnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jint UnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
        }

        jint UnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_55546ef6a647f39b]);
        }

        jint UnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_55546ef6a647f39b]);
        }

        jdouble UnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        jdouble UnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_076ce9f904fe1577], a0, a1.this$, a2, a3);
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
        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args);
        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyGetSetDef t_UnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_UnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateIntegrator)[] = {
          { Py_tp_methods, t_UnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateIntegrator, t_UnivariateIntegrator, UnivariateIntegrator);

        void t_UnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateIntegrator), &PY_TYPE_DEF(UnivariateIntegrator), module, "UnivariateIntegrator", 0);
        }

        void t_UnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "class_", make_descriptor(UnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "wrapfn_", make_descriptor(t_UnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_UnivariateIntegrator::wrap_Object(UnivariateIntegrator(((t_UnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1058::class$ = NULL;
              jmethodID *Rtcm1058::mids$ = NULL;
              bool Rtcm1058::live$ = false;

              jclass Rtcm1058::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9aa5d47c021c6219] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1058::Rtcm1058(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_9aa5d47c021c6219, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args);
              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data);
              static PyGetSetDef t_Rtcm1058__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1058, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1058__methods_[] = {
                DECLARE_METHOD(t_Rtcm1058, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1058)[] = {
                { Py_tp_methods, t_Rtcm1058__methods_ },
                { Py_tp_init, (void *) t_Rtcm1058_init_ },
                { Py_tp_getset, t_Rtcm1058__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1058)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1058, t_Rtcm1058, Rtcm1058);
              PyObject *t_Rtcm1058::wrap_Object(const Rtcm1058& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1058::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1058::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1058), &PY_TYPE_DEF(Rtcm1058), module, "Rtcm1058", 0);
              }

              void t_Rtcm1058::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "class_", make_descriptor(Rtcm1058::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "wrapfn_", make_descriptor(t_Rtcm1058::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1058::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1058::wrap_Object(Rtcm1058(((t_Rtcm1058 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1058::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1058 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1058(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data)
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
#include "java/util/List.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *List::class$ = NULL;
    jmethodID *List::mids$ = NULL;
    bool List::live$ = false;

    jclass List::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/List");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_0f5a71e161fd256b] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_2c414c0fcc4406f4] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_801a92d34e44726e] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_110fe1ac56c5220a] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_1a3b934d2c285d65] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_b7898c5e94612125] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_b7898c5e94612125] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_d6d68fe3f5974930] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_008647f8b2408e7c] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_of_e62d3bb06d56d7e3] = env->getStaticMethodID(cls, "of", "()Ljava/util/List;");
        mids$[mid_of_e800446ce338cd30] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_fc892452fc84d714] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_13e8ca1800b7bd64] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_259286aaa3bdb071] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_e43b1568439f917c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_2456aef1621df94c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_a47a61be819f2808] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_941a275ec011f0b1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_713368b11b1a182a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_cdb034e7a946131c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_9916f449c9f6e896] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_remove_1a3b934d2c285d65] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_c616ac8dc1767986] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_2c01874c65d2ef2f] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_39b43a702bd6611c] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean List::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    void List::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_0f5a71e161fd256b], a0, a1.this$);
    }

    jboolean List::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    jboolean List::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_2c414c0fcc4406f4], a0, a1.this$);
    }

    void List::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean List::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean List::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_801a92d34e44726e], a0.this$);
    }

    List List::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_copyOf_110fe1ac56c5220a], a0.this$));
    }

    jboolean List::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object List::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_1a3b934d2c285d65], a0));
    }

    jint List::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint List::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_b7898c5e94612125], a0.this$);
    }

    jboolean List::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator List::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jint List::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_b7898c5e94612125], a0.this$);
    }

    ::java::util::ListIterator List::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_d6d68fe3f5974930]));
    }

    ::java::util::ListIterator List::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_008647f8b2408e7c], a0));
    }

    List List::of()
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_e62d3bb06d56d7e3]));
    }

    List List::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_e800446ce338cd30], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_fc892452fc84d714], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_13e8ca1800b7bd64], a0.this$, a1.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_259286aaa3bdb071], a0.this$, a1.this$, a2.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_e43b1568439f917c], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_2456aef1621df94c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a47a61be819f2808], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_941a275ec011f0b1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_713368b11b1a182a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_cdb034e7a946131c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_9916f449c9f6e896], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    ::java::lang::Object List::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_1a3b934d2c285d65], a0));
    }

    jboolean List::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean List::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    jboolean List::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    ::java::lang::Object List::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c616ac8dc1767986], a0, a1.this$));
    }

    jint List::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    void List::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_2c01874c65d2ef2f], a0.this$);
    }

    ::java::util::Spliterator List::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    List List::subList(jint a0, jint a1) const
    {
      return List(env->callObjectMethod(this$, mids$[mid_subList_39b43a702bd6611c], a0, a1));
    }

    JArray< ::java::lang::Object > List::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > List::toArray(const JArray< ::java::lang::Object > & a0) const
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
    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_of_(t_List *self, PyObject *args);
    static PyObject *t_List_add(t_List *self, PyObject *args);
    static PyObject *t_List_addAll(t_List *self, PyObject *args);
    static PyObject *t_List_clear(t_List *self, PyObject *args);
    static PyObject *t_List_contains(t_List *self, PyObject *args);
    static PyObject *t_List_containsAll(t_List *self, PyObject *args);
    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_equals(t_List *self, PyObject *args);
    static PyObject *t_List_get(t_List *self, PyObject *arg);
    static PyObject *t_List_hashCode(t_List *self, PyObject *args);
    static PyObject *t_List_indexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_isEmpty(t_List *self, PyObject *args);
    static PyObject *t_List_iterator(t_List *self, PyObject *args);
    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_listIterator(t_List *self, PyObject *args);
    static PyObject *t_List_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_List_remove(t_List *self, PyObject *args);
    static PyObject *t_List_removeAll(t_List *self, PyObject *args);
    static PyObject *t_List_retainAll(t_List *self, PyObject *args);
    static PyObject *t_List_set(t_List *self, PyObject *args);
    static PyObject *t_List_size(t_List *self, PyObject *args);
    static PyObject *t_List_sort(t_List *self, PyObject *arg);
    static PyObject *t_List_spliterator(t_List *self, PyObject *args);
    static PyObject *t_List_subList(t_List *self, PyObject *args);
    static PyObject *t_List_toArray(t_List *self, PyObject *args);
    static PyObject *t_List_get__empty(t_List *self, void *data);
    static PyObject *t_List_get__parameters_(t_List *self, void *data);
    static PyGetSetDef t_List__fields_[] = {
      DECLARE_GET_FIELD(t_List, empty),
      DECLARE_GET_FIELD(t_List, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_List__methods_[] = {
      DECLARE_METHOD(t_List, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, of_, METH_VARARGS),
      DECLARE_METHOD(t_List, add, METH_VARARGS),
      DECLARE_METHOD(t_List, addAll, METH_VARARGS),
      DECLARE_METHOD(t_List, clear, METH_VARARGS),
      DECLARE_METHOD(t_List, contains, METH_VARARGS),
      DECLARE_METHOD(t_List, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_List, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, equals, METH_VARARGS),
      DECLARE_METHOD(t_List, get, METH_O),
      DECLARE_METHOD(t_List, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_List, indexOf, METH_O),
      DECLARE_METHOD(t_List, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_List, iterator, METH_VARARGS),
      DECLARE_METHOD(t_List, lastIndexOf, METH_O),
      DECLARE_METHOD(t_List, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_List, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_List, remove, METH_VARARGS),
      DECLARE_METHOD(t_List, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_List, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_List, set, METH_VARARGS),
      DECLARE_METHOD(t_List, size, METH_VARARGS),
      DECLARE_METHOD(t_List, sort, METH_O),
      DECLARE_METHOD(t_List, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_List, subList, METH_VARARGS),
      DECLARE_METHOD(t_List, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(List)[] = {
      { Py_tp_methods, t_List__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_List__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_List *)) get_generic_iterator< t_List >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(List)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(List, t_List, List);
    PyObject *t_List::wrap_Object(const List& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_List::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_List::install(PyObject *module)
    {
      installType(&PY_TYPE(List), &PY_TYPE_DEF(List), module, "List", 0);
    }

    void t_List::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "class_", make_descriptor(List::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "wrapfn_", make_descriptor(t_List::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, List::initializeClass, 1)))
        return NULL;
      return t_List::wrap_Object(List(((t_List *) arg)->object.this$));
    }
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, List::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_List_of_(t_List *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_List_add(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_List_addAll(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_List_clear(t_List *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_List_contains(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_List_containsAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::List::copyOf(a0));
        return t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_List_equals(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_List_get(t_List *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_List_hashCode(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_List_indexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_List_isEmpty(t_List *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_List_iterator(t_List *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_List_listIterator(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_List_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          List result((jobject) NULL);
          OBJ_CALL(result = ::java::util::List::of());
          return t_List::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_List::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_List_remove(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_List_removeAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_List_retainAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_List_set(t_List *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_List_size(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_List_sort(t_List *self, PyObject *arg)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "sort", arg);
      return NULL;
    }

    static PyObject *t_List_spliterator(t_List *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_List_subList(t_List *self, PyObject *args)
    {
      jint a0;
      jint a1;
      List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }

    static PyObject *t_List_toArray(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_List_get__parameters_(t_List *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_List_get__empty(t_List *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateVectorFunction::class$ = NULL;
      jmethodID *MultivariateVectorFunction::mids$ = NULL;
      bool MultivariateVectorFunction::live$ = false;

      jclass MultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_14dee4cb8cc3e959] = env->getMethodID(cls, "value", "([D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > MultivariateVectorFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_14dee4cb8cc3e959], a0.this$));
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
      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateVectorFunction)[] = {
        { Py_tp_methods, t_MultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateVectorFunction, t_MultivariateVectorFunction, MultivariateVectorFunction);

      void t_MultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateVectorFunction), &PY_TYPE_DEF(MultivariateVectorFunction), module, "MultivariateVectorFunction", 0);
      }

      void t_MultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "class_", make_descriptor(MultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "wrapfn_", make_descriptor(t_MultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateVectorFunction::wrap_Object(MultivariateVectorFunction(((t_MultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AdditionalDerivativesProvider::class$ = NULL;
        jmethodID *AdditionalDerivativesProvider::mids$ = NULL;
        bool AdditionalDerivativesProvider::live$ = false;

        jclass AdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_f7e02f1d7093fbbb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::CombinedDerivatives AdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_f7e02f1d7093fbbb], a0.this$));
        }

        jint AdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        ::java::lang::String AdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        void AdditionalDerivativesProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        jboolean AdditionalDerivativesProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
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
      namespace integration {
        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data);
        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_AdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_AdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_AdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdditionalDerivativesProvider, t_AdditionalDerivativesProvider, AdditionalDerivativesProvider);

        void t_AdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AdditionalDerivativesProvider), &PY_TYPE_DEF(AdditionalDerivativesProvider), module, "AdditionalDerivativesProvider", 0);
        }

        void t_AdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "class_", make_descriptor(AdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_AdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_AdditionalDerivativesProvider::wrap_Object(AdditionalDerivativesProvider(((t_AdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanObserver::class$ = NULL;
        jmethodID *KalmanObserver::mids$ = NULL;
        bool KalmanObserver::live$ = false;

        jclass KalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_406840a7e4ebe025] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanObserver::evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_406840a7e4ebe025], a0.this$);
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
        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg);

        static PyMethodDef t_KalmanObserver__methods_[] = {
          DECLARE_METHOD(t_KalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, evaluationPerformed, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanObserver)[] = {
          { Py_tp_methods, t_KalmanObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanObserver, t_KalmanObserver, KalmanObserver);

        void t_KalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanObserver), &PY_TYPE_DEF(KalmanObserver), module, "KalmanObserver", 0);
        }

        void t_KalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "class_", make_descriptor(KalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "wrapfn_", make_descriptor(t_KalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanObserver::initializeClass, 1)))
            return NULL;
          return t_KalmanObserver::wrap_Object(KalmanObserver(((t_KalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanEstimation a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &a0))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log::class$ = NULL;
        jmethodID *Log::mids$ = NULL;
        bool Log::live$ = false;

        jclass Log::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log::Log() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Log::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log_value(t_Log *self, PyObject *args);

        static PyMethodDef t_Log__methods_[] = {
          DECLARE_METHOD(t_Log, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log)[] = {
          { Py_tp_methods, t_Log__methods_ },
          { Py_tp_init, (void *) t_Log_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log, t_Log, Log);

        void t_Log::install(PyObject *module)
        {
          installType(&PY_TYPE(Log), &PY_TYPE_DEF(Log), module, "Log", 0);
        }

        void t_Log::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "class_", make_descriptor(Log::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "wrapfn_", make_descriptor(t_Log::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log::initializeClass, 1)))
            return NULL;
          return t_Log::wrap_Object(Log(((t_Log *) arg)->object.this$));
        }
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds)
        {
          Log object((jobject) NULL);

          INT_CALL(object = Log());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log_value(t_Log *self, PyObject *args)
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
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessMultivariateStatistic::class$ = NULL;
        jmethodID *StorelessMultivariateStatistic::mids$ = NULL;
        bool StorelessMultivariateStatistic::live$ = false;

        jclass StorelessMultivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessMultivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_25e1757a36c4dde2] = env->getMethodID(cls, "getResult", "()[D");
            mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessMultivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        jint StorelessMultivariateStatistic::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        jlong StorelessMultivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        JArray< jdouble > StorelessMultivariateStatistic::getResult() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_25e1757a36c4dde2]));
        }

        void StorelessMultivariateStatistic::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
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
        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessMultivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, dimension),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessMultivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessMultivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessMultivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessMultivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessMultivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessMultivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StorelessMultivariateStatistic, t_StorelessMultivariateStatistic, StorelessMultivariateStatistic);

        void t_StorelessMultivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessMultivariateStatistic), &PY_TYPE_DEF(StorelessMultivariateStatistic), module, "StorelessMultivariateStatistic", 0);
        }

        void t_StorelessMultivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "class_", make_descriptor(StorelessMultivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "wrapfn_", make_descriptor(t_StorelessMultivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessMultivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessMultivariateStatistic::wrap_Object(StorelessMultivariateStatistic(((t_StorelessMultivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessMultivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getResult());
          return result.wrap();
        }

        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getResult());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GPSScale::class$ = NULL;
      jmethodID *GPSScale::mids$ = NULL;
      bool GPSScale::live$ = false;

      jclass GPSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GPSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GPSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble GPSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GPSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble GPSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String GPSScale::toString() const
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
    namespace time {
      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_getName(t_GPSScale *self);
      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data);
      static PyGetSetDef t_GPSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GPSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GPSScale__methods_[] = {
        DECLARE_METHOD(t_GPSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GPSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GPSScale)[] = {
        { Py_tp_methods, t_GPSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GPSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GPSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GPSScale, t_GPSScale, GPSScale);

      void t_GPSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GPSScale), &PY_TYPE_DEF(GPSScale), module, "GPSScale", 0);
      }

      void t_GPSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "class_", make_descriptor(GPSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "wrapfn_", make_descriptor(t_GPSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GPSScale::initializeClass, 1)))
          return NULL;
        return t_GPSScale::wrap_Object(GPSScale(((t_GPSScale *) arg)->object.this$));
      }
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GPSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GPSScale_getName(t_GPSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args)
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

      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args)
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

      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GPSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaOneModel::class$ = NULL;
          jmethodID *ViennaOneModel::mids$ = NULL;
          bool ViennaOneModel::live$ = false;

          jclass ViennaOneModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaOneModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_0559b4bd8fb5191f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_0b467d379fb3f504] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_90983db312f6218b] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0559b4bd8fb5191f, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_0b467d379fb3f504], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_90983db312f6218b], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaOneModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          JArray< jdouble > ViennaOneModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
          }

          jdouble ViennaOneModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaOneModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self);
          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data);
          static PyGetSetDef t_ViennaOneModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaOneModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaOneModel__methods_[] = {
            DECLARE_METHOD(t_ViennaOneModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaOneModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaOneModel)[] = {
            { Py_tp_methods, t_ViennaOneModel__methods_ },
            { Py_tp_init, (void *) t_ViennaOneModel_init_ },
            { Py_tp_getset, t_ViennaOneModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaOneModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaOneModel, t_ViennaOneModel, ViennaOneModel);

          void t_ViennaOneModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaOneModel), &PY_TYPE_DEF(ViennaOneModel), module, "ViennaOneModel", 0);
          }

          void t_ViennaOneModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "class_", make_descriptor(ViennaOneModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "wrapfn_", make_descriptor(t_ViennaOneModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaOneModel::initializeClass, 1)))
              return NULL;
            return t_ViennaOneModel::wrap_Object(ViennaOneModel(((t_ViennaOneModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaOneModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1, a2));
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

          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory$FieldModel::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory$FieldModel::mids$ = NULL;
        bool GeoMagneticFieldFactory$FieldModel::live$ = false;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::IGRF = NULL;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::WMM = NULL;

        jclass GeoMagneticFieldFactory$FieldModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_3236e0afb527ed24] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");
            mids$[mid_values_496c39365c848b45] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            IGRF = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "IGRF", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            WMM = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "WMM", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticFieldFactory$FieldModel GeoMagneticFieldFactory$FieldModel::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GeoMagneticFieldFactory$FieldModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3236e0afb527ed24], a0.this$));
        }

        JArray< GeoMagneticFieldFactory$FieldModel > GeoMagneticFieldFactory$FieldModel::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< GeoMagneticFieldFactory$FieldModel >(env->callStaticObjectMethod(cls, mids$[mid_values_496c39365c848b45]));
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
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory$FieldModel__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory$FieldModel, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory$FieldModel__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory$FieldModel)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory$FieldModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory$FieldModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory$FieldModel)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory$FieldModel, t_GeoMagneticFieldFactory$FieldModel, GeoMagneticFieldFactory$FieldModel);
        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_Object(const GeoMagneticFieldFactory$FieldModel& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeoMagneticFieldFactory$FieldModel::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory$FieldModel), &PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel), module, "GeoMagneticFieldFactory$FieldModel", 0);
        }

        void t_GeoMagneticFieldFactory$FieldModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "class_", make_descriptor(GeoMagneticFieldFactory$FieldModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "boxfn_", make_descriptor(boxObject));
          env->getClass(GeoMagneticFieldFactory$FieldModel::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "IGRF", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::IGRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "WMM", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::WMM)));
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(GeoMagneticFieldFactory$FieldModel(((t_GeoMagneticFieldFactory$FieldModel *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          GeoMagneticFieldFactory$FieldModel result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::valueOf(a0));
            return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type)
        {
          JArray< GeoMagneticFieldFactory$FieldModel > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::values());
          return JArray<jobject>(result.this$).wrap(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject);
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondaryODE::class$ = NULL;
      jmethodID *SecondaryODE::mids$ = NULL;
      bool SecondaryODE::live$ = false;

      jclass SecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_38c4aceeacb4f117] = env->getMethodID(cls, "computeDerivatives", "(D[D[D[D)[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_b21d723b0324dcb8] = env->getMethodID(cls, "init", "(D[D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondaryODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_38c4aceeacb4f117], a0, a1.this$, a2.this$, a3.this$));
      }

      jint SecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void SecondaryODE::init(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_b21d723b0324dcb8], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self);
      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data);
      static PyGetSetDef t_SecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondaryODE__methods_[] = {
        DECLARE_METHOD(t_SecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondaryODE)[] = {
        { Py_tp_methods, t_SecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondaryODE, t_SecondaryODE, SecondaryODE);

      void t_SecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondaryODE), &PY_TYPE_DEF(SecondaryODE), module, "SecondaryODE", 0);
      }

      void t_SecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "class_", make_descriptor(SecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "wrapfn_", make_descriptor(t_SecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondaryODE::initializeClass, 1)))
          return NULL;
        return t_SecondaryODE::wrap_Object(SecondaryODE(((t_SecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D[D", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[D[DD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data)
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
#include "org/orekit/bodies/PythonIAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/IAUPole.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonIAUPole::class$ = NULL;
      jmethodID *PythonIAUPole::mids$ = NULL;
      bool PythonIAUPole::live$ = false;

      jclass PythonIAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonIAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getNode_082e6346b274f880] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_362941be972fb4b5] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_082e6346b274f880] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_362941be972fb4b5] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_fd347811007a6ba3] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_140b8964300ddedf] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonIAUPole::PythonIAUPole() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonIAUPole::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonIAUPole::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonIAUPole::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self);
      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args);
      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data);
      static PyGetSetDef t_PythonIAUPole__fields_[] = {
        DECLARE_GET_FIELD(t_PythonIAUPole, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonIAUPole__methods_[] = {
        DECLARE_METHOD(t_PythonIAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonIAUPole, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonIAUPole)[] = {
        { Py_tp_methods, t_PythonIAUPole__methods_ },
        { Py_tp_init, (void *) t_PythonIAUPole_init_ },
        { Py_tp_getset, t_PythonIAUPole__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonIAUPole)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonIAUPole, t_PythonIAUPole, PythonIAUPole);

      void t_PythonIAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonIAUPole), &PY_TYPE_DEF(PythonIAUPole), module, "PythonIAUPole", 1);
      }

      void t_PythonIAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "class_", make_descriptor(PythonIAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "wrapfn_", make_descriptor(t_PythonIAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonIAUPole::initializeClass);
        JNINativeMethod methods[] = {
          { "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getNode0 },
          { "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getNode1 },
          { "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getPole2 },
          { "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getPole3 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonIAUPole_getPrimeMeridianAngle4 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIAUPole_getPrimeMeridianAngle5 },
          { "pythonDecRef", "()V", (void *) t_PythonIAUPole_pythonDecRef6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonIAUPole::initializeClass, 1)))
          return NULL;
        return t_PythonIAUPole::wrap_Object(PythonIAUPole(((t_PythonIAUPole *) arg)->object.this$));
      }
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonIAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds)
      {
        PythonIAUPole object((jobject) NULL);

        INT_CALL(object = PythonIAUPole());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args)
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

      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
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

      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data)
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
#include "org/orekit/forces/PointingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PointingPanel::class$ = NULL;
      jmethodID *PointingPanel::mids$ = NULL;
      bool PointingPanel::live$ = false;

      jclass PointingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PointingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0770d62b0f8f4dbe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DDDDD)V");
          mids$[mid_getNormal_de3c04262e60a5b3] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_9019a5b32b11453a] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointingPanel::PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_0770d62b0f8f4dbe, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PointingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_de3c04262e60a5b3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PointingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_9019a5b32b11453a], a0.this$));
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
      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args);

      static PyMethodDef t_PointingPanel__methods_[] = {
        DECLARE_METHOD(t_PointingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointingPanel)[] = {
        { Py_tp_methods, t_PointingPanel__methods_ },
        { Py_tp_init, (void *) t_PointingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(PointingPanel, t_PointingPanel, PointingPanel);

      void t_PointingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(PointingPanel), &PY_TYPE_DEF(PointingPanel), module, "PointingPanel", 0);
      }

      void t_PointingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "class_", make_descriptor(PointingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "wrapfn_", make_descriptor(t_PointingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointingPanel::initializeClass, 1)))
          return NULL;
        return t_PointingPanel::wrap_Object(PointingPanel(((t_PointingPanel *) arg)->object.this$));
      }
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        PointingPanel object((jobject) NULL);

        if (!parseArgs(args, "kkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = PointingPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args)
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

        return callSuper(PY_TYPE(PointingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeSystem::class$ = NULL;
          jmethodID *TimeSystem::mids$ = NULL;
          bool TimeSystem::live$ = false;
          TimeSystem *TimeSystem::GMST = NULL;
          TimeSystem *TimeSystem::GPS = NULL;
          TimeSystem *TimeSystem::MET = NULL;
          TimeSystem *TimeSystem::MRT = NULL;
          TimeSystem *TimeSystem::SCLK = NULL;
          TimeSystem *TimeSystem::TAI = NULL;
          TimeSystem *TimeSystem::TCB = NULL;
          TimeSystem *TimeSystem::TCG = NULL;
          TimeSystem *TimeSystem::TDB = NULL;
          TimeSystem *TimeSystem::TT = NULL;
          TimeSystem *TimeSystem::UT1 = NULL;
          TimeSystem *TimeSystem::UTC = NULL;

          jclass TimeSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConverter_45ac3c12f126fa2a] = env->getMethodID(cls, "getConverter", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)Lorg/orekit/files/ccsds/definitions/TimeConverter;");
              mids$[mid_parse_67204ebc4d451065] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_valueOf_67204ebc4d451065] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_values_893f34a3cc18ea0d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/TimeSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GMST = new TimeSystem(env->getStaticObjectField(cls, "GMST", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MET = new TimeSystem(env->getStaticObjectField(cls, "MET", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MRT = new TimeSystem(env->getStaticObjectField(cls, "MRT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              SCLK = new TimeSystem(env->getStaticObjectField(cls, "SCLK", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCB = new TimeSystem(env->getStaticObjectField(cls, "TCB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCG = new TimeSystem(env->getStaticObjectField(cls, "TCG", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TDB = new TimeSystem(env->getStaticObjectField(cls, "TDB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TT = new TimeSystem(env->getStaticObjectField(cls, "TT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UT1 = new TimeSystem(env->getStaticObjectField(cls, "UT1", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeConverter TimeSystem::getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
          {
            return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getConverter_45ac3c12f126fa2a], a0.this$));
          }

          TimeSystem TimeSystem::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_67204ebc4d451065], a0.this$));
          }

          TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_67204ebc4d451065], a0.this$));
          }

          JArray< TimeSystem > TimeSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_893f34a3cc18ea0d]));
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
          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg);
          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TimeSystem_values(PyTypeObject *type);
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
          static PyGetSetDef t_TimeSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystem__methods_[] = {
            DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TimeSystem, getConverter, METH_O),
            DECLARE_METHOD(t_TimeSystem, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
            { Py_tp_methods, t_TimeSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TimeSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
          PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TimeSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
          }

          void t_TimeSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMST", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MET", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MRT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MRT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SCLK", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SCLK)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCG", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TDB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TDB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UT1", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UT1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
          }

          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
              return NULL;
            return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
          }
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getConverter(a0));
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConverter", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::parse(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::valueOf(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TimeSystem_values(PyTypeObject *type)
          {
            JArray< TimeSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
          }
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
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
#include "org/hipparchus/util/Binary64Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/Binary64.h"
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
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_dab962c4ddcd5467] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/Binary64Field;");
          mids$[mid_getOne_08945ef61eb92dcf] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_08945ef61eb92dcf] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Binary64Field::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      Binary64Field Binary64Field::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return Binary64Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_dab962c4ddcd5467]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getOne() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getOne_08945ef61eb92dcf]));
      }

      ::java::lang::Class Binary64Field::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getZero() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getZero_08945ef61eb92dcf]));
      }

      jint Binary64Field::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/PVCoordinates.h"
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
          mids$[mid_init$_5cdceeb17ad9585c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_1e47dd5ffc56db57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_a592ae8491041610] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_6b36e41f0ff6a962] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_a6d2f335ff825b52] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_revert_9825c51fb1940671] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_shiftedBy_a35c7d9d944e9ca5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_subtractOffset_a6d2f335ff825b52] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5cdceeb17ad9585c, a0.this$, a1.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1e47dd5ffc56db57, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a592ae8491041610, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6b36e41f0ff6a962, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::addOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_a6d2f335ff825b52], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate TimeStampedAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::revert() const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_9825c51fb1940671]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_a35c7d9d944e9ca5], a0));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::subtractOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_a6d2f335ff825b52], a0.this$));
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
#include "java/text/NumberFormat.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "java/lang/Number.h"
#include "java/text/ParseException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/lang/Object.h"
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
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_11ae2994efd15504] = env->getMethodID(cls, "format", "(D)Ljava/lang/String;");
        mids$[mid_format_9078858c11a58b1e] = env->getMethodID(cls, "format", "(J)Ljava/lang/String;");
        mids$[mid_format_cdee9bc08b68d2f3] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1d561f51d282798c] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_5c4bce1ad9114b42] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencyInstance_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getCurrencyInstance_3c858cd11341b00a] = env->getStaticMethodID(cls, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getInstance_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getInstance_3c858cd11341b00a] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getIntegerInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_3c858cd11341b00a] = env->getStaticMethodID(cls, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getMaximumFractionDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getNumberInstance_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getNumberInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getNumberInstance_3c858cd11341b00a] = env->getStaticMethodID(cls, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getPercentInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_3c858cd11341b00a] = env->getStaticMethodID(cls, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isGroupingUsed_9ab94ac1dc23b105] = env->getMethodID(cls, "isGroupingUsed", "()Z");
        mids$[mid_isParseIntegerOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "isParseIntegerOnly", "()Z");
        mids$[mid_parse_3767780c432a8ea3] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
        mids$[mid_parse_a972e28e38f8fd3f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_parseObject_ad5444510b7b5820] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
        mids$[mid_setCurrency_4943c1e384d46623] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setGroupingUsed_fcb96c98de6fad04] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setParseIntegerOnly_fcb96c98de6fad04] = env->getMethodID(cls, "setParseIntegerOnly", "(Z)V");

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
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean NumberFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::String NumberFormat::format(jdouble a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_11ae2994efd15504], a0));
    }

    ::java::lang::String NumberFormat::format(jlong a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_9078858c11a58b1e], a0));
    }

    ::java::lang::StringBuffer NumberFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_cdee9bc08b68d2f3], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1d561f51d282798c], a0, a1.this$, a2.this$));
    }

    JArray< ::java::util::Locale > NumberFormat::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
    }

    ::java::util::Currency NumberFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_5c4bce1ad9114b42]));
    }

    NumberFormat NumberFormat::getCurrencyInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_87ffffc449cd25a5]));
    }

    NumberFormat NumberFormat::getCurrencyInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_3c858cd11341b00a], a0.this$));
    }

    NumberFormat NumberFormat::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_87ffffc449cd25a5]));
    }

    NumberFormat NumberFormat::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3c858cd11341b00a], a0.this$));
    }

    NumberFormat NumberFormat::getIntegerInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_87ffffc449cd25a5]));
    }

    NumberFormat NumberFormat::getIntegerInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_3c858cd11341b00a], a0.this$));
    }

    jint NumberFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_55546ef6a647f39b]);
    }

    jint NumberFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_55546ef6a647f39b]);
    }

    jint NumberFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_55546ef6a647f39b]);
    }

    jint NumberFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_55546ef6a647f39b]);
    }

    NumberFormat NumberFormat::getNumberInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_87ffffc449cd25a5]));
    }

    NumberFormat NumberFormat::getNumberInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_3c858cd11341b00a], a0.this$));
    }

    NumberFormat NumberFormat::getPercentInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_87ffffc449cd25a5]));
    }

    NumberFormat NumberFormat::getPercentInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_3c858cd11341b00a], a0.this$));
    }

    jint NumberFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean NumberFormat::isGroupingUsed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isGroupingUsed_9ab94ac1dc23b105]);
    }

    jboolean NumberFormat::isParseIntegerOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseIntegerOnly_9ab94ac1dc23b105]);
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_3767780c432a8ea3], a0.this$));
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_a972e28e38f8fd3f], a0.this$, a1.this$));
    }

    ::java::lang::Object NumberFormat::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_ad5444510b7b5820], a0.this$, a1.this$));
    }

    void NumberFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4943c1e384d46623], a0.this$);
    }

    void NumberFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_fcb96c98de6fad04], a0);
    }

    void NumberFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_44ed599e93e8a30c], a0);
    }

    void NumberFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_44ed599e93e8a30c], a0);
    }

    void NumberFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_44ed599e93e8a30c], a0);
    }

    void NumberFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_44ed599e93e8a30c], a0);
    }

    void NumberFormat::setParseIntegerOnly(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseIntegerOnly_fcb96c98de6fad04], a0);
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
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue::class$ = NULL;
          jmethodID *FieldRecordAndContinue::mids$ = NULL;
          bool FieldRecordAndContinue::live$ = false;

          jclass FieldRecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRecordAndContinue::FieldRecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          FieldRecordAndContinue::FieldRecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

          void FieldRecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          ::org::hipparchus::ode::events::Action FieldRecordAndContinue::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
          }

          ::java::util::List FieldRecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_e62d3bb06d56d7e3]));
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
          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args);
          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data);
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, events),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_FieldRecordAndContinue_init_ },
            { Py_tp_getset, t_FieldRecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue, t_FieldRecordAndContinue, FieldRecordAndContinue);
          PyObject *t_FieldRecordAndContinue::wrap_Object(const FieldRecordAndContinue& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue), &PY_TYPE_DEF(FieldRecordAndContinue), module, "FieldRecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(FieldRecordAndContinue$Event)));
          }

          void t_FieldRecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "class_", make_descriptor(FieldRecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "wrapfn_", make_descriptor(t_FieldRecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue::wrap_Object(FieldRecordAndContinue(((t_FieldRecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                FieldRecordAndContinue object((jobject) NULL);

                INT_CALL(object = FieldRecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = FieldRecordAndContinue(a0));
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

          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args)
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

          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result);
          }
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/UpdatableFrame.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *UpdatableFrame::class$ = NULL;
      jmethodID *UpdatableFrame::mids$ = NULL;
      bool UpdatableFrame::live$ = false;

      jclass UpdatableFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/UpdatableFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c6446c6a66066a58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_9ce69abbd2d1e9a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_updateTransform_4bab67e94de5451c] = env->getMethodID(cls, "updateTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_c6446c6a66066a58, a0.this$, a1.this$, a2.this$)) {}

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9ce69abbd2d1e9a2, a0.this$, a1.this$, a2.this$, a3)) {}

      void UpdatableFrame::updateTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_updateTransform_4bab67e94de5451c], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args);

      static PyMethodDef t_UpdatableFrame__methods_[] = {
        DECLARE_METHOD(t_UpdatableFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, updateTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UpdatableFrame)[] = {
        { Py_tp_methods, t_UpdatableFrame__methods_ },
        { Py_tp_init, (void *) t_UpdatableFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UpdatableFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(UpdatableFrame, t_UpdatableFrame, UpdatableFrame);

      void t_UpdatableFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(UpdatableFrame), &PY_TYPE_DEF(UpdatableFrame), module, "UpdatableFrame", 0);
      }

      void t_UpdatableFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "class_", make_descriptor(UpdatableFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "wrapfn_", make_descriptor(t_UpdatableFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UpdatableFrame::initializeClass, 1)))
          return NULL;
        return t_UpdatableFrame::wrap_Object(UpdatableFrame(((t_UpdatableFrame *) arg)->object.this$));
      }
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UpdatableFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2, a3));
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

      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::frames::Transform a2((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a3((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.updateTransform(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "updateTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEnablingPredicate::class$ = NULL;
        jmethodID *PythonFieldEnablingPredicate::mids$ = NULL;
        bool PythonFieldEnablingPredicate::live$ = false;

        jclass PythonFieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_998abd1e19002665] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEnablingPredicate::PythonFieldEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldEnablingPredicate::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self);
        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data);
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonFieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, self),
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonFieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonFieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEnablingPredicate, t_PythonFieldEnablingPredicate, PythonFieldEnablingPredicate);
        PyObject *t_PythonFieldEnablingPredicate::wrap_Object(const PythonFieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEnablingPredicate), &PY_TYPE_DEF(PythonFieldEnablingPredicate), module, "PythonFieldEnablingPredicate", 1);
        }

        void t_PythonFieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "class_", make_descriptor(PythonFieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "wrapfn_", make_descriptor(t_PythonFieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonFieldEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEnablingPredicate::wrap_Object(PythonFieldEnablingPredicate(((t_PythonFieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonFieldEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data)
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
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
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
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractVariableStepFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
