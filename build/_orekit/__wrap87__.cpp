#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLatitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLatitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLatitudeCrossingDetector::mids$ = NULL;
        bool FieldLatitudeCrossingDetector::live$ = false;

        jclass FieldLatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5aa113c8ea2c3853] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_3a020ed83ff3efcb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_b74f83833fdad017] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_5169047ad44c10c0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5aa113c8ea2c3853, a0.this$, a1.this$, a2)) {}

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3a020ed83ff3efcb, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLatitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
        }

        jdouble FieldLatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_b74f83833fdad017]);
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
        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLatitudeCrossingDetector, t_FieldLatitudeCrossingDetector, FieldLatitudeCrossingDetector);
        PyObject *t_FieldLatitudeCrossingDetector::wrap_Object(const FieldLatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLatitudeCrossingDetector), &PY_TYPE_DEF(FieldLatitudeCrossingDetector), module, "FieldLatitudeCrossingDetector", 0);
        }

        void t_FieldLatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "class_", make_descriptor(FieldLatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLatitudeCrossingDetector::wrap_Object(FieldLatitudeCrossingDetector(((t_FieldLatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonThrustPropulsionModel::mids$ = NULL;
          bool PythonThrustPropulsionModel::live$ = false;

          jclass PythonThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getFlowRate_a17ea857ce74d258] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_8e86371c61460f23] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_f867476668f8eb00] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_9019a5b32b11453a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0ce449c67b5ffd9c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_20bded0292328743] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustPropulsionModel::PythonThrustPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          ::java::util::List PythonThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jlong PythonThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonThrustPropulsionModel::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data);
          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustPropulsionModel, t_PythonThrustPropulsionModel, PythonThrustPropulsionModel);

          void t_PythonThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustPropulsionModel), &PY_TYPE_DEF(PythonThrustPropulsionModel), module, "PythonThrustPropulsionModel", 1);
          }

          void t_PythonThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "class_", make_descriptor(PythonThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonThrustPropulsionModel_getControl3DVectorCostType0 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonThrustPropulsionModel_getFlowRate3 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector4 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonThrustPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonThrustPropulsionModel::wrap_Object(PythonThrustPropulsionModel(((t_PythonThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonThrustPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data)
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

          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data)
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
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PhaseCenterVariationFunction::mids$ = NULL;
        bool PhaseCenterVariationFunction::live$ = false;

        jclass PhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble PhaseCenterVariationFunction::value(jdouble a0, jdouble a1) const
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
  namespace orekit {
    namespace gnss {
      namespace antenna {
        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args);

        static PyMethodDef t_PhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PhaseCenterVariationFunction, t_PhaseCenterVariationFunction, PhaseCenterVariationFunction);

        void t_PhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PhaseCenterVariationFunction), &PY_TYPE_DEF(PhaseCenterVariationFunction), module, "PhaseCenterVariationFunction", 0);
        }

        void t_PhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "class_", make_descriptor(PhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PhaseCenterVariationFunction::wrap_Object(PhaseCenterVariationFunction(((t_PhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args)
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
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$RawPVProvider::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$RawPVProvider::mids$ = NULL;
      bool JPLEphemeridesLoader$RawPVProvider::live$ = false;

      jclass JPLEphemeridesLoader$RawPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawPV_686d17b8cfdd0634] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getRawPV_c8e1d160acb3bee5] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getRawPosition_082e6346b274f880] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRawPosition_362941be972fb4b5] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_686d17b8cfdd0634], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_c8e1d160acb3bee5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_082e6346b274f880], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_362941be972fb4b5], a0.this$));
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
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);

      static PyMethodDef t_JPLEphemeridesLoader$RawPVProvider__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPV, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$RawPVProvider)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$RawPVProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$RawPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$RawPVProvider, t_JPLEphemeridesLoader$RawPVProvider, JPLEphemeridesLoader$RawPVProvider);

      void t_JPLEphemeridesLoader$RawPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$RawPVProvider), &PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider), module, "JPLEphemeridesLoader$RawPVProvider", 0);
      }

      void t_JPLEphemeridesLoader$RawPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "class_", make_descriptor(JPLEphemeridesLoader$RawPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$RawPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$RawPVProvider::wrap_Object(JPLEphemeridesLoader$RawPVProvider(((t_JPLEphemeridesLoader$RawPVProvider *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPV", args);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Pow.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Pow::class$ = NULL;
        jmethodID *Pow::mids$ = NULL;
        bool Pow::live$ = false;

        jclass Pow::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Pow");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Pow::Pow() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Pow::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Pow_value(t_Pow *self, PyObject *args);

        static PyMethodDef t_Pow__methods_[] = {
          DECLARE_METHOD(t_Pow, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Pow)[] = {
          { Py_tp_methods, t_Pow__methods_ },
          { Py_tp_init, (void *) t_Pow_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Pow)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Pow, t_Pow, Pow);

        void t_Pow::install(PyObject *module)
        {
          installType(&PY_TYPE(Pow), &PY_TYPE_DEF(Pow), module, "Pow", 0);
        }

        void t_Pow::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "class_", make_descriptor(Pow::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "wrapfn_", make_descriptor(t_Pow::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Pow::initializeClass, 1)))
            return NULL;
          return t_Pow::wrap_Object(Pow(((t_Pow *) arg)->object.this$));
        }
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Pow::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds)
        {
          Pow object((jobject) NULL);

          INT_CALL(object = Pow());
          self->object = object;

          return 0;
        }

        static PyObject *t_Pow_value(t_Pow *self, PyObject *args)
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
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedFrameBuilder::class$ = NULL;
      jmethodID *FixedFrameBuilder::mids$ = NULL;
      bool FixedFrameBuilder::live$ = false;

      jclass FixedFrameBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedFrameBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_build_52f3b2bb0d5542f2] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_ac690f9e371807c4] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedFrameBuilder::FixedFrameBuilder(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_52f3b2bb0d5542f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_ac690f9e371807c4], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args);

      static PyMethodDef t_FixedFrameBuilder__methods_[] = {
        DECLARE_METHOD(t_FixedFrameBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedFrameBuilder)[] = {
        { Py_tp_methods, t_FixedFrameBuilder__methods_ },
        { Py_tp_init, (void *) t_FixedFrameBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedFrameBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedFrameBuilder, t_FixedFrameBuilder, FixedFrameBuilder);

      void t_FixedFrameBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedFrameBuilder), &PY_TYPE_DEF(FixedFrameBuilder), module, "FixedFrameBuilder", 0);
      }

      void t_FixedFrameBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "class_", make_descriptor(FixedFrameBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "wrapfn_", make_descriptor(t_FixedFrameBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedFrameBuilder::initializeClass, 1)))
          return NULL;
        return t_FixedFrameBuilder::wrap_Object(FixedFrameBuilder(((t_FixedFrameBuilder *) arg)->object.this$));
      }
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedFrameBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FixedFrameBuilder object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FixedFrameBuilder(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonMeasurementFilter::class$ = NULL;
          jmethodID *PythonMeasurementFilter::mids$ = NULL;
          bool PythonMeasurementFilter::live$ = false;

          jclass PythonMeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonMeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_filter_5714f5cbb8239657] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementFilter::PythonMeasurementFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMeasurementFilter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMeasurementFilter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMeasurementFilter::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args);
          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self);
          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args);
          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data);
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data);
          static PyGetSetDef t_PythonMeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, self),
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementFilter)[] = {
            { Py_tp_methods, t_PythonMeasurementFilter__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementFilter_init_ },
            { Py_tp_getset, t_PythonMeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementFilter, t_PythonMeasurementFilter, PythonMeasurementFilter);
          PyObject *t_PythonMeasurementFilter::wrap_Object(const PythonMeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementFilter), &PY_TYPE_DEF(PythonMeasurementFilter), module, "PythonMeasurementFilter", 1);
          }

          void t_PythonMeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "class_", make_descriptor(PythonMeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "wrapfn_", make_descriptor(t_PythonMeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementFilter::initializeClass);
            JNINativeMethod methods[] = {
              { "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMeasurementFilter_filter0 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementFilter_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementFilter::wrap_Object(PythonMeasurementFilter(((t_PythonMeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementFilter object((jobject) NULL);

            INT_CALL(object = PythonMeasurementFilter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "filter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data)
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
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data)
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
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/io/InputStream.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "java/io/OutputStream.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *RuggedBuilder::class$ = NULL;
        jmethodID *RuggedBuilder::mids$ = NULL;
        bool RuggedBuilder::live$ = false;

        jclass RuggedBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/RuggedBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addLineSensor_0d8e791d27df30bb] = env->getMethodID(cls, "addLineSensor", "(Lorg/orekit/rugged/linesensor/LineSensor;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_build_d1370324fdb0128e] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_clearLineSensors_a819b78907e17758] = env->getMethodID(cls, "clearLineSensors", "()Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_getAFilter_33d67d456ec94a0c] = env->getMethodID(cls, "getAFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getAInterpolationNumber_55546ef6a647f39b] = env->getMethodID(cls, "getAInterpolationNumber", "()I");
            mids$[mid_getAberrationOfLightCorrection_9ab94ac1dc23b105] = env->getMethodID(cls, "getAberrationOfLightCorrection", "()Z");
            mids$[mid_getAlgorithm_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getConstantElevation_b74f83833fdad017] = env->getMethodID(cls, "getConstantElevation", "()D");
            mids$[mid_getEllipsoid_dd5ed0ce6aa0aa1f] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getLightTimeCorrection_9ab94ac1dc23b105] = env->getMethodID(cls, "getLightTimeCorrection", "()Z");
            mids$[mid_getLineSensors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/List;");
            mids$[mid_getMaxCachedTiles_55546ef6a647f39b] = env->getMethodID(cls, "getMaxCachedTiles", "()I");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOvershootTolerance_b74f83833fdad017] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getPVFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getPVFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getPVInterpolationNumber_55546ef6a647f39b] = env->getMethodID(cls, "getPVInterpolationNumber", "()I");
            mids$[mid_getPositionsVelocities_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPositionsVelocities", "()Ljava/util/List;");
            mids$[mid_getQuaternions_e62d3bb06d56d7e3] = env->getMethodID(cls, "getQuaternions", "()Ljava/util/List;");
            mids$[mid_getRefractionCorrection_8900d038872ca946] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getTStep_b74f83833fdad017] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_getTileUpdater_06701919241ec92b] = env->getMethodID(cls, "getTileUpdater", "()Lorg/orekit/rugged/raster/TileUpdater;");
            mids$[mid_setAberrationOfLightCorrection_c4b4349a45ce869c] = env->getMethodID(cls, "setAberrationOfLightCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setAlgorithm_0bd5e77ba3003ea0] = env->getMethodID(cls, "setAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setConstantElevation_6bc60695d30ad32c] = env->getMethodID(cls, "setConstantElevation", "(D)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setDigitalElevationModel_c0fa168f413d2840] = env->getMethodID(cls, "setDigitalElevationModel", "(Lorg/orekit/rugged/raster/TileUpdater;I)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_71122413bcbc38f5] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_c60a06d336f1055b] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/rugged/api/EllipsoidId;Lorg/orekit/rugged/api/BodyRotatingFrameId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setLightTimeCorrection_c4b4349a45ce869c] = env->getMethodID(cls, "setLightTimeCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setName_734b91ac30d5f9b4] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setRefractionCorrection_000f48d3733ca0b3] = env->getMethodID(cls, "setRefractionCorrection", "(Lorg/orekit/rugged/refraction/AtmosphericRefraction;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTimeSpan_13b72ea77da20cee] = env->getMethodID(cls, "setTimeSpan", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_64f033ee6d5257f0] = env->getMethodID(cls, "setTrajectory", "(DILorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/propagation/Propagator;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_1f518b3389bc6ba7] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/rugged/api/InertialFrameId;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_e178eb4a30dc0818] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectoryAndTimeSpan_81d47db2d250d02e] = env->getMethodID(cls, "setTrajectoryAndTimeSpan", "(Ljava/io/InputStream;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_storeInterpolator_9601da1efb310931] = env->getMethodID(cls, "storeInterpolator", "(Ljava/io/OutputStream;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedBuilder::RuggedBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        RuggedBuilder RuggedBuilder::addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_addLineSensor_0d8e791d27df30bb], a0.this$));
        }

        ::org::orekit::rugged::api::Rugged RuggedBuilder::build() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_build_d1370324fdb0128e]));
        }

        RuggedBuilder RuggedBuilder::clearLineSensors() const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_clearLineSensors_a819b78907e17758]));
        }

        ::org::orekit::utils::AngularDerivativesFilter RuggedBuilder::getAFilter() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAFilter_33d67d456ec94a0c]));
        }

        jint RuggedBuilder::getAInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getAInterpolationNumber_55546ef6a647f39b]);
        }

        jboolean RuggedBuilder::getAberrationOfLightCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getAberrationOfLightCorrection_9ab94ac1dc23b105]);
        }

        ::org::orekit::rugged::api::AlgorithmId RuggedBuilder::getAlgorithm() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithm_d67e2fdbea04a3ee]));
        }

        jdouble RuggedBuilder::getConstantElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantElevation_b74f83833fdad017]);
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid RuggedBuilder::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_dd5ed0ce6aa0aa1f]));
        }

        ::org::orekit::frames::Frame RuggedBuilder::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
        }

        jboolean RuggedBuilder::getLightTimeCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getLightTimeCorrection_9ab94ac1dc23b105]);
        }

        ::java::util::List RuggedBuilder::getLineSensors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLineSensors_e62d3bb06d56d7e3]));
        }

        jint RuggedBuilder::getMaxCachedTiles() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxCachedTiles_55546ef6a647f39b]);
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        ::java::lang::String RuggedBuilder::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        jdouble RuggedBuilder::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_b74f83833fdad017]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter RuggedBuilder::getPVFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVFilter_63bfdcc4b7a0536c]));
        }

        jint RuggedBuilder::getPVInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPVInterpolationNumber_55546ef6a647f39b]);
        }

        ::java::util::List RuggedBuilder::getPositionsVelocities() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPositionsVelocities_e62d3bb06d56d7e3]));
        }

        ::java::util::List RuggedBuilder::getQuaternions() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQuaternions_e62d3bb06d56d7e3]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction RuggedBuilder::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8900d038872ca946]));
        }

        jdouble RuggedBuilder::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_b74f83833fdad017]);
        }

        ::org::orekit::rugged::raster::TileUpdater RuggedBuilder::getTileUpdater() const
        {
          return ::org::orekit::rugged::raster::TileUpdater(env->callObjectMethod(this$, mids$[mid_getTileUpdater_06701919241ec92b]));
        }

        RuggedBuilder RuggedBuilder::setAberrationOfLightCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAberrationOfLightCorrection_c4b4349a45ce869c], a0));
        }

        RuggedBuilder RuggedBuilder::setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAlgorithm_0bd5e77ba3003ea0], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setConstantElevation(jdouble a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setConstantElevation_6bc60695d30ad32c], a0));
        }

        RuggedBuilder RuggedBuilder::setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setDigitalElevationModel_c0fa168f413d2840], a0.this$, a1));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_71122413bcbc38f5], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId & a0, const ::org::orekit::rugged::api::BodyRotatingFrameId & a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_c60a06d336f1055b], a0.this$, a1.this$));
        }

        RuggedBuilder RuggedBuilder::setLightTimeCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setLightTimeCorrection_c4b4349a45ce869c], a0));
        }

        void RuggedBuilder::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_734b91ac30d5f9b4], a0.this$);
        }

        RuggedBuilder RuggedBuilder::setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setRefractionCorrection_000f48d3733ca0b3], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setTimeSpan(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTimeSpan_13b72ea77da20cee], a0.this$, a1.this$, a2, a3));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(jdouble a0, jint a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::utils::AngularDerivativesFilter & a3, const ::org::orekit::propagation::Propagator & a4) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_64f033ee6d5257f0], a0, a1, a2.this$, a3.this$, a4.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::rugged::api::InertialFrameId & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_1f518b3389bc6ba7], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_e178eb4a30dc0818], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectoryAndTimeSpan(const ::java::io::InputStream & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectoryAndTimeSpan_81d47db2d250d02e], a0.this$));
        }

        void RuggedBuilder::storeInterpolator(const ::java::io::OutputStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_storeInterpolator_9601da1efb310931], a0.this$);
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
        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_RuggedBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedBuilder, aFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, aInterpolationNumber),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, aberrationOfLightCorrection),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, algorithm),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, constantElevation),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, ellipsoid),
          DECLARE_GET_FIELD(t_RuggedBuilder, inertialFrame),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, lightTimeCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, lineSensors),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxCachedTiles),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxDate),
          DECLARE_GET_FIELD(t_RuggedBuilder, minDate),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, name),
          DECLARE_GET_FIELD(t_RuggedBuilder, overshootTolerance),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVInterpolationNumber),
          DECLARE_GET_FIELD(t_RuggedBuilder, positionsVelocities),
          DECLARE_GET_FIELD(t_RuggedBuilder, quaternions),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, refractionCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, tStep),
          DECLARE_GET_FIELD(t_RuggedBuilder, tileUpdater),
          DECLARE_SET_FIELD(t_RuggedBuilder, trajectoryAndTimeSpan),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedBuilder__methods_[] = {
          DECLARE_METHOD(t_RuggedBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, addLineSensor, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, clearLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAberrationOfLightCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getConstantElevation, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLightTimeCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxCachedTiles, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getName, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPositionsVelocities, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getQuaternions, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTileUpdater, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, setAberrationOfLightCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setAlgorithm, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setConstantElevation, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setDigitalElevationModel, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setEllipsoid, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setLightTimeCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setName, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setRefractionCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setTimeSpan, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectory, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectoryAndTimeSpan, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, storeInterpolator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedBuilder)[] = {
          { Py_tp_methods, t_RuggedBuilder__methods_ },
          { Py_tp_init, (void *) t_RuggedBuilder_init_ },
          { Py_tp_getset, t_RuggedBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RuggedBuilder, t_RuggedBuilder, RuggedBuilder);

        void t_RuggedBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedBuilder), &PY_TYPE_DEF(RuggedBuilder), module, "RuggedBuilder", 0);
        }

        void t_RuggedBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "class_", make_descriptor(RuggedBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "wrapfn_", make_descriptor(t_RuggedBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedBuilder::initializeClass, 1)))
            return NULL;
          return t_RuggedBuilder::wrap_Object(RuggedBuilder(((t_RuggedBuilder *) arg)->object.this$));
        }
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds)
        {
          RuggedBuilder object((jobject) NULL);

          INT_CALL(object = RuggedBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.addLineSensor(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addLineSensor", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self)
        {
          RuggedBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.clearLineSensors());
          return t_RuggedBuilder::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::raster::TileUpdater result((jobject) NULL);
          OBJ_CALL(result = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setAberrationOfLightCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAberrationOfLightCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
          PyTypeObject **p0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
          {
            OBJ_CALL(result = self->object.setAlgorithm(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAlgorithm", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg)
        {
          jdouble a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.setConstantElevation(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.setDigitalElevationModel(a0, a1));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setDigitalElevationModel", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::EllipsoidId a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::rugged::api::BodyRotatingFrameId a1((jobject) NULL);
              PyTypeObject **p1;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::rugged::api::EllipsoidId::initializeClass, ::org::orekit::rugged::api::BodyRotatingFrameId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_EllipsoidId::parameters_, &a1, &p1, ::org::orekit::rugged::api::t_BodyRotatingFrameId::parameters_))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0, a1));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setEllipsoid", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setLightTimeCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setLightTimeCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setRefractionCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setRefractionCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.setTimeSpan(a0, a1, a2, a3));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSpan", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator a4((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "DIKKk", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::rugged::api::InertialFrameId a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KKIKKIK", ::org::orekit::rugged::api::InertialFrameId::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_InertialFrameId::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "kKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectory", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::InputStream a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setTrajectoryAndTimeSpan(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectoryAndTimeSpan", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::OutputStream a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.storeInterpolator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "storeInterpolator", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setAberrationOfLightCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "aberrationOfLightCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &value))
            {
              INT_CALL(self->object.setAlgorithm(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "algorithm", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) value);
        }
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setConstantElevation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "constantElevation", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &value))
            {
              INT_CALL(self->object.setEllipsoid(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ellipsoid", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setLightTimeCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lightTimeCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &value))
            {
              INT_CALL(self->object.setRefractionCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refractionCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::raster::TileUpdater value((jobject) NULL);
          OBJ_CALL(value = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(value);
        }

        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::io::InputStream value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
            {
              INT_CALL(self->object.setTrajectoryAndTimeSpan(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trajectoryAndTimeSpan", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader::class$ = NULL;
            jmethodID *SOLFSMYDataLoader::mids$ = NULL;
            bool SOLFSMYDataLoader::live$ = false;

            jclass SOLFSMYDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_7961e54fd3a47d94] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader::SOLFSMYDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

            ::java::util::SortedSet SOLFSMYDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_7961e54fd3a47d94]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
            }

            void SOLFSMYDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
            }

            jboolean SOLFSMYDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args);
            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, dataSet),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, maxDate),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader, t_SOLFSMYDataLoader, SOLFSMYDataLoader);

            void t_SOLFSMYDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader), &PY_TYPE_DEF(SOLFSMYDataLoader), module, "SOLFSMYDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters)));
            }

            void t_SOLFSMYDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "class_", make_descriptor(SOLFSMYDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader::wrap_Object(SOLFSMYDataLoader(((t_SOLFSMYDataLoader *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              SOLFSMYDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = SOLFSMYDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(SOLFSMYDataLoader$LineParameters));
            }

            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args)
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

            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data)
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
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitFixedStepHandler::class$ = NULL;
        jmethodID *OrekitFixedStepHandler::mids$ = NULL;
        bool OrekitFixedStepHandler::live$ = false;

        jclass OrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_3189c7446dbbb87e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitFixedStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
        }

        void OrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_280c3390961e0a50], a0.this$);
        }

        void OrekitFixedStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3189c7446dbbb87e], a0.this$, a1.this$, a2);
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
      namespace sampling {
        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_OrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitFixedStepHandler, t_OrekitFixedStepHandler, OrekitFixedStepHandler);

        void t_OrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitFixedStepHandler), &PY_TYPE_DEF(OrekitFixedStepHandler), module, "OrekitFixedStepHandler", 0);
        }

        void t_OrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "class_", make_descriptor(OrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "wrapfn_", make_descriptor(t_OrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitFixedStepHandler::wrap_Object(OrekitFixedStepHandler(((t_OrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateFunction::class$ = NULL;
      jmethodID *FieldUnivariateFunction::mids$ = NULL;
      bool FieldUnivariateFunction::live$ = false;

      jclass FieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateFunction_3e125e25ce1c9647] = env->getMethodID(cls, "toCalculusFieldUnivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");
          mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateFunction::toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateFunction_3e125e25ce1c9647], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
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
      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, toCalculusFieldUnivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateFunction, t_FieldUnivariateFunction, FieldUnivariateFunction);

      void t_FieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateFunction), &PY_TYPE_DEF(FieldUnivariateFunction), module, "FieldUnivariateFunction", 0);
      }

      void t_FieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "class_", make_descriptor(FieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "wrapfn_", make_descriptor(t_FieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateFunction::wrap_Object(FieldUnivariateFunction(((t_FieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *PolygonsSet::class$ = NULL;
          jmethodID *PolygonsSet::mids$ = NULL;
          bool PolygonsSet::live$ = false;

          jclass PolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/PolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_42b4b0384e7885c8] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_936ab5386aba1bbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_16deaf08470737f9] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_aeb39721bc4af7d2] = env->getMethodID(cls, "<init>", "(DDDDD)V");
              mids$[mid_buildNew_bda529a52bd5e417] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");
              mids$[mid_getVertices_cffdee33260f7ff8] = env->getMethodID(cls, "getVertices", "()[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolygonsSet::PolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          PolygonsSet::PolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_42b4b0384e7885c8, a0, a1.this$)) {}

          PolygonsSet::PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_936ab5386aba1bbf, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_16deaf08470737f9, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_aeb39721bc4af7d2, a0, a1, a2, a3, a4)) {}

          PolygonsSet PolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_bda529a52bd5e417], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > PolygonsSet::getVertices() const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getVertices_cffdee33260f7ff8]));
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
          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args);
          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args);
          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self);
          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data);
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data);
          static PyGetSetDef t_PolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolygonsSet, vertices),
            DECLARE_GET_FIELD(t_PolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolygonsSet__methods_[] = {
            DECLARE_METHOD(t_PolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolygonsSet)[] = {
            { Py_tp_methods, t_PolygonsSet__methods_ },
            { Py_tp_init, (void *) t_PolygonsSet_init_ },
            { Py_tp_getset, t_PolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolygonsSet, t_PolygonsSet, PolygonsSet);
          PyObject *t_PolygonsSet::wrap_Object(const PolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolygonsSet), &PY_TYPE_DEF(PolygonsSet), module, "PolygonsSet", 0);
          }

          void t_PolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "class_", make_descriptor(PolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "wrapfn_", make_descriptor(t_PolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolygonsSet::initializeClass, 1)))
              return NULL;
            return t_PolygonsSet::wrap_Object(PolygonsSet(((t_PolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a1((jobject) NULL);
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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
                jdouble a4;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = PolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(NULL);
          }
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BDTScale.h"
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

      ::java::lang::String BDTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble BDTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement BDTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble BDTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String BDTScale::toString() const
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitStepHandler::mids$ = NULL;
        bool PythonFieldOrekitStepHandler::live$ = false;

        jclass PythonFieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_fa82adff12d70536] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepHandler::PythonFieldOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldOrekitStepHandler::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self);
        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepHandler, t_PythonFieldOrekitStepHandler, PythonFieldOrekitStepHandler);
        PyObject *t_PythonFieldOrekitStepHandler::wrap_Object(const PythonFieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepHandler), &PY_TYPE_DEF(PythonFieldOrekitStepHandler), module, "PythonFieldOrekitStepHandler", 1);
        }

        void t_PythonFieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "class_", make_descriptor(PythonFieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V", (void *) t_PythonFieldOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepHandler::wrap_Object(PythonFieldOrekitStepHandler(((t_PythonFieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::FieldOrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *AbstractBuilder::class$ = NULL;
          jmethodID *AbstractBuilder::mids$ = NULL;
          bool AbstractBuilder::live$ = false;

          jclass AbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/AbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_687c2d3d1010744e] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getEquatorialRadius_b74f83833fdad017] = env->getMethodID(cls, "getEquatorialRadius", "()D");
              mids$[mid_getFlattening_b74f83833fdad017] = env->getMethodID(cls, "getFlattening", "()D");
              mids$[mid_getMissionReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getRangeUnitsConverter_ce12ce9d5e127af0] = env->getMethodID(cls, "getRangeUnitsConverter", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;");
              mids$[mid_withConventions_e66e90f092f54749] = env->getMethodID(cls, "withConventions", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withDataContext_2b737343ef414e9f] = env->getMethodID(cls, "withDataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withEquatorialRadius_27ee8f6686f6a70c] = env->getMethodID(cls, "withEquatorialRadius", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withFlattening_27ee8f6686f6a70c] = env->getMethodID(cls, "withFlattening", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withMissionReferenceDate_1338a9afeffd1e7f] = env->getMethodID(cls, "withMissionReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withRangeUnitsConverter_c953e87b26d66be0] = env->getMethodID(cls, "withRangeUnitsConverter", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_create_c9fe7425468bb64c] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions AbstractBuilder::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_53aaf70620a914af]));
          }

          ::org::orekit::data::DataContext AbstractBuilder::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_687c2d3d1010744e]));
          }

          jdouble AbstractBuilder::getEquatorialRadius() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_b74f83833fdad017]);
          }

          jdouble AbstractBuilder::getFlattening() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlattening_b74f83833fdad017]);
          }

          ::org::orekit::time::AbsoluteDate AbstractBuilder::getMissionReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_c325492395d89b24]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter AbstractBuilder::getRangeUnitsConverter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(env->callObjectMethod(this$, mids$[mid_getRangeUnitsConverter_ce12ce9d5e127af0]));
          }

          AbstractBuilder AbstractBuilder::withConventions(const ::org::orekit::utils::IERSConventions & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withConventions_e66e90f092f54749], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withDataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withDataContext_2b737343ef414e9f], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withEquatorialRadius(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withEquatorialRadius_27ee8f6686f6a70c], a0));
          }

          AbstractBuilder AbstractBuilder::withFlattening(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withFlattening_27ee8f6686f6a70c], a0));
          }

          AbstractBuilder AbstractBuilder::withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withMissionReferenceDate_1338a9afeffd1e7f], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withRangeUnitsConverter_c953e87b26d66be0], a0.this$));
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
          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args);
          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data);
          static PyGetSetDef t_AbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractBuilder, conventions),
            DECLARE_GET_FIELD(t_AbstractBuilder, dataContext),
            DECLARE_GET_FIELD(t_AbstractBuilder, equatorialRadius),
            DECLARE_GET_FIELD(t_AbstractBuilder, flattening),
            DECLARE_GET_FIELD(t_AbstractBuilder, missionReferenceDate),
            DECLARE_GET_FIELD(t_AbstractBuilder, rangeUnitsConverter),
            DECLARE_GET_FIELD(t_AbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractBuilder, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getEquatorialRadius, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getFlattening, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getMissionReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getRangeUnitsConverter, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, withConventions, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withDataContext, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withEquatorialRadius, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withFlattening, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withMissionReferenceDate, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withRangeUnitsConverter, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractBuilder)[] = {
            { Py_tp_methods, t_AbstractBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractBuilder, t_AbstractBuilder, AbstractBuilder);
          PyObject *t_AbstractBuilder::wrap_Object(const AbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractBuilder), &PY_TYPE_DEF(AbstractBuilder), module, "AbstractBuilder", 0);
          }

          void t_AbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "class_", make_descriptor(AbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "wrapfn_", make_descriptor(t_AbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractBuilder::wrap_Object(AbstractBuilder(((t_AbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFlattening());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.withConventions(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withConventions", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withDataContext(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDataContext", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withEquatorialRadius(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEquatorialRadius", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withFlattening(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withFlattening", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withMissionReferenceDate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMissionReferenceDate", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withRangeUnitsConverter(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withRangeUnitsConverter", arg);
            return NULL;
          }
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlattening());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter value((jobject) NULL);
            OBJ_CALL(value = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FixedTransformProvider::class$ = NULL;
      jmethodID *FixedTransformProvider::mids$ = NULL;
      bool FixedTransformProvider::live$ = false;

      jclass FixedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FixedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_052b8b9b93205d7a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Transform;)V");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedTransformProvider::FixedTransformProvider(const ::org::orekit::frames::Transform & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_052b8b9b93205d7a, a0.this$)) {}

      ::org::orekit::frames::Transform FixedTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform FixedTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
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
      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args);

      static PyMethodDef t_FixedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_FixedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedTransformProvider)[] = {
        { Py_tp_methods, t_FixedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_FixedTransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedTransformProvider, t_FixedTransformProvider, FixedTransformProvider);

      void t_FixedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedTransformProvider), &PY_TYPE_DEF(FixedTransformProvider), module, "FixedTransformProvider", 0);
      }

      void t_FixedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "class_", make_descriptor(FixedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "wrapfn_", make_descriptor(t_FixedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_FixedTransformProvider::wrap_Object(FixedTransformProvider(((t_FixedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Transform a0((jobject) NULL);
        FixedTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Transform::initializeClass, &a0))
        {
          INT_CALL(object = FixedTransformProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScale::class$ = NULL;
      jmethodID *TimeScale::mids$ = NULL;
      bool TimeScale::live$ = false;

      jclass TimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_fd347811007a6ba3] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_140b8964300ddedf] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_a35647bda2901f54] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_42be643fd1505244] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_b977b1a10a6965aa] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_e6b8e60343f2c829] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String TimeScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_a35647bda2901f54], a0.this$);
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_42be643fd1505244], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_b977b1a10a6965aa], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_e6b8e60343f2c829], a0.this$);
      }

      jdouble TimeScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble TimeScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
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
      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_getName(t_TimeScale *self);
      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data);
      static PyGetSetDef t_TimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScale__methods_[] = {
        DECLARE_METHOD(t_TimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TimeScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetToTAI, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScale)[] = {
        { Py_tp_methods, t_TimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScale)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TimeScale, t_TimeScale, TimeScale);

      void t_TimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScale), &PY_TYPE_DEF(TimeScale), module, "TimeScale", 0);
      }

      void t_TimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "class_", make_descriptor(TimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "wrapfn_", make_descriptor(t_TimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScale::initializeClass, 1)))
          return NULL;
        return t_TimeScale::wrap_Object(TimeScale(((t_TimeScale *) arg)->object.this$));
      }
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_getName(t_TimeScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args)
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

      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args)
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

      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsBashforthFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthFieldIntegratorBuilder::live$ = false;

        jclass AdamsBashforthFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegratorBuilder::AdamsBashforthFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsBashforthFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegratorBuilder, t_AdamsBashforthFieldIntegratorBuilder, AdamsBashforthFieldIntegratorBuilder);
        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(const AdamsBashforthFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthFieldIntegratorBuilder), module, "AdamsBashforthFieldIntegratorBuilder", 0);
        }

        void t_AdamsBashforthFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "class_", make_descriptor(AdamsBashforthFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(AdamsBashforthFieldIntegratorBuilder(((t_AdamsBashforthFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsBashforthFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver::class$ = NULL;
        jmethodID *MullerSolver::mids$ = NULL;
        bool MullerSolver::live$ = false;

        jclass MullerSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver::MullerSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        MullerSolver::MullerSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        MullerSolver::MullerSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}
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
        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args);
        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data);
        static PyGetSetDef t_MullerSolver__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver__methods_[] = {
          DECLARE_METHOD(t_MullerSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver)[] = {
          { Py_tp_methods, t_MullerSolver__methods_ },
          { Py_tp_init, (void *) t_MullerSolver_init_ },
          { Py_tp_getset, t_MullerSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver, t_MullerSolver, MullerSolver);
        PyObject *t_MullerSolver::wrap_Object(const MullerSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver), &PY_TYPE_DEF(MullerSolver), module, "MullerSolver", 0);
        }

        void t_MullerSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "class_", make_descriptor(MullerSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "wrapfn_", make_descriptor(t_MullerSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver::initializeClass, 1)))
            return NULL;
          return t_MullerSolver::wrap_Object(MullerSolver(((t_MullerSolver *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver object((jobject) NULL);

              INT_CALL(object = MullerSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SchurTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SchurTransformer::class$ = NULL;
      jmethodID *SchurTransformer::mids$ = NULL;
      bool SchurTransformer::live$ = false;

      jclass SchurTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SchurTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_f77d745f2128c391] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getT_f77d745f2128c391] = env->getMethodID(cls, "getT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getT_f77d745f2128c391]));
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
      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data);
      static PyGetSetDef t_SchurTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_SchurTransformer, p),
        DECLARE_GET_FIELD(t_SchurTransformer, pT),
        DECLARE_GET_FIELD(t_SchurTransformer, t),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SchurTransformer__methods_[] = {
        DECLARE_METHOD(t_SchurTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getPT, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SchurTransformer)[] = {
        { Py_tp_methods, t_SchurTransformer__methods_ },
        { Py_tp_init, (void *) t_SchurTransformer_init_ },
        { Py_tp_getset, t_SchurTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SchurTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SchurTransformer, t_SchurTransformer, SchurTransformer);

      void t_SchurTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(SchurTransformer), &PY_TYPE_DEF(SchurTransformer), module, "SchurTransformer", 0);
      }

      void t_SchurTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "class_", make_descriptor(SchurTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "wrapfn_", make_descriptor(t_SchurTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SchurTransformer::initializeClass, 1)))
          return NULL;
        return t_SchurTransformer::wrap_Object(SchurTransformer(((t_SchurTransformer *) arg)->object.this$));
      }
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SchurTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SchurTransformer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SchurTransformer(a0, a1));
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

      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SeriesTerm::class$ = NULL;
      jmethodID *SeriesTerm::mids$ = NULL;
      bool SeriesTerm::live$ = false;

      jclass SeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_97e33498326f7285] = env->getMethodID(cls, "add", "(IIDD)V");
          mids$[mid_buildTerm_5b820596e89d1f17] = env->getStaticMethodID(cls, "buildTerm", "(IIIIIIIIIIIIIII)Lorg/orekit/data/SeriesTerm;");
          mids$[mid_derivative_385587d041c81b1f] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_8e0d8ae8849d1551] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCosCoeff_cad98089d00f8a5b] = env->getMethodID(cls, "getCosCoeff", "(II)D");
          mids$[mid_getDegree_0e7cf35192c3effe] = env->getMethodID(cls, "getDegree", "(I)I");
          mids$[mid_getSinCoeff_cad98089d00f8a5b] = env->getMethodID(cls, "getSinCoeff", "(II)D");
          mids$[mid_value_385587d041c81b1f] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_8e0d8ae8849d1551] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_6d9bdfdb86170f1b] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_e5a6deebdf7be070] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_6d9bdfdb86170f1b] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_e5a6deebdf7be070] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void SeriesTerm::add(jint a0, jint a1, jdouble a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_add_97e33498326f7285], a0, a1, a2, a3);
      }

      SeriesTerm SeriesTerm::buildTerm(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12, jint a13, jint a14)
      {
        jclass cls = env->getClass(initializeClass);
        return SeriesTerm(env->callStaticObjectMethod(cls, mids$[mid_buildTerm_5b820596e89d1f17], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
      }

      JArray< jdouble > SeriesTerm::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_385587d041c81b1f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_8e0d8ae8849d1551], a0.this$));
      }

      jdouble SeriesTerm::getCosCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCosCoeff_cad98089d00f8a5b], a0, a1);
      }

      jint SeriesTerm::getDegree(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getDegree_0e7cf35192c3effe], a0);
      }

      jdouble SeriesTerm::getSinCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSinCoeff_cad98089d00f8a5b], a0, a1);
      }

      JArray< jdouble > SeriesTerm::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_385587d041c81b1f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_8e0d8ae8849d1551], a0.this$));
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
      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args);
      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg);
      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args);

      static PyMethodDef t_SeriesTerm__methods_[] = {
        DECLARE_METHOD(t_SeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, add, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, buildTerm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, derivative, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getCosCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getDegree, METH_O),
        DECLARE_METHOD(t_SeriesTerm, getSinCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SeriesTerm)[] = {
        { Py_tp_methods, t_SeriesTerm__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SeriesTerm)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SeriesTerm, t_SeriesTerm, SeriesTerm);

      void t_SeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(SeriesTerm), &PY_TYPE_DEF(SeriesTerm), module, "SeriesTerm", 0);
      }

      void t_SeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "class_", make_descriptor(SeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "wrapfn_", make_descriptor(t_SeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SeriesTerm::initializeClass, 1)))
          return NULL;
        return t_SeriesTerm::wrap_Object(SeriesTerm(((t_SeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble a3;

        if (!parseArgs(args, "IIDD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.add(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;
        jint a6;
        jint a7;
        jint a8;
        jint a9;
        jint a10;
        jint a11;
        jint a12;
        jint a13;
        jint a14;
        SeriesTerm result((jobject) NULL);

        if (!parseArgs(args, "IIIIIIIIIIIIIII", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
        {
          OBJ_CALL(result = ::org::orekit::data::SeriesTerm::buildTerm(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          return t_SeriesTerm::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildTerm", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getCosCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCosCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getDegree(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDegree", arg);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSinCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSinCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/List.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/net/URL.h"
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *EmpiricalDistribution::class$ = NULL;
        jmethodID *EmpiricalDistribution::mids$ = NULL;
        bool EmpiricalDistribution::live$ = false;
        jint EmpiricalDistribution::DEFAULT_BIN_COUNT = (jint) 0;

        jclass EmpiricalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/EmpiricalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_bf920f5be5cd75f9] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getBinCount_55546ef6a647f39b] = env->getMethodID(cls, "getBinCount", "()I");
            mids$[mid_getBinStats_e62d3bb06d56d7e3] = env->getMethodID(cls, "getBinStats", "()Ljava/util/List;");
            mids$[mid_getGeneratorUpperBounds_25e1757a36c4dde2] = env->getMethodID(cls, "getGeneratorUpperBounds", "()[D");
            mids$[mid_getNextValue_b74f83833fdad017] = env->getMethodID(cls, "getNextValue", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSampleStats_ce50f3086162cae8] = env->getMethodID(cls, "getSampleStats", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_getUpperBounds_25e1757a36c4dde2] = env->getMethodID(cls, "getUpperBounds", "()[D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isLoaded_9ab94ac1dc23b105] = env->getMethodID(cls, "isLoaded", "()Z");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_load_ab69da052b88f50c] = env->getMethodID(cls, "load", "([D)V");
            mids$[mid_load_7e1d51614d5d6a43] = env->getMethodID(cls, "load", "(Ljava/io/File;)V");
            mids$[mid_load_c76f3e82e2dd3be4] = env->getMethodID(cls, "load", "(Ljava/net/URL;)V");
            mids$[mid_reSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "reSeed", "(J)V");
            mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_getKernel_8d8c41a2965e1bf4] = env->getMethodID(cls, "getKernel", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)Lorg/hipparchus/distribution/RealDistribution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_BIN_COUNT = env->getStaticIntField(cls, "DEFAULT_BIN_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmpiricalDistribution::EmpiricalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        EmpiricalDistribution::EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bf920f5be5cd75f9, a0, a1.this$)) {}

        jdouble EmpiricalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble EmpiricalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jint EmpiricalDistribution::getBinCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getBinCount_55546ef6a647f39b]);
        }

        ::java::util::List EmpiricalDistribution::getBinStats() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBinStats_e62d3bb06d56d7e3]));
        }

        JArray< jdouble > EmpiricalDistribution::getGeneratorUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeneratorUpperBounds_25e1757a36c4dde2]));
        }

        jdouble EmpiricalDistribution::getNextValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNextValue_b74f83833fdad017]);
        }

        jdouble EmpiricalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble EmpiricalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary EmpiricalDistribution::getSampleStats() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSampleStats_ce50f3086162cae8]));
        }

        jdouble EmpiricalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble EmpiricalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        JArray< jdouble > EmpiricalDistribution::getUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBounds_25e1757a36c4dde2]));
        }

        jdouble EmpiricalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean EmpiricalDistribution::isLoaded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLoaded_9ab94ac1dc23b105]);
        }

        jboolean EmpiricalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        void EmpiricalDistribution::load(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_ab69da052b88f50c], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_7e1d51614d5d6a43], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::net::URL & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_c76f3e82e2dd3be4], a0.this$);
        }

        void EmpiricalDistribution::reSeed(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reSeed_3d7dd2314a0dd456], a0);
        }

        void EmpiricalDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456], a0);
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
      namespace fitting {
        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data);
        static PyGetSetDef t_EmpiricalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binCount),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, generatorUpperBounds),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, loaded),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, nextValue),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, sampleStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportUpperBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, upperBounds),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmpiricalDistribution__methods_[] = {
          DECLARE_METHOD(t_EmpiricalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinCount, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getGeneratorUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNextValue, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSampleStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isLoaded, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, load, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, reSeed, METH_O),
          DECLARE_METHOD(t_EmpiricalDistribution, reseedRandomGenerator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmpiricalDistribution)[] = {
          { Py_tp_methods, t_EmpiricalDistribution__methods_ },
          { Py_tp_init, (void *) t_EmpiricalDistribution_init_ },
          { Py_tp_getset, t_EmpiricalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmpiricalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EmpiricalDistribution, t_EmpiricalDistribution, EmpiricalDistribution);

        void t_EmpiricalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EmpiricalDistribution), &PY_TYPE_DEF(EmpiricalDistribution), module, "EmpiricalDistribution", 0);
        }

        void t_EmpiricalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "class_", make_descriptor(EmpiricalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "wrapfn_", make_descriptor(t_EmpiricalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(EmpiricalDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "DEFAULT_BIN_COUNT", make_descriptor(EmpiricalDistribution::DEFAULT_BIN_COUNT));
        }

        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmpiricalDistribution::initializeClass, 1)))
            return NULL;
          return t_EmpiricalDistribution::wrap_Object(EmpiricalDistribution(((t_EmpiricalDistribution *) arg)->object.this$));
        }
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmpiricalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EmpiricalDistribution object((jobject) NULL);

              INT_CALL(object = EmpiricalDistribution());
              self->object = object;
              break;
            }
           case 1:
            {
              jint a0;
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EmpiricalDistribution(a0, a1));
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

        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBinCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::stat::descriptive::PY_TYPE(StreamingStatistics));
        }

        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeneratorUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNextValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLoaded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::io::File a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::net::URL a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "load", args);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reSeed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reSeed", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBinCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeneratorUpperBounds());
          return value.wrap();
        }

        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLoaded());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNextValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperBounds());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Boolean.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *AbstractManeuverTriggers::class$ = NULL;
          jmethodID *AbstractManeuverTriggers::mids$ = NULL;
          bool AbstractManeuverTriggers::live$ = false;

          jclass AbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_88f6b3eca6f2ace7] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_7abb1f925b31f873] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getFirings_2f46b86c016957a0] = env->getMethodID(cls, "getFirings", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_430b36eccbd3b265] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_d98e2ca7f972ae8c] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_notifyResetters_1c47c97cdbc7e206] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_notifyResetters_871885b409df9d57] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_isFiringOnInitialState_4ef3ef34329e6316] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_initializeResetters_96d019f392abf918] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_initializeResetters_2d7f9a496c7e9781] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_applyResetters_c3c52b1257139045] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_applyResetters_370b1acde6244b7e] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_88f6b3eca6f2ace7], a0.this$);
          }

          void AbstractManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_7abb1f925b31f873], a0.this$, a1.this$);
          }

          ::org::orekit::utils::TimeSpanMap AbstractManeuverTriggers::getFirings() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getFirings_2f46b86c016957a0]));
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_430b36eccbd3b265], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_d98e2ca7f972ae8c], a0.this$, a1.this$);
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
        namespace trigger {
          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self);
          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_AbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractManeuverTriggers, firings),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_AbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, getFirings, METH_NOARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_AbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractManeuverTriggers, t_AbstractManeuverTriggers, AbstractManeuverTriggers);

          void t_AbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractManeuverTriggers), &PY_TYPE_DEF(AbstractManeuverTriggers), module, "AbstractManeuverTriggers", 0);
          }

          void t_AbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "class_", make_descriptor(AbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "wrapfn_", make_descriptor(t_AbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_AbstractManeuverTriggers::wrap_Object(AbstractManeuverTriggers(((t_AbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Boolean));
          }

          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadata::class$ = NULL;
            jmethodID *OdmMetadata::mids$ = NULL;
            bool OdmMetadata::live$ = false;

            jclass OdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getObjectName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setObjectName_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String OdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_1c1fa1e935d6cdcf]));
            }

            void OdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_734b91ac30d5f9b4], a0.this$);
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
            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self);
            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg);
            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data);
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_OdmMetadata, setObjectName, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadata)[] = {
              { Py_tp_methods, t_OdmMetadata__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(OdmMetadata, t_OdmMetadata, OdmMetadata);

            void t_OdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadata), &PY_TYPE_DEF(OdmMetadata), module, "OdmMetadata", 0);
            }

            void t_OdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "class_", make_descriptor(OdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "wrapfn_", make_descriptor(t_OdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmMetadata::wrap_Object(OdmMetadata(((t_OdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/BufferedReader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *BufferedReader::class$ = NULL;
    jmethodID *BufferedReader::mids$ = NULL;
    bool BufferedReader::live$ = false;

    jclass BufferedReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/BufferedReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e1a387c1ca9243a3] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;)V");
        mids$[mid_init$_f4e06c40be13a44b] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;I)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_lines_14e21bf777ff0ccf] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_mark_44ed599e93e8a30c] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_9ab94ac1dc23b105] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a45a4db28976f262] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_readLine_1c1fa1e935d6cdcf] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_ready_9ab94ac1dc23b105] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BufferedReader::BufferedReader(const ::java::io::Reader & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_e1a387c1ca9243a3, a0.this$)) {}

    BufferedReader::BufferedReader(const ::java::io::Reader & a0, jint a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_f4e06c40be13a44b, a0.this$, a1)) {}

    void BufferedReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    ::java::util::stream::Stream BufferedReader::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_14e21bf777ff0ccf]));
    }

    void BufferedReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_44ed599e93e8a30c], a0);
    }

    jboolean BufferedReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_9ab94ac1dc23b105]);
    }

    jint BufferedReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint BufferedReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a45a4db28976f262], a0.this$, a1, a2);
    }

    ::java::lang::String BufferedReader::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_1c1fa1e935d6cdcf]));
    }

    jboolean BufferedReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_9ab94ac1dc23b105]);
    }

    void BufferedReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
    }

    jlong BufferedReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_lines(t_BufferedReader *self);
    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self);
    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args);

    static PyMethodDef t_BufferedReader__methods_[] = {
      DECLARE_METHOD(t_BufferedReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, close, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, lines, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, read, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, readLine, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BufferedReader)[] = {
      { Py_tp_methods, t_BufferedReader__methods_ },
      { Py_tp_init, (void *) t_BufferedReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BufferedReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(BufferedReader, t_BufferedReader, BufferedReader);

    void t_BufferedReader::install(PyObject *module)
    {
      installType(&PY_TYPE(BufferedReader), &PY_TYPE_DEF(BufferedReader), module, "BufferedReader", 0);
    }

    void t_BufferedReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "class_", make_descriptor(BufferedReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "wrapfn_", make_descriptor(t_BufferedReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BufferedReader::initializeClass, 1)))
        return NULL;
      return t_BufferedReader::wrap_Object(BufferedReader(((t_BufferedReader *) arg)->object.this$));
    }
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BufferedReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::Reader a0((jobject) NULL);
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            INT_CALL(object = BufferedReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::Reader a0((jobject) NULL);
          jint a1;
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::io::Reader::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BufferedReader(a0, a1));
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

    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_BufferedReader_lines(t_BufferedReader *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args)
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

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatInSystem::class$ = NULL;
      jmethodID *SatInSystem::mids$ = NULL;
      bool SatInSystem::live$ = false;

      jclass SatInSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatInSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b25e272a068a28f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;I)V");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
          mids$[mid_getSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getTwoDigitsRinexPRN_55546ef6a647f39b] = env->getMethodID(cls, "getTwoDigitsRinexPRN", "()I");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatInSystem::SatInSystem(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b25e272a068a28f1, a0.this$, a1)) {}

      jboolean SatInSystem::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint SatInSystem::getPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
      }

      ::org::orekit::gnss::SatelliteSystem SatInSystem::getSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_21bd759cc4a81606]));
      }

      jint SatInSystem::getTwoDigitsRinexPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getTwoDigitsRinexPRN_55546ef6a647f39b]);
      }

      jint SatInSystem::hashCode() const
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
  namespace orekit {
    namespace gnss {
      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data);
      static PyGetSetDef t_SatInSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatInSystem, pRN),
        DECLARE_GET_FIELD(t_SatInSystem, system),
        DECLARE_GET_FIELD(t_SatInSystem, twoDigitsRinexPRN),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatInSystem__methods_[] = {
        DECLARE_METHOD(t_SatInSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, equals, METH_VARARGS),
        DECLARE_METHOD(t_SatInSystem, getPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getSystem, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getTwoDigitsRinexPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatInSystem)[] = {
        { Py_tp_methods, t_SatInSystem__methods_ },
        { Py_tp_init, (void *) t_SatInSystem_init_ },
        { Py_tp_getset, t_SatInSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatInSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatInSystem, t_SatInSystem, SatInSystem);

      void t_SatInSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatInSystem), &PY_TYPE_DEF(SatInSystem), module, "SatInSystem", 0);
      }

      void t_SatInSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "class_", make_descriptor(SatInSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "wrapfn_", make_descriptor(t_SatInSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatInSystem::initializeClass, 1)))
          return NULL;
        return t_SatInSystem::wrap_Object(SatInSystem(((t_SatInSystem *) arg)->object.this$));
      }
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatInSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        SatInSystem object((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
        {
          INT_CALL(object = SatInSystem(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPRN());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *SubOrientedPoint::class$ = NULL;
          jmethodID *SubOrientedPoint::mids$ = NULL;
          bool SubOrientedPoint::live$ = false;

          jclass SubOrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/SubOrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ae2db4be0bbe390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubOrientedPoint::SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_6ae2db4be0bbe390, a0.this$, a1.this$)) {}

          jdouble SubOrientedPoint::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
          }

          jboolean SubOrientedPoint::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubOrientedPoint::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args);
          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data);
          static PyGetSetDef t_SubOrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_SubOrientedPoint, empty),
            DECLARE_GET_FIELD(t_SubOrientedPoint, size),
            DECLARE_GET_FIELD(t_SubOrientedPoint, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubOrientedPoint__methods_[] = {
            DECLARE_METHOD(t_SubOrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubOrientedPoint)[] = {
            { Py_tp_methods, t_SubOrientedPoint__methods_ },
            { Py_tp_init, (void *) t_SubOrientedPoint_init_ },
            { Py_tp_getset, t_SubOrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubOrientedPoint)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubOrientedPoint, t_SubOrientedPoint, SubOrientedPoint);
          PyObject *t_SubOrientedPoint::wrap_Object(const SubOrientedPoint& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubOrientedPoint::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubOrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(SubOrientedPoint), &PY_TYPE_DEF(SubOrientedPoint), module, "SubOrientedPoint", 0);
          }

          void t_SubOrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "class_", make_descriptor(SubOrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "wrapfn_", make_descriptor(t_SubOrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubOrientedPoint::initializeClass, 1)))
              return NULL;
            return t_SubOrientedPoint::wrap_Object(SubOrientedPoint(((t_SubOrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubOrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubOrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubOrientedPoint(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorBuilder::class$ = NULL;
        jmethodID *AbstractPropagatorBuilder::mids$ = NULL;
        bool AbstractPropagatorBuilder::live$ = false;

        jclass AbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_687860a192ef3b84] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_deselectDynamicParameters_a1fa5dae97ea5ed2] = env->getMethodID(cls, "deselectDynamicParameters", "()V");
            mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_c325492395d89b24] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPositionScale_b74f83833fdad017] = env->getMethodID(cls, "getPositionScale", "()D");
            mids$[mid_getPropagationParametersDrivers_cfb822366e8ab425] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_69b47a274eed440d] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setParameters_ab69da052b88f50c] = env->getMethodID(cls, "setParameters", "([D)V");
            mids$[mid_createInitialOrbit_b6e68c5f730fb347] = env->getMethodID(cls, "createInitialOrbit", "()Lorg/orekit/orbits/Orbit;");
            mids$[mid_addSupportedParameters_0e7c3032c7c93ed3] = env->getMethodID(cls, "addSupportedParameters", "(Ljava/util/List;)V");
            mids$[mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractPropagatorBuilder::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_687860a192ef3b84], a0.this$);
        }

        void AbstractPropagatorBuilder::deselectDynamicParameters() const
        {
          env->callVoidMethod(this$, mids$[mid_deselectDynamicParameters_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::attitudes::AttitudeProvider AbstractPropagatorBuilder::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
        }

        ::org::orekit::frames::Frame AbstractPropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::time::AbsoluteDate AbstractPropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_c325492395d89b24]));
        }

        jdouble AbstractPropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::orbits::OrbitType AbstractPropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_cfb822366e8ab425]));
        }

        ::org::orekit::orbits::PositionAngleType AbstractPropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        jdouble AbstractPropagatorBuilder::getPositionScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPositionScale_b74f83833fdad017]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_cfb822366e8ab425]));
        }

        JArray< jdouble > AbstractPropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_25e1757a36c4dde2]));
        }

        void AbstractPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_69b47a274eed440d], a0.this$);
        }

        void AbstractPropagatorBuilder::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
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
      namespace conversion {
        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data);
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_AbstractPropagatorBuilder__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractPropagatorBuilder, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionScale),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, deselectDynamicParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionScale, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, resetOrbit, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_AbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorBuilder, t_AbstractPropagatorBuilder, AbstractPropagatorBuilder);

        void t_AbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorBuilder), &PY_TYPE_DEF(AbstractPropagatorBuilder), module, "AbstractPropagatorBuilder", 0);
        }

        void t_AbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "class_", make_descriptor(AbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_AbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorBuilder::wrap_Object(AbstractPropagatorBuilder(((t_AbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.deselectDynamicParameters());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPositionScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data)
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

        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPositionScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateIonosphericDelayModifier::mids$ = NULL;
          bool RangeRateIonosphericDelayModifier::live$ = false;

          jclass RangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_390b3fe3a43dc939] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;DZ)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorIonosphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateIonosphericDelayModifier::RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1, jboolean a2) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_390b3fe3a43dc939, a0.this$, a1, a2)) {}

          void RangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void RangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateIonosphericDelayModifier, t_RangeRateIonosphericDelayModifier, RangeRateIonosphericDelayModifier);

          void t_RangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateIonosphericDelayModifier), &PY_TYPE_DEF(RangeRateIonosphericDelayModifier), module, "RangeRateIonosphericDelayModifier", 0);
          }

          void t_RangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "class_", make_descriptor(RangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateIonosphericDelayModifier::wrap_Object(RangeRateIonosphericDelayModifier(((t_RangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            RangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = RangeRateIonosphericDelayModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/lang/Class.h"
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
            mids$[mid_copy_04f2e677f90ab735] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_b74f83833fdad017] = env->getMethodID(cls, "evaluate", "()D");
            mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getData_25e1757a36c4dde2] = env->getMethodID(cls, "getData", "()[D");
            mids$[mid_setData_ab69da052b88f50c] = env->getMethodID(cls, "setData", "([D)V");
            mids$[mid_setData_4484ad1f15b73c7a] = env->getMethodID(cls, "setData", "([DII)V");
            mids$[mid_getDataRef_25e1757a36c4dde2] = env->getMethodID(cls, "getDataRef", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::descriptive::UnivariateStatistic AbstractUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_04f2e677f90ab735]));
        }

        jdouble AbstractUnivariateStatistic::evaluate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_b74f83833fdad017]);
        }

        jdouble AbstractUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
        }

        JArray< jdouble > AbstractUnivariateStatistic::getData() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getData_25e1757a36c4dde2]));
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_ab69da052b88f50c], a0.this$);
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_4484ad1f15b73c7a], a0.this$, a1, a2);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
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

              ::java::lang::Class *AbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_6757b86d565adb5e] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_993978379571fdc8] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a0013bb9d172a4e4] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_0a5a6093c066b904] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DDLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_978e207e20e445e6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_f84396b6984702e2] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_450667d4c5114463] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_86700ab09b80a1e9] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_6757b86d565adb5e], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_993978379571fdc8], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a0013bb9d172a4e4], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0a5a6093c066b904], a0.this$, a1, a2, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_978e207e20e445e6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f84396b6984702e2], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_450667d4c5114463], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7, a8));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_86700ab09b80a1e9], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7, a8));
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
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);

              static PyMethodDef t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod, t_AbstractShortTermEncounter1DNumerical2DPOCMethod, AbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod), module, "AbstractShortTermEncounter1DNumerical2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(AbstractShortTermEncounter1DNumerical2DPOCMethod(((t_AbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a1((jobject) NULL);
                    PyTypeObject **p1;
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1, &p1, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
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
                  break;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a3((jobject) NULL);
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDDkID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a3((jobject) NULL);
                    PyTypeObject **p3;
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 7:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 9:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a6((jobject) NULL);
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDkID", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a6((jobject) NULL);
                    PyTypeObject **p6;
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKID", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), (PyObject *) self, "compute", args, 2);
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
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmHeader::class$ = NULL;
            jmethodID *OdmHeader::mids$ = NULL;
            bool OdmHeader::live$ = false;

            jclass OdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmHeader::OdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_OdmHeader__methods_[] = {
              DECLARE_METHOD(t_OdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmHeader)[] = {
              { Py_tp_methods, t_OdmHeader__methods_ },
              { Py_tp_init, (void *) t_OdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(OdmHeader, t_OdmHeader, OdmHeader);

            void t_OdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmHeader), &PY_TYPE_DEF(OdmHeader), module, "OdmHeader", 0);
            }

            void t_OdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "class_", make_descriptor(OdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "wrapfn_", make_descriptor(t_OdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmHeader::initializeClass, 1)))
                return NULL;
              return t_OdmHeader::wrap_Object(OdmHeader(((t_OdmHeader *) arg)->object.this$));
            }
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds)
            {
              OdmHeader object((jobject) NULL);

              INT_CALL(object = OdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
