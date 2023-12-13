#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *StateMapper::class$ = NULL;
        jmethodID *StateMapper::mids$ = NULL;
        bool StateMapper::live$ = false;

        jclass StateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/StateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapArrayToState_99fed456829e6a47] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapArrayToState_f59d6c4cec8d64b7] = env->getMethodID(cls, "mapArrayToState", "(D[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapDateToDouble_fd347811007a6ba3] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_mapDoubleToDate_f359a0110559347a] = env->getMethodID(cls, "mapDoubleToDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapDoubleToDate_b68cf37667e0f101] = env->getMethodID(cls, "mapDoubleToDate", "(DLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapStateToArray_915c7d1930588394] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider StateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
        }

        ::org::orekit::frames::Frame StateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        jdouble StateMapper::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::orbits::OrbitType StateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::orbits::PositionAngleType StateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_99fed456829e6a47], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_f59d6c4cec8d64b7], a0, a1.this$, a2.this$, a3.this$));
        }

        jdouble StateMapper::mapDateToDouble(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mapDateToDouble_fd347811007a6ba3], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_f359a0110559347a], a0));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_b68cf37667e0f101], a0, a1.this$));
        }

        void StateMapper::mapStateToArray(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_915c7d1930588394], a0.this$, a1.this$, a2.this$);
        }

        void StateMapper::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
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
        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self);
        static PyObject *t_StateMapper_getFrame(t_StateMapper *self);
        static PyObject *t_StateMapper_getMu(t_StateMapper *self);
        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self);
        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self);
        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self);
        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data);
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data);
        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data);
        static PyGetSetDef t_StateMapper__fields_[] = {
          DECLARE_GETSET_FIELD(t_StateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_StateMapper, frame),
          DECLARE_GET_FIELD(t_StateMapper, mu),
          DECLARE_GET_FIELD(t_StateMapper, orbitType),
          DECLARE_GET_FIELD(t_StateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_StateMapper, referenceDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StateMapper__methods_[] = {
          DECLARE_METHOD(t_StateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_StateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateMapper)[] = {
          { Py_tp_methods, t_StateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateMapper, t_StateMapper, StateMapper);

        void t_StateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(StateMapper), &PY_TYPE_DEF(StateMapper), module, "StateMapper", 0);
        }

        void t_StateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "class_", make_descriptor(StateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "wrapfn_", make_descriptor(t_StateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateMapper::initializeClass, 1)))
            return NULL;
          return t_StateMapper::wrap_Object(StateMapper(((t_StateMapper *) arg)->object.this$));
        }
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getFrame(t_StateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getMu(t_StateMapper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[D[DK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "D[D[DK", ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonAtmosphere::class$ = NULL;
          jmethodID *PythonAtmosphere::mids$ = NULL;
          bool PythonAtmosphere::live$ = false;

          jclass PythonAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_2e30102aa3d53198] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_b79629c6a3fafdaa] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAtmosphere::PythonAtmosphere() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonAtmosphere::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAtmosphere::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAtmosphere::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self);
          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args);
          static jobject JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jdouble JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data);
          static PyGetSetDef t_PythonAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAtmosphere, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAtmosphere__methods_[] = {
            DECLARE_METHOD(t_PythonAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAtmosphere, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphere)[] = {
            { Py_tp_methods, t_PythonAtmosphere__methods_ },
            { Py_tp_init, (void *) t_PythonAtmosphere_init_ },
            { Py_tp_getset, t_PythonAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAtmosphere, t_PythonAtmosphere, PythonAtmosphere);

          void t_PythonAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAtmosphere), &PY_TYPE_DEF(PythonAtmosphere), module, "PythonAtmosphere", 1);
          }

          void t_PythonAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "class_", make_descriptor(PythonAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "wrapfn_", make_descriptor(t_PythonAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAtmosphere::initializeClass);
            JNINativeMethod methods[] = {
              { "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAtmosphere_getDensity0 },
              { "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D", (void *) t_PythonAtmosphere_getDensity1 },
              { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAtmosphere_getFrame2 },
              { "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAtmosphere_getVelocity3 },
              { "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAtmosphere_getVelocity4 },
              { "pythonDecRef", "()V", (void *) t_PythonAtmosphere_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAtmosphere::initializeClass, 1)))
              return NULL;
            return t_PythonAtmosphere::wrap_Object(PythonAtmosphere(((t_PythonAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            PythonAtmosphere object((jobject) NULL);

            INT_CALL(object = PythonAtmosphere());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args)
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

          static jobject JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getDensity", result);
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

          static jdouble JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDensity", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::frames::Frame value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              throwTypeError("getFrame", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
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

              ::java::lang::Class *Rtcm1064::class$ = NULL;
              jmethodID *Rtcm1064::mids$ = NULL;
              bool Rtcm1064::live$ = false;

              jclass Rtcm1064::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9aa5d47c021c6219] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1064::Rtcm1064(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_9aa5d47c021c6219, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args);
              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data);
              static PyGetSetDef t_Rtcm1064__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1064, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1064__methods_[] = {
                DECLARE_METHOD(t_Rtcm1064, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1064)[] = {
                { Py_tp_methods, t_Rtcm1064__methods_ },
                { Py_tp_init, (void *) t_Rtcm1064_init_ },
                { Py_tp_getset, t_Rtcm1064__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1064)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1064, t_Rtcm1064, Rtcm1064);
              PyObject *t_Rtcm1064::wrap_Object(const Rtcm1064& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1064::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1064::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1064), &PY_TYPE_DEF(Rtcm1064), module, "Rtcm1064", 0);
              }

              void t_Rtcm1064::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "class_", make_descriptor(Rtcm1064::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "wrapfn_", make_descriptor(t_Rtcm1064::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1064::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1064::wrap_Object(Rtcm1064(((t_Rtcm1064 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1064::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1064 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1064(a0, a1, a2));
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
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data)
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
#include "org/hipparchus/random/Well19937a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937a::class$ = NULL;
      jmethodID *Well19937a::mids$ = NULL;
      bool Well19937a::live$ = false;

      jclass Well19937a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937a::Well19937a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well19937a::Well19937a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well19937a::Well19937a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well19937a::Well19937a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well19937a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
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
      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args);

      static PyMethodDef t_Well19937a__methods_[] = {
        DECLARE_METHOD(t_Well19937a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937a)[] = {
        { Py_tp_methods, t_Well19937a__methods_ },
        { Py_tp_init, (void *) t_Well19937a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937a, t_Well19937a, Well19937a);

      void t_Well19937a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937a), &PY_TYPE_DEF(Well19937a), module, "Well19937a", 0);
      }

      void t_Well19937a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "class_", make_descriptor(Well19937a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "wrapfn_", make_descriptor(t_Well19937a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937a::initializeClass, 1)))
          return NULL;
        return t_Well19937a::wrap_Object(Well19937a(((t_Well19937a *) arg)->object.this$));
      }
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937a object((jobject) NULL);

            INT_CALL(object = Well19937a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937a(a0));
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

      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937a), (PyObject *) self, "nextInt", args, 2);
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
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanEstimation::class$ = NULL;
        jmethodID *PythonKalmanEstimation::mids$ = NULL;
        bool PythonKalmanEstimation::live$ = false;

        jclass PythonKalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanEstimation::PythonKalmanEstimation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonKalmanEstimation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonKalmanEstimation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonKalmanEstimation::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self);
        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data);
        static PyGetSetDef t_PythonKalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanEstimation, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanEstimation, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanEstimation)[] = {
          { Py_tp_methods, t_PythonKalmanEstimation__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanEstimation_init_ },
          { Py_tp_getset, t_PythonKalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanEstimation, t_PythonKalmanEstimation, PythonKalmanEstimation);

        void t_PythonKalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanEstimation), &PY_TYPE_DEF(PythonKalmanEstimation), module, "PythonKalmanEstimation", 1);
        }

        void t_PythonKalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "class_", make_descriptor(PythonKalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "wrapfn_", make_descriptor(t_PythonKalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanEstimation::initializeClass);
          JNINativeMethod methods[] = {
            { "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getCorrectedMeasurement0 },
            { "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getCorrectedSpacecraftStates1 },
            { "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonKalmanEstimation_getCurrentDate2 },
            { "getCurrentMeasurementNumber", "()I", (void *) t_PythonKalmanEstimation_getCurrentMeasurementNumber3 },
            { "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4 },
            { "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedOrbitalParameters5 },
            { "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedPropagationParameters6 },
            { "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7 },
            { "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedState8 },
            { "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9 },
            { "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalKalmanGain10 },
            { "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11 },
            { "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12 },
            { "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getPredictedMeasurement13 },
            { "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getPredictedSpacecraftStates14 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanEstimation_pythonDecRef15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanEstimation::wrap_Object(PythonKalmanEstimation(((t_PythonKalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanEstimation object((jobject) NULL);

          INT_CALL(object = PythonKalmanEstimation());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args)
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getCorrectedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCorrectedSpacecraftStates", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getCurrentDate", result);
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

        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getCurrentMeasurementNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getCurrentMeasurementNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurementsParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurementsParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedOrbitalParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedOrbitalParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedPropagationParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedPropagationParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealVector::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedState", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalInnovationCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalInnovationCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalKalmanGain", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalKalmanGain", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalMeasurementJacobian", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalMeasurementJacobian", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalStateTransitionMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalStateTransitionMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getPredictedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPredictedSpacecraftStates", result);
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

        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data)
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
#include "org/orekit/rugged/refraction/MultiLayerModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "java/util/List.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
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
            mids$[mid_init$_035235491296adca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_init$_129da8e177ba9d38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Ljava/util/List;)V");
            mids$[mid_applyCorrection_88676b739a4ea0ca] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_035235491296adca, a0.this$)) {}

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::java::util::List & a1) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_129da8e177ba9d38, a0.this$, a1.this$)) {}

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint MultiLayerModel::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_88676b739a4ea0ca], a0.this$, a1.this$, a2.this$, a3.this$));
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
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedRate::class$ = NULL;
      jmethodID *FixedRate::mids$ = NULL;
      bool FixedRate::live$ = false;

      jclass FixedRate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedRate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_344a773895e1f1ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getReferenceAttitude_9d85ee1243dd5d25] = env->getMethodID(cls, "getReferenceAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedRate::FixedRate(const ::org::orekit::attitudes::Attitude & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_344a773895e1f1ac, a0.this$)) {}

      ::org::orekit::attitudes::Attitude FixedRate::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FixedRate::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedRate::getReferenceAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getReferenceAttitude_9d85ee1243dd5d25]));
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
      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args);
      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self);
      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data);
      static PyGetSetDef t_FixedRate__fields_[] = {
        DECLARE_GET_FIELD(t_FixedRate, referenceAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FixedRate__methods_[] = {
        DECLARE_METHOD(t_FixedRate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FixedRate, getReferenceAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedRate)[] = {
        { Py_tp_methods, t_FixedRate__methods_ },
        { Py_tp_init, (void *) t_FixedRate_init_ },
        { Py_tp_getset, t_FixedRate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedRate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedRate, t_FixedRate, FixedRate);

      void t_FixedRate::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedRate), &PY_TYPE_DEF(FixedRate), module, "FixedRate", 0);
      }

      void t_FixedRate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "class_", make_descriptor(FixedRate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "wrapfn_", make_descriptor(t_FixedRate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedRate::initializeClass, 1)))
          return NULL;
        return t_FixedRate::wrap_Object(FixedRate(((t_FixedRate *) arg)->object.this$));
      }
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedRate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        FixedRate object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::attitudes::Attitude::initializeClass, &a0))
        {
          INT_CALL(object = FixedRate(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args)
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

      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
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
          mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
          mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Point::distance(const Point & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
      }

      ::org::hipparchus::geometry::Space Point::getSpace() const
      {
        return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
      }

      jboolean Point::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
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
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolator::class$ = NULL;
        jmethodID *BilinearInterpolator::mids$ = NULL;
        bool BilinearInterpolator::live$ = false;

        jclass BilinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_7dc956a6232adc7b] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolator::BilinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction BilinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_7dc956a6232adc7b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args);

        static PyMethodDef t_BilinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolator)[] = {
          { Py_tp_methods, t_BilinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolator, t_BilinearInterpolator, BilinearInterpolator);

        void t_BilinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolator), &PY_TYPE_DEF(BilinearInterpolator), module, "BilinearInterpolator", 0);
        }

        void t_BilinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "class_", make_descriptor(BilinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "wrapfn_", make_descriptor(t_BilinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolator::wrap_Object(BilinearInterpolator(((t_BilinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BilinearInterpolator object((jobject) NULL);

          INT_CALL(object = BilinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
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
#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPConstants::class$ = NULL;
          jmethodID *CR3BPConstants::mids$ = NULL;
          bool CR3BPConstants::live$ = false;

          jclass CR3BPConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPConstants");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEarthMoonBarycenterSemiMajorAxis_dffb854ad9e23e35] = env->getStaticMethodID(cls, "getEarthMoonBarycenterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getJupiterSemiMajorAxis_dffb854ad9e23e35] = env->getStaticMethodID(cls, "getJupiterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getMoonSemiMajorAxis_b74f83833fdad017] = env->getStaticMethodID(cls, "getMoonSemiMajorAxis", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getEarthMoonBarycenterSemiMajorAxis_dffb854ad9e23e35], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getJupiterSemiMajorAxis_dffb854ad9e23e35], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getMoonSemiMajorAxis()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMoonSemiMajorAxis_b74f83833fdad017]);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type);
          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data);
          static PyGetSetDef t_CR3BPConstants__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPConstants, moonSemiMajorAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPConstants__methods_[] = {
            DECLARE_METHOD(t_CR3BPConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getEarthMoonBarycenterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getJupiterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getMoonSemiMajorAxis, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPConstants)[] = {
            { Py_tp_methods, t_CR3BPConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CR3BPConstants__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPConstants, t_CR3BPConstants, CR3BPConstants);

          void t_CR3BPConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPConstants), &PY_TYPE_DEF(CR3BPConstants), module, "CR3BPConstants", 0);
          }

          void t_CR3BPConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "class_", make_descriptor(CR3BPConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "wrapfn_", make_descriptor(t_CR3BPConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPConstants::initializeClass, 1)))
              return NULL;
            return t_CR3BPConstants::wrap_Object(CR3BPConstants(((t_CR3BPConstants *) arg)->object.this$));
          }
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getEarthMoonBarycenterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getJupiterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getJupiterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSLegacyNavigationMessage::class$ = NULL;
            jmethodID *QZSSLegacyNavigationMessage::mids$ = NULL;
            bool QZSSLegacyNavigationMessage::live$ = false;

            jclass QZSSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSLegacyNavigationMessage::QZSSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSLegacyNavigationMessage, t_QZSSLegacyNavigationMessage, QZSSLegacyNavigationMessage);

            void t_QZSSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSLegacyNavigationMessage), &PY_TYPE_DEF(QZSSLegacyNavigationMessage), module, "QZSSLegacyNavigationMessage", 0);
            }

            void t_QZSSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "class_", make_descriptor(QZSSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_QZSSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSLegacyNavigationMessage::wrap_Object(QZSSLegacyNavigationMessage(((t_QZSSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              QZSSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = QZSSLegacyNavigationMessage());
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
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
          mids$[mid_init$_8b0f7facc8a6a46e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_63ce8cc6df99d992] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acos_63ce8cc6df99d992] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acosh_63ce8cc6df99d992] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_8fe4e497158b4411] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asin_63ce8cc6df99d992] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asinh_63ce8cc6df99d992] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan_63ce8cc6df99d992] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan2_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atanh_63ce8cc6df99d992] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cbrt_63ce8cc6df99d992] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ceil_63ce8cc6df99d992] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_8fe4e497158b4411] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cos_63ce8cc6df99d992] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cosh_63ce8cc6df99d992] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_8fe4e497158b4411] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_63ce8cc6df99d992] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_expm1_63ce8cc6df99d992] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_floor_63ce8cc6df99d992] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getComponent_21e6b3c521b9c768] = env->getMethodID(cls, "getComponent", "(I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getComponents_883be608cfc68c26] = env->getMethodID(cls, "getComponents", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_63ce8cc6df99d992] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_647438d304241e5d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_04a2903ed277e106] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/FieldTuple;[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_962ef3f48325ea0d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_dee09394e88de719] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_3f74f9b1faf5965a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_931d612f2ff66073] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_4ae000fa06c7a943] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_b24686de8a6eb6df] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log_63ce8cc6df99d992] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log10_63ce8cc6df99d992] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log1p_63ce8cc6df99d992] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_8fe4e497158b4411] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_b86c5b2cc8073ebe] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_negate_63ce8cc6df99d992] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_newInstance_8fe4e497158b4411] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_8fe4e497158b4411] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_b86c5b2cc8073ebe] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_reciprocal_63ce8cc6df99d992] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_8fe4e497158b4411] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rint_63ce8cc6df99d992] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rootN_b86c5b2cc8073ebe] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_scalb_b86c5b2cc8073ebe] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sign_63ce8cc6df99d992] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sin_63ce8cc6df99d992] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_63ce8cc6df99d992] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_63ce8cc6df99d992] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_ddc7a4f7f7e61bb9] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_8fe4e497158b4411] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tan_63ce8cc6df99d992] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tanh_63ce8cc6df99d992] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toDegrees_63ce8cc6df99d992] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toRadians_63ce8cc6df99d992] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ulp_63ce8cc6df99d992] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/FieldTuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTuple::FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b0f7facc8a6a46e, a0.this$)) {}

      FieldTuple FieldTuple::abs() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_abs_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::acos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acos_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::acosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acosh_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::add(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::add(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::asin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asin_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::asinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asinh_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::atan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::atan2(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan2_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::atanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atanh_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::cbrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cbrt_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::ceil() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ceil_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::copySign(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::copySign(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::cos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cos_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::cosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cosh_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::divide(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::divide(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_8fe4e497158b4411], a0));
      }

      jboolean FieldTuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      FieldTuple FieldTuple::exp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_exp_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::expm1() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_expm1_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::floor() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_floor_63ce8cc6df99d992]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTuple::getComponent(jint a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getComponent_21e6b3c521b9c768], a0));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldTuple::getComponents() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getComponents_883be608cfc68c26]));
      }

      jint FieldTuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::Field FieldTuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      FieldTuple FieldTuple::getPi() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_getPi_63ce8cc6df99d992]));
      }

      jdouble FieldTuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      jint FieldTuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      FieldTuple FieldTuple::hypot(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_hypot_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< jdouble > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_647438d304241e5d], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< FieldTuple > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_04a2903ed277e106], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_962ef3f48325ea0d], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_dee09394e88de719], a0, a1.this$, a2, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_3f74f9b1faf5965a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_931d612f2ff66073], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5, const FieldTuple & a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_4ae000fa06c7a943], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5, jdouble a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_b24686de8a6eb6df], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldTuple FieldTuple::log() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::log10() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log10_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::log1p() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log1p_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::multiply(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::multiply(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::multiply(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_b86c5b2cc8073ebe], a0));
      }

      FieldTuple FieldTuple::negate() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_negate_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::newInstance(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_newInstance_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::pow(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::pow(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::pow(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_b86c5b2cc8073ebe], a0));
      }

      FieldTuple FieldTuple::reciprocal() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_reciprocal_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::remainder(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::remainder(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::rint() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rint_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::rootN(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rootN_b86c5b2cc8073ebe], a0));
      }

      FieldTuple FieldTuple::scalb(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_scalb_b86c5b2cc8073ebe], a0));
      }

      FieldTuple FieldTuple::sign() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sign_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::sin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sin_63ce8cc6df99d992]));
      }

      ::org::hipparchus::util::FieldSinCos FieldTuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      FieldTuple FieldTuple::sinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sinh_63ce8cc6df99d992]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldTuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      FieldTuple FieldTuple::sqrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sqrt_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::subtract(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_ddc7a4f7f7e61bb9], a0.this$));
      }

      FieldTuple FieldTuple::subtract(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_8fe4e497158b4411], a0));
      }

      FieldTuple FieldTuple::tan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tan_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::tanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tanh_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::toDegrees() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toDegrees_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::toRadians() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toRadians_63ce8cc6df99d992]));
      }

      FieldTuple FieldTuple::ulp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ulp_63ce8cc6df99d992]));
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersOffsetComputer::class$ = NULL;
          jmethodID *PhaseCentersOffsetComputer::mids$ = NULL;
          bool PhaseCentersOffsetComputer::live$ = false;

          jclass PhaseCentersOffsetComputer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c749d199d359fa63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_offset_7c843018b92f0884] = env->getMethodID(cls, "offset", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersOffsetComputer::PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c749d199d359fa63, a0.this$, a1.this$)) {}

          jdouble PhaseCentersOffsetComputer::offset(const ::org::orekit::frames::StaticTransform & a0, const ::org::orekit::frames::StaticTransform & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_7c843018b92f0884], a0.this$, a1.this$);
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
          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args);

          static PyMethodDef t_PhaseCentersOffsetComputer__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, offset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersOffsetComputer)[] = {
            { Py_tp_methods, t_PhaseCentersOffsetComputer__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersOffsetComputer_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersOffsetComputer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersOffsetComputer, t_PhaseCentersOffsetComputer, PhaseCentersOffsetComputer);

          void t_PhaseCentersOffsetComputer::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersOffsetComputer), &PY_TYPE_DEF(PhaseCentersOffsetComputer), module, "PhaseCentersOffsetComputer", 0);
          }

          void t_PhaseCentersOffsetComputer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "class_", make_descriptor(PhaseCentersOffsetComputer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "wrapfn_", make_descriptor(t_PhaseCentersOffsetComputer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersOffsetComputer::wrap_Object(PhaseCentersOffsetComputer(((t_PhaseCentersOffsetComputer *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersOffsetComputer object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersOffsetComputer(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args)
          {
            ::org::orekit::frames::StaticTransform a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::frames::StaticTransform::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.offset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *SimpleCurveFitter::class$ = NULL;
      jmethodID *SimpleCurveFitter::mids$ = NULL;
      bool SimpleCurveFitter::live$ = false;

      jclass SimpleCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/SimpleCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_5b84779bdc0ef4c0] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/ParametricUnivariateFunction;[D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withMaxIterations_afdc767827473115] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withStartPoint_fd8edeb198b632ad] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_getProblem_067ae4e9e4e5b47a] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleCurveFitter SimpleCurveFitter::create(const ::org::hipparchus::analysis::ParametricUnivariateFunction & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_5b84779bdc0ef4c0], a0.this$, a1.this$));
      }

      SimpleCurveFitter SimpleCurveFitter::withMaxIterations(jint a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_afdc767827473115], a0));
      }

      SimpleCurveFitter SimpleCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_fd8edeb198b632ad], a0.this$));
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
      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg);

      static PyMethodDef t_SimpleCurveFitter__methods_[] = {
        DECLARE_METHOD(t_SimpleCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_SimpleCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleCurveFitter)[] = {
        { Py_tp_methods, t_SimpleCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(SimpleCurveFitter, t_SimpleCurveFitter, SimpleCurveFitter);

      void t_SimpleCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleCurveFitter), &PY_TYPE_DEF(SimpleCurveFitter), module, "SimpleCurveFitter", 0);
      }

      void t_SimpleCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "class_", make_descriptor(SimpleCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "wrapfn_", make_descriptor(t_SimpleCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleCurveFitter::initializeClass, 1)))
          return NULL;
        return t_SimpleCurveFitter::wrap_Object(SimpleCurveFitter(((t_SimpleCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::ParametricUnivariateFunction a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::ParametricUnivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::SimpleCurveFitter::create(a0, a1));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg)
      {
        jint a0;
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularDerivativesFilter::class$ = NULL;
      jmethodID *AngularDerivativesFilter::mids$ = NULL;
      bool AngularDerivativesFilter::live$ = false;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_R = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RR = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RRA = NULL;

      jclass AngularDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_71cb048b3c730036] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_bee5d2db8fcf7df4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_values_22007163d4198fde] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/AngularDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_R = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_R", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RR = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RR", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RRA = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RRA", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularDerivativesFilter AngularDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_71cb048b3c730036], a0));
      }

      jint AngularDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_55546ef6a647f39b]);
      }

      AngularDerivativesFilter AngularDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bee5d2db8fcf7df4], a0.this$));
      }

      JArray< AngularDerivativesFilter > AngularDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< AngularDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_22007163d4198fde]));
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
      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self);
      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data);
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data);
      static PyGetSetDef t_AngularDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_AngularDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularDerivativesFilter)[] = {
        { Py_tp_methods, t_AngularDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AngularDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(AngularDerivativesFilter, t_AngularDerivativesFilter, AngularDerivativesFilter);
      PyObject *t_AngularDerivativesFilter::wrap_Object(const AngularDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AngularDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AngularDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularDerivativesFilter), &PY_TYPE_DEF(AngularDerivativesFilter), module, "AngularDerivativesFilter", 0);
      }

      void t_AngularDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "class_", make_descriptor(AngularDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "wrapfn_", make_descriptor(t_AngularDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_R", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_R)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RR", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RRA", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RRA)));
      }

      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_AngularDerivativesFilter::wrap_Object(AngularDerivativesFilter(((t_AngularDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::getFilter(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::valueOf(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< AngularDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_AngularDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesIntegrator::mids$ = NULL;
        bool ThreeEighthesIntegrator::live$ = false;

        jclass ThreeEighthesIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_2e31296dbcc51d57] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegrator::ThreeEighthesIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > ThreeEighthesIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
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
        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegrator, t_ThreeEighthesIntegrator, ThreeEighthesIntegrator);

        void t_ThreeEighthesIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegrator), &PY_TYPE_DEF(ThreeEighthesIntegrator), module, "ThreeEighthesIntegrator", 0);
        }

        void t_ThreeEighthesIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "class_", make_descriptor(ThreeEighthesIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegrator::wrap_Object(ThreeEighthesIntegrator(((t_ThreeEighthesIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadata::class$ = NULL;
              jmethodID *OemMetadata::mids$ = NULL;
              bool OemMetadata::live$ = false;

              jclass OemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_0f2522b3fe45d99f] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getStartTime_c325492395d89b24] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_c325492395d89b24] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_setInterpolationDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_da218530d7e28b54] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemMetadata::OemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

              jint OemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod OemMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0f2522b3fe45d99f]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_c325492395d89b24]));
              }

              void OemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_44ed599e93e8a30c], a0);
              }

              void OemMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_da218530d7e28b54], a0.this$);
              }

              void OemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_02135a6ef25adb4b], a0.this$);
              }

              void OemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_02135a6ef25adb4b], a0.this$);
              }

              void OemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_02135a6ef25adb4b], a0.this$);
              }

              void OemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_02135a6ef25adb4b], a0.this$);
              }

              void OemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args);
              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OemMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_OemMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadata__methods_[] = {
                DECLARE_METHOD(t_OemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_OemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadata)[] = {
                { Py_tp_methods, t_OemMetadata__methods_ },
                { Py_tp_init, (void *) t_OemMetadata_init_ },
                { Py_tp_getset, t_OemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OemMetadata, t_OemMetadata, OemMetadata);

              void t_OemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadata), &PY_TYPE_DEF(OemMetadata), module, "OemMetadata", 0);
              }

              void t_OemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "class_", make_descriptor(OemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "wrapfn_", make_descriptor(t_OemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadata::initializeClass, 1)))
                  return NULL;
                return t_OemMetadata::wrap_Object(OemMetadata(((t_OemMetadata *) arg)->object.this$));
              }
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                OemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = OemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg)
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

              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg)
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

              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonPotentialCoefficientsReader::class$ = NULL;
          jmethodID *PythonPotentialCoefficientsReader::mids$ = NULL;
          bool PythonPotentialCoefficientsReader::live$ = false;

          jclass PythonPotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_f201530b2ce67e89] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_f201530b2ce67e89, a0.this$, a1, a2.this$)) {}

          void PythonPotentialCoefficientsReader::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonPotentialCoefficientsReader::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonPotentialCoefficientsReader::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self);
          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args);
          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2);
          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PythonPotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPotentialCoefficientsReader, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PythonPotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) t_PythonPotentialCoefficientsReader_init_ },
            { Py_tp_getset, t_PythonPotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(PythonPotentialCoefficientsReader, t_PythonPotentialCoefficientsReader, PythonPotentialCoefficientsReader);

          void t_PythonPotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPotentialCoefficientsReader), &PY_TYPE_DEF(PythonPotentialCoefficientsReader), module, "PythonPotentialCoefficientsReader", 1);
          }

          void t_PythonPotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "class_", make_descriptor(PythonPotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PythonPotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPotentialCoefficientsReader::initializeClass);
            JNINativeMethod methods[] = {
              { "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;", (void *) t_PythonPotentialCoefficientsReader_getProvider0 },
              { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonPotentialCoefficientsReader_loadData1 },
              { "pythonDecRef", "()V", (void *) t_PythonPotentialCoefficientsReader_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PythonPotentialCoefficientsReader::wrap_Object(PythonPotentialCoefficientsReader(((t_PythonPotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args)
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

          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o0 = (a0 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "getProvider", "Oii", o0, (int) a1, (int) a2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getProvider", result);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
            PyObject *o1 = env->fromJString((jstring) a1, 0);
            PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data)
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
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
          mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_b7aa5791b069a41f] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setReferenceState_280c3390961e0a50] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MatricesHarvester::getJacobiansColumnsNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3]));
      }

      ::org::orekit::orbits::OrbitType MatricesHarvester::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_b7aa5791b069a41f], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType MatricesHarvester::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f], a0.this$));
      }

      void MatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_280c3390961e0a50], a0.this$);
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
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *MultivariateSummaryStatistics::class$ = NULL;
        jmethodID *MultivariateSummaryStatistics::mids$ = NULL;
        bool MultivariateSummaryStatistics::live$ = false;

        jclass MultivariateSummaryStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/MultivariateSummaryStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_34742154de10200a] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_addValue_ab69da052b88f50c] = env->getMethodID(cls, "addValue", "([D)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCovariance_f77d745f2128c391] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_25e1757a36c4dde2] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_25e1757a36c4dde2] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_25e1757a36c4dde2] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_25e1757a36c4dde2] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_25e1757a36c4dde2] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_25e1757a36c4dde2] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_25e1757a36c4dde2] = env->getMethodID(cls, "getSumSq", "()[D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34742154de10200a, a0, a1)) {}

        void MultivariateSummaryStatistics::addValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_ab69da052b88f50c], a0.this$);
        }

        void MultivariateSummaryStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        jboolean MultivariateSummaryStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateSummaryStatistics::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f77d745f2128c391]));
        }

        jint MultivariateSummaryStatistics::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_25e1757a36c4dde2]));
        }

        jlong MultivariateSummaryStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_25e1757a36c4dde2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_25e1757a36c4dde2]));
        }

        jint MultivariateSummaryStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        ::java::lang::String MultivariateSummaryStatistics::toString() const
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
        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data);
        static PyGetSetDef t_MultivariateSummaryStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, covariance),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, dimension),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, geometricMean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, max),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, mean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, min),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, n),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sum),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumLog),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateSummaryStatistics__methods_[] = {
          DECLARE_METHOD(t_MultivariateSummaryStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, addValue, METH_O),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumSq, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateSummaryStatistics)[] = {
          { Py_tp_methods, t_MultivariateSummaryStatistics__methods_ },
          { Py_tp_init, (void *) t_MultivariateSummaryStatistics_init_ },
          { Py_tp_getset, t_MultivariateSummaryStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateSummaryStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateSummaryStatistics, t_MultivariateSummaryStatistics, MultivariateSummaryStatistics);

        void t_MultivariateSummaryStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateSummaryStatistics), &PY_TYPE_DEF(MultivariateSummaryStatistics), module, "MultivariateSummaryStatistics", 0);
        }

        void t_MultivariateSummaryStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "class_", make_descriptor(MultivariateSummaryStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "wrapfn_", make_descriptor(t_MultivariateSummaryStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateSummaryStatistics::initializeClass, 1)))
            return NULL;
          return t_MultivariateSummaryStatistics::wrap_Object(MultivariateSummaryStatistics(((t_MultivariateSummaryStatistics *) arg)->object.this$));
        }
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateSummaryStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0, a1));
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

        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovariance::class$ = NULL;
      jmethodID *StateCovariance::mids$ = NULL;
      bool StateCovariance::live$ = false;
      jint StateCovariance::STATE_DIMENSION = (jint) 0;

      jclass StateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3e43bb509386d88] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_dc92e4260cab11aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_b6bbba5f1b0fd523] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceFrame_962ea77ed517818a] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_changeCovarianceType_3fba55e1218cf3cb] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_checkFrameAndOrbitTypeConsistency_41a17ca6d6e11fdb] = env->getStaticMethodID(cls, "checkFrameAndOrbitTypeConsistency", "(Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_f6a236b1948152b5] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_f77d745f2128c391] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStm_dcf4bbb08852992a] = env->getStaticMethodID(cls, "getStm", "(Lorg/orekit/orbits/Orbit;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_shiftedBy_a7b1244c930324e1] = env->getMethodID(cls, "shiftedBy", "(Lorg/orekit/orbits/Orbit;D)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3e43bb509386d88, a0.this$, a1.this$, a2.this$)) {}

      StateCovariance::StateCovariance(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc92e4260cab11aa, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_b6bbba5f1b0fd523], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_962ea77ed517818a], a0.this$, a1.this$));
      }

      StateCovariance StateCovariance::changeCovarianceType(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_3fba55e1218cf3cb], a0.this$, a1.this$, a2.this$));
      }

      void StateCovariance::checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame & a0, const ::org::orekit::orbits::OrbitType & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFrameAndOrbitTypeConsistency_41a17ca6d6e11fdb], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate StateCovariance::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      ::org::orekit::frames::Frame StateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::LOF StateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_f6a236b1948152b5]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_f77d745f2128c391]));
      }

      ::org::orekit::orbits::OrbitType StateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
      }

      ::org::orekit::orbits::PositionAngleType StateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
      }

      ::org::hipparchus::linear::RealMatrix StateCovariance::getStm(const ::org::orekit::orbits::Orbit & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_getStm_dcf4bbb08852992a], a0.this$, a1));
      }

      StateCovariance StateCovariance::shiftedBy(const ::org::orekit::orbits::Orbit & a0, jdouble a1) const
      {
        return StateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_a7b1244c930324e1], a0.this$, a1));
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
      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self);
      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args);
      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args);
      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data);
      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data);
      static PyGetSetDef t_StateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovariance, date),
        DECLARE_GET_FIELD(t_StateCovariance, frame),
        DECLARE_GET_FIELD(t_StateCovariance, lOF),
        DECLARE_GET_FIELD(t_StateCovariance, matrix),
        DECLARE_GET_FIELD(t_StateCovariance, orbitType),
        DECLARE_GET_FIELD(t_StateCovariance, positionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovariance__methods_[] = {
        DECLARE_METHOD(t_StateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_StateCovariance, checkFrameAndOrbitTypeConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovariance, getStm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StateCovariance, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovariance)[] = {
        { Py_tp_methods, t_StateCovariance__methods_ },
        { Py_tp_init, (void *) t_StateCovariance_init_ },
        { Py_tp_getset, t_StateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovariance, t_StateCovariance, StateCovariance);

      void t_StateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovariance), &PY_TYPE_DEF(StateCovariance), module, "StateCovariance", 0);
      }

      void t_StateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "class_", make_descriptor(StateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "wrapfn_", make_descriptor(t_StateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "boxfn_", make_descriptor(boxObject));
        env->getClass(StateCovariance::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovariance), "STATE_DIMENSION", make_descriptor(StateCovariance::STATE_DIMENSION));
      }

      static PyObject *t_StateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovariance::initializeClass, 1)))
          return NULL;
        return t_StateCovariance::wrap_Object(StateCovariance(((t_StateCovariance *) arg)->object.this$));
      }
      static PyObject *t_StateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovariance_init_(t_StateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::LOF a2((jobject) NULL);
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovariance object((jobject) NULL);

            if (!parseArgs(args, "kkkKK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_StateCovariance_changeCovarianceFrame(t_StateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_changeCovarianceType(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_checkFrameAndOrbitTypeConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::StateCovariance::checkFrameAndOrbitTypeConsistency(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkFrameAndOrbitTypeConsistency", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_getDate(t_StateCovariance *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getFrame(t_StateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getLOF(t_StateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getMatrix(t_StateCovariance *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getOrbitType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getPositionAngleType(t_StateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_StateCovariance_getStm(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::propagation::StateCovariance::getStm(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getStm", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_shiftedBy(t_StateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::Orbit a0((jobject) NULL);
        jdouble a1;
        StateCovariance result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1));
          return t_StateCovariance::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_StateCovariance_get__date(t_StateCovariance *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__frame(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__lOF(t_StateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__matrix(t_StateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__orbitType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovariance_get__positionAngleType(t_StateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Observation::class$ = NULL;
            jmethodID *Observation::mids$ = NULL;
            bool Observation::live$ = false;

            jclass Observation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Observation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bf796995512911ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMeasurement_b74f83833fdad017] = env->getMethodID(cls, "getMeasurement", "()D");
                mids$[mid_getType_4680634a8fc09e14] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Observation::Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf796995512911ef, a0.this$, a1.this$, a2)) {}

            ::org::orekit::time::AbsoluteDate Observation::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
            }

            jdouble Observation::getMeasurement() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeasurement_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::ObservationType Observation::getType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::ObservationType(env->callObjectMethod(this$, mids$[mid_getType_4680634a8fc09e14]));
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
            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Observation_getEpoch(t_Observation *self);
            static PyObject *t_Observation_getMeasurement(t_Observation *self);
            static PyObject *t_Observation_getType(t_Observation *self);
            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data);
            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data);
            static PyObject *t_Observation_get__type(t_Observation *self, void *data);
            static PyGetSetDef t_Observation__fields_[] = {
              DECLARE_GET_FIELD(t_Observation, epoch),
              DECLARE_GET_FIELD(t_Observation, measurement),
              DECLARE_GET_FIELD(t_Observation, type),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Observation__methods_[] = {
              DECLARE_METHOD(t_Observation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getMeasurement, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getType, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Observation)[] = {
              { Py_tp_methods, t_Observation__methods_ },
              { Py_tp_init, (void *) t_Observation_init_ },
              { Py_tp_getset, t_Observation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Observation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Observation, t_Observation, Observation);

            void t_Observation::install(PyObject *module)
            {
              installType(&PY_TYPE(Observation), &PY_TYPE_DEF(Observation), module, "Observation", 0);
            }

            void t_Observation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "class_", make_descriptor(Observation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "wrapfn_", make_descriptor(t_Observation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Observation::initializeClass, 1)))
                return NULL;
              return t_Observation::wrap_Object(Observation(((t_Observation *) arg)->object.this$));
            }
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Observation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              Observation object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
              {
                INT_CALL(object = Observation(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Observation_getEpoch(t_Observation *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_Observation_getMeasurement(t_Observation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeasurement());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_Observation_getType(t_Observation *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(result);
            }

            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeasurement());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_Observation_get__type(t_Observation *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *FrameFacade::class$ = NULL;
          jmethodID *FrameFacade::mids$ = NULL;
          bool FrameFacade::live$ = false;

          jclass FrameFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/FrameFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_85fa769e8cc15eaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;Ljava/lang/String;)V");
              mids$[mid_asCelestialBodyFrame_5ac4f33db9e11fd5] = env->getMethodID(cls, "asCelestialBodyFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_asFrame_2c51111cc6894ba1] = env->getMethodID(cls, "asFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_asOrbitRelativeFrame_77481b528a1ae805] = env->getMethodID(cls, "asOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_asSpacecraftBodyFrame_24772727764a5aad] = env->getMethodID(cls, "asSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTransform_43c8dcf3729902ff] = env->getStaticMethodID(cls, "getTransform", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/frames/Transform;");
              mids$[mid_map_bff8ea121086e3b2] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_parse_c6da9d98f548ff6b] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;ZZZ)Lorg/orekit/files/ccsds/definitions/FrameFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FrameFacade::FrameFacade(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame & a2, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85fa769e8cc15eaf, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame FrameFacade::asCelestialBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_asCelestialBodyFrame_5ac4f33db9e11fd5]));
          }

          ::org::orekit::frames::Frame FrameFacade::asFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_asFrame_2c51111cc6894ba1]));
          }

          ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame FrameFacade::asOrbitRelativeFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_asOrbitRelativeFrame_77481b528a1ae805]));
          }

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame FrameFacade::asSpacecraftBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_asSpacecraftBodyFrame_24772727764a5aad]));
          }

          ::java::lang::String FrameFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::frames::Transform FrameFacade::getTransform(const FrameFacade & a0, const FrameFacade & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_43c8dcf3729902ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          FrameFacade FrameFacade::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_map_bff8ea121086e3b2], a0.this$));
          }

          FrameFacade FrameFacade::parse(const ::java::lang::String & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2, const ::org::orekit::data::DataContext & a3, jboolean a4, jboolean a5, jboolean a6)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_c6da9d98f548ff6b], a0.this$, a1.this$, a2, a3.this$, a4, a5, a6));
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
          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getName(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data);
          static PyGetSetDef t_FrameFacade__fields_[] = {
            DECLARE_GET_FIELD(t_FrameFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FrameFacade__methods_[] = {
            DECLARE_METHOD(t_FrameFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, asCelestialBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asOrbitRelativeFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asSpacecraftBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, parse, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FrameFacade)[] = {
            { Py_tp_methods, t_FrameFacade__methods_ },
            { Py_tp_init, (void *) t_FrameFacade_init_ },
            { Py_tp_getset, t_FrameFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FrameFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FrameFacade, t_FrameFacade, FrameFacade);

          void t_FrameFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(FrameFacade), &PY_TYPE_DEF(FrameFacade), module, "FrameFacade", 0);
          }

          void t_FrameFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "class_", make_descriptor(FrameFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "wrapfn_", make_descriptor(t_FrameFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FrameFacade::initializeClass, 1)))
              return NULL;
            return t_FrameFacade::wrap_Object(FrameFacade(((t_FrameFacade *) arg)->object.this$));
          }
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FrameFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            FrameFacade object((jobject) NULL);

            if (!parseArgs(args, "kKKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::initializeClass, ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &p2, ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::parameters_, &a3, &a4))
            {
              INT_CALL(object = FrameFacade(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asCelestialBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.asFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asOrbitRelativeFrame());
            return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asSpacecraftBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_getName(t_FrameFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args)
          {
            FrameFacade a0((jobject) NULL);
            FrameFacade a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkkk", FrameFacade::initializeClass, FrameFacade::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::getTransform(a0, a1, a2, a3, a4));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameFacade result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::map(a0));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            jboolean a4;
            jboolean a5;
            jboolean a6;
            FrameFacade result((jobject) NULL);

            if (!parseArgs(args, "sKZkZZZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::parse(a0, a1, a2, a3, a4, a5, a6));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "java/util/List.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/io/IOException.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationWriter::class$ = NULL;
          jmethodID *RinexObservationWriter::mids$ = NULL;
          bool RinexObservationWriter::live$ = false;

          jclass RinexObservationWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6c867c4eb16d43be] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;)V");
              mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
              mids$[mid_prepareComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "prepareComments", "(Ljava/util/List;)V");
              mids$[mid_writeCompleteFile_3e40490b82a3a9b3] = env->getMethodID(cls, "writeCompleteFile", "(Lorg/orekit/files/rinex/observation/RinexObservation;)V");
              mids$[mid_writeHeader_3d7d1c3eb6e2d8e5] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/rinex/observation/RinexObservationHeader;)V");
              mids$[mid_writeObservationDataSet_e95b94a72b1c921a] = env->getMethodID(cls, "writeObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_writePendingRinex2Observations_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writePendingRinex2Observations", "()V");
              mids$[mid_writePendingRinex34Observations_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writePendingRinex34Observations", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationWriter::RinexObservationWriter(const ::java::lang::Appendable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c867c4eb16d43be, a0.this$, a1.this$)) {}

          void RinexObservationWriter::close() const
          {
            env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
          }

          void RinexObservationWriter::prepareComments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_prepareComments_0e7c3032c7c93ed3], a0.this$);
          }

          void RinexObservationWriter::writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeCompleteFile_3e40490b82a3a9b3], a0.this$);
          }

          void RinexObservationWriter::writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeHeader_3d7d1c3eb6e2d8e5], a0.this$);
          }

          void RinexObservationWriter::writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeObservationDataSet_e95b94a72b1c921a], a0.this$);
          }

          void RinexObservationWriter::writePendingRinex2Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex2Observations_a1fa5dae97ea5ed2]);
          }

          void RinexObservationWriter::writePendingRinex34Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex34Observations_a1fa5dae97ea5ed2]);
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
          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self);

          static PyMethodDef t_RinexObservationWriter__methods_[] = {
            DECLARE_METHOD(t_RinexObservationWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, close, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, prepareComments, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeCompleteFile, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeHeader, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex2Observations, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex34Observations, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationWriter)[] = {
            { Py_tp_methods, t_RinexObservationWriter__methods_ },
            { Py_tp_init, (void *) t_RinexObservationWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationWriter, t_RinexObservationWriter, RinexObservationWriter);

          void t_RinexObservationWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationWriter), &PY_TYPE_DEF(RinexObservationWriter), module, "RinexObservationWriter", 0);
          }

          void t_RinexObservationWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "class_", make_descriptor(RinexObservationWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "wrapfn_", make_descriptor(t_RinexObservationWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationWriter::initializeClass, 1)))
              return NULL;
            return t_RinexObservationWriter::wrap_Object(RinexObservationWriter(((t_RinexObservationWriter *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::Appendable a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            RinexObservationWriter object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::Appendable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RinexObservationWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.close());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.prepareComments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "prepareComments", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservation a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::observation::RinexObservation::initializeClass, &a0, &p0, ::org::orekit::files::rinex::observation::t_RinexObservation::parameters_))
            {
              OBJ_CALL(self->object.writeCompleteFile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeCompleteFile", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservationHeader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::RinexObservationHeader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeHeader", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex2Observations());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex34Observations());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SolidTides.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SolidTides::class$ = NULL;
        jmethodID *SolidTides::mids$ = NULL;
        bool SolidTides::live$ = false;
        jint SolidTides::DEFAULT_POINTS = (jint) 0;
        jdouble SolidTides::DEFAULT_STEP = (jdouble) 0;

        jclass SolidTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SolidTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_273da68e0002e582] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_init$_ebc119cf1633fa6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;ZDILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, const ::org::orekit::utils::IERSConventions & a4, const ::org::orekit::time::UT1Scale & a5, const JArray< ::org::orekit::bodies::CelestialBody > & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_273da68e0002e582, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jboolean a4, jdouble a5, jint a6, const ::org::orekit::utils::IERSConventions & a7, const ::org::orekit::time::UT1Scale & a8, const JArray< ::org::orekit::bodies::CelestialBody > & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc119cf1633fa6f, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7.this$, a8.this$, a9.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolidTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolidTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        jboolean SolidTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::stream::Stream SolidTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream SolidTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::java::util::List SolidTides::getParametersDrivers() const
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
      namespace gravity {
        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args);
        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self);
        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self);
        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg);
        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self);
        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data);
        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data);
        static PyGetSetDef t_SolidTides__fields_[] = {
          DECLARE_GET_FIELD(t_SolidTides, eventDetectors),
          DECLARE_GET_FIELD(t_SolidTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolidTides__methods_[] = {
          DECLARE_METHOD(t_SolidTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolidTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_SolidTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolidTides)[] = {
          { Py_tp_methods, t_SolidTides__methods_ },
          { Py_tp_init, (void *) t_SolidTides_init_ },
          { Py_tp_getset, t_SolidTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolidTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolidTides, t_SolidTides, SolidTides);

        void t_SolidTides::install(PyObject *module)
        {
          installType(&PY_TYPE(SolidTides), &PY_TYPE_DEF(SolidTides), module, "SolidTides", 0);
        }

        void t_SolidTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "class_", make_descriptor(SolidTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "wrapfn_", make_descriptor(t_SolidTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(SolidTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_POINTS", make_descriptor(SolidTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_STEP", make_descriptor(SolidTides::DEFAULT_STEP));
        }

        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolidTides::initializeClass, 1)))
            return NULL;
          return t_SolidTides::wrap_Object(SolidTides(((t_SolidTides *) arg)->object.this$));
        }
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolidTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::utils::IERSConventions a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::time::UT1Scale a5((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a6((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &p4, ::org::orekit::utils::t_IERSConventions::parameters_, &a5, &a6))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jboolean a4;
              jdouble a5;
              jint a6;
              ::org::orekit::utils::IERSConventions a7((jobject) NULL);
              PyTypeObject **p7;
              ::org::orekit::time::UT1Scale a8((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a9((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKZDIKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &p7, ::org::orekit::utils::t_IERSConventions::parameters_, &a8, &a9))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args)
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

        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg)
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

        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07::class$ = NULL;
              jmethodID *SsrIgm07::mids$ = NULL;
              bool SsrIgm07::live$ = false;

              jclass SsrIgm07::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a46db99f5fb71e67] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm07Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm07Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07::SsrIgm07(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_a46db99f5fb71e67, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm07::getSsrIgm07Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm07Data_810bed48fafb0b9a]));
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
              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args);
              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self);
              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data);
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data);
              static PyGetSetDef t_SsrIgm07__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm07, ssrIgm07Data),
                DECLARE_GET_FIELD(t_SsrIgm07, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm07, getSsrIgm07Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07)[] = {
                { Py_tp_methods, t_SsrIgm07__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07_init_ },
                { Py_tp_getset, t_SsrIgm07__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm07, t_SsrIgm07, SsrIgm07);
              PyObject *t_SsrIgm07::wrap_Object(const SsrIgm07& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm07::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm07::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07), &PY_TYPE_DEF(SsrIgm07), module, "SsrIgm07", 0);
              }

              void t_SsrIgm07::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "class_", make_descriptor(SsrIgm07::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "wrapfn_", make_descriptor(t_SsrIgm07::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07::wrap_Object(SsrIgm07(((t_SsrIgm07 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm07 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm07(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm07Data());
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
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKCoordinateSystem::class$ = NULL;
        jmethodID *STKEphemerisFile$STKCoordinateSystem::mids$ = NULL;
        bool STKEphemerisFile$STKCoordinateSystem::live$ = false;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::FIXED = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::ICRF = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::INERTIAL = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::J2000 = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE = NULL;

        jclass STKEphemerisFile$STKCoordinateSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_d452a0be0a1f062e] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_valueOf_d452a0be0a1f062e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_values_5a35b460cf424c11] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FIXED = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "FIXED", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            ICRF = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            INERTIAL = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "INERTIAL", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            J2000 = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            MEAN_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "MEAN_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TEME_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TEME_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TRUE_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TRUE_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_d452a0be0a1f062e], a0.this$));
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d452a0be0a1f062e], a0.this$));
        }

        JArray< STKEphemerisFile$STKCoordinateSystem > STKEphemerisFile$STKCoordinateSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< STKEphemerisFile$STKCoordinateSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_5a35b460cf424c11]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKCoordinateSystem__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKCoordinateSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKCoordinateSystem__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKCoordinateSystem)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKCoordinateSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_STKEphemerisFile$STKCoordinateSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKCoordinateSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKCoordinateSystem, t_STKEphemerisFile$STKCoordinateSystem, STKEphemerisFile$STKCoordinateSystem);
        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(const STKEphemerisFile$STKCoordinateSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_STKEphemerisFile$STKCoordinateSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKCoordinateSystem), &PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem), module, "STKEphemerisFile$STKCoordinateSystem", 0);
        }

        void t_STKEphemerisFile$STKCoordinateSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "class_", make_descriptor(STKEphemerisFile$STKCoordinateSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(STKEphemerisFile$STKCoordinateSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "FIXED", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "ICRF", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::ICRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "INERTIAL", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::INERTIAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "J2000", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::J2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "MEAN_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TEME_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TRUE_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE)));
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(STKEphemerisFile$STKCoordinateSystem(((t_STKEphemerisFile$STKCoordinateSystem *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::parse(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::valueOf(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type)
        {
          JArray< STKEphemerisFile$STKCoordinateSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::values());
          return JArray<jobject>(result.this$).wrap(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject);
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/FrameAncestorException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *FrameAncestorException::class$ = NULL;
      jmethodID *FrameAncestorException::mids$ = NULL;
      bool FrameAncestorException::live$ = false;

      jclass FrameAncestorException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/FrameAncestorException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAncestorException::FrameAncestorException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_FrameAncestorException__methods_[] = {
        DECLARE_METHOD(t_FrameAncestorException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAncestorException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAncestorException)[] = {
        { Py_tp_methods, t_FrameAncestorException__methods_ },
        { Py_tp_init, (void *) t_FrameAncestorException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAncestorException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(FrameAncestorException, t_FrameAncestorException, FrameAncestorException);

      void t_FrameAncestorException::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAncestorException), &PY_TYPE_DEF(FrameAncestorException), module, "FrameAncestorException", 0);
      }

      void t_FrameAncestorException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "class_", make_descriptor(FrameAncestorException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "wrapfn_", make_descriptor(t_FrameAncestorException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAncestorException::initializeClass, 1)))
          return NULL;
        return t_FrameAncestorException::wrap_Object(FrameAncestorException(((t_FrameAncestorException *) arg)->object.this$));
      }
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAncestorException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        FrameAncestorException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FrameAncestorException(a0, a1));
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
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldStaticTransform::class$ = NULL;
      jmethodID *FieldStaticTransform::mids$ = NULL;
      bool FieldStaticTransform::live$ = false;

      jclass FieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_9105b66daa9d24f1] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_compositeRotation_2208b259da045dcf] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_compositeTranslation_6d6daa21bda0ae5f] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_fcb78665b94e4648] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getInverse_f5bae1937d1edbc7] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_1e54a5caa5199c2e] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_ff5ac73a7b43eddd] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_of_7dd5a16ee5376cd6] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_48b63227f7d28e46] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_bd0a27faa06d5d8d] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_9fd334eaeb2212b6] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformLine_f23b0a932a8a1dcc] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformLine_2cacbd5ce2a6a87d] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformPosition_49157187b00e5904] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_356b02aa715afa02] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_49157187b00e5904] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_356b02aa715afa02] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStaticTransform FieldStaticTransform::compose(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldStaticTransform & a1, const FieldStaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_9105b66daa9d24f1], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::compositeRotation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_2208b259da045dcf], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::compositeTranslation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_6d6daa21bda0ae5f], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_fcb78665b94e4648], a0.this$));
      }

      FieldStaticTransform FieldStaticTransform::getInverse() const
      {
        return FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_f5bae1937d1edbc7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_ff5ac73a7b43eddd]));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_7dd5a16ee5376cd6], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_48b63227f7d28e46], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_bd0a27faa06d5d8d], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_9fd334eaeb2212b6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_f23b0a932a8a1dcc], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_2cacbd5ce2a6a87d], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_49157187b00e5904], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_356b02aa715afa02], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_49157187b00e5904], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_356b02aa715afa02], a0.this$));
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
      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data);
      static PyGetSetDef t_FieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStaticTransform, inverse),
        DECLARE_GET_FIELD(t_FieldStaticTransform, rotation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, translation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_FieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, transformLine, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStaticTransform)[] = {
        { Py_tp_methods, t_FieldStaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(FieldStaticTransform, t_FieldStaticTransform, FieldStaticTransform);
      PyObject *t_FieldStaticTransform::wrap_Object(const FieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStaticTransform), &PY_TYPE_DEF(FieldStaticTransform), module, "FieldStaticTransform", 0);
      }

      void t_FieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "class_", make_descriptor(FieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "wrapfn_", make_descriptor(t_FieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_FieldStaticTransform::wrap_Object(FieldStaticTransform(((t_FieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        FieldStaticTransform a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_, &a2, &p2, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compose(a0, a1, a2));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::getIdentity(a0));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self)
      {
        FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1, a2));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data)
      {
        FieldStaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *AlgorithmId::class$ = NULL;
        jmethodID *AlgorithmId::mids$ = NULL;
        bool AlgorithmId::live$ = false;
        AlgorithmId *AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = NULL;
        AlgorithmId *AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE_FLAT_BODY = NULL;
        AlgorithmId *AlgorithmId::IGNORE_DEM_USE_ELLIPSOID = NULL;

        jclass AlgorithmId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/AlgorithmId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d68a8ab70ae36ede] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_values_0f999a18f81d1f10] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/AlgorithmId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = new AlgorithmId(env->getStaticObjectField(cls, "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            CONSTANT_ELEVATION_OVER_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "CONSTANT_ELEVATION_OVER_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE_FLAT_BODY = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE_FLAT_BODY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            IGNORE_DEM_USE_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "IGNORE_DEM_USE_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlgorithmId AlgorithmId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlgorithmId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d68a8ab70ae36ede], a0.this$));
        }

        JArray< AlgorithmId > AlgorithmId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlgorithmId >(env->callStaticObjectMethod(cls, mids$[mid_values_0f999a18f81d1f10]));
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
      namespace api {
        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args);
        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlgorithmId_values(PyTypeObject *type);
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data);
        static PyGetSetDef t_AlgorithmId__fields_[] = {
          DECLARE_GET_FIELD(t_AlgorithmId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlgorithmId__methods_[] = {
          DECLARE_METHOD(t_AlgorithmId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlgorithmId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlgorithmId)[] = {
          { Py_tp_methods, t_AlgorithmId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlgorithmId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlgorithmId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlgorithmId, t_AlgorithmId, AlgorithmId);
        PyObject *t_AlgorithmId::wrap_Object(const AlgorithmId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlgorithmId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlgorithmId::install(PyObject *module)
        {
          installType(&PY_TYPE(AlgorithmId), &PY_TYPE_DEF(AlgorithmId), module, "AlgorithmId", 0);
        }

        void t_AlgorithmId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "class_", make_descriptor(AlgorithmId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "wrapfn_", make_descriptor(t_AlgorithmId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlgorithmId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "CONSTANT_ELEVATION_OVER_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE_FLAT_BODY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE_FLAT_BODY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "IGNORE_DEM_USE_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::IGNORE_DEM_USE_ELLIPSOID)));
        }

        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlgorithmId::initializeClass, 1)))
            return NULL;
          return t_AlgorithmId::wrap_Object(AlgorithmId(((t_AlgorithmId *) arg)->object.this$));
        }
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlgorithmId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlgorithmId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::valueOf(a0));
            return t_AlgorithmId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlgorithmId_values(PyTypeObject *type)
        {
          JArray< AlgorithmId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::values());
          return JArray<jobject>(result.this$).wrap(t_AlgorithmId::wrap_jobject);
        }
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillFieldIntegrator::class$ = NULL;
        jmethodID *GillFieldIntegrator::mids$ = NULL;
        bool GillFieldIntegrator::live$ = false;

        jclass GillFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_9290e73a4f87f3fb] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegrator::GillFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > GillFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getC() const
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
        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args);
        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data);
        static PyGetSetDef t_GillFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegrator, a),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, b),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, c),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegrator)[] = {
          { Py_tp_methods, t_GillFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegrator_init_ },
          { Py_tp_getset, t_GillFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegrator, t_GillFieldIntegrator, GillFieldIntegrator);
        PyObject *t_GillFieldIntegrator::wrap_Object(const GillFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegrator), &PY_TYPE_DEF(GillFieldIntegrator), module, "GillFieldIntegrator", 0);
        }

        void t_GillFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "class_", make_descriptor(GillFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "wrapfn_", make_descriptor(t_GillFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegrator::wrap_Object(GillFieldIntegrator(((t_GillFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          GillFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = GillFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
