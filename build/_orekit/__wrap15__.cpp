#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAbstractDetector::class$ = NULL;
        jmethodID *PythonFieldAbstractDetector::mids$ = NULL;
        bool PythonFieldAbstractDetector::live$ = false;

        jclass PythonFieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e33ea8f2d36cce9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)V");
            mids$[mid_create_a461cc495f0e8159] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractDetector::PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::orekit::propagation::events::handlers::FieldEventHandler & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6e33ea8f2d36cce9, a0.this$, a1.this$, a2, a3.this$)) {}

        void PythonFieldAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldAbstractDetector::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args);
        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self);
        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data);
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractDetector)[] = {
          { Py_tp_methods, t_PythonFieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractDetector_init_ },
          { Py_tp_getset, t_PythonFieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractDetector, t_PythonFieldAbstractDetector, PythonFieldAbstractDetector);
        PyObject *t_PythonFieldAbstractDetector::wrap_Object(const PythonFieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_PythonFieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractDetector), &PY_TYPE_DEF(PythonFieldAbstractDetector), module, "PythonFieldAbstractDetector", 1);
        }

        void t_PythonFieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "class_", make_descriptor(PythonFieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "wrapfn_", make_descriptor(t_PythonFieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonFieldAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractDetector::wrap_Object(PythonFieldAbstractDetector(((t_PythonFieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jint a2;
          ::org::orekit::propagation::events::handlers::FieldEventHandler a3((jobject) NULL);
          PyTypeObject **p3;
          PythonFieldAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "KKIK", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(::org::orekit::propagation::events::FieldAdaptableInterval(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(::org::orekit::propagation::events::handlers::FieldEventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OOiO", o0, o1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
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

        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
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

        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data)
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
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PointingPanel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
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
          mids$[mid_init$_137c8539aa793752] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DDDDD)V");
          mids$[mid_getNormal_665eae343e14b9ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_78226ca7935182ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointingPanel::PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_137c8539aa793752, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PointingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_665eae343e14b9ea], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PointingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_78226ca7935182ea], a0.this$));
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
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "java/util/Random.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *JDKRandomGenerator::class$ = NULL;
      jmethodID *JDKRandomGenerator::mids$ = NULL;
      bool JDKRandomGenerator::live$ = false;

      jclass JDKRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/JDKRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ce6849a0938c2d76] = env->getMethodID(cls, "<init>", "(Ljava/util/Random;)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JDKRandomGenerator::JDKRandomGenerator() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      JDKRandomGenerator::JDKRandomGenerator(const ::java::util::Random & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ce6849a0938c2d76, a0.this$)) {}

      JDKRandomGenerator::JDKRandomGenerator(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jboolean JDKRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void JDKRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      jdouble JDKRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat JDKRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jdouble JDKRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint JDKRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jint JDKRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong JDKRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
      }

      void JDKRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void JDKRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void JDKRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
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
      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args);
      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_JDKRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_JDKRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JDKRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_JDKRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JDKRandomGenerator)[] = {
        { Py_tp_methods, t_JDKRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_JDKRandomGenerator_init_ },
        { Py_tp_getset, t_JDKRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JDKRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(JDKRandomGenerator, t_JDKRandomGenerator, JDKRandomGenerator);

      void t_JDKRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(JDKRandomGenerator), &PY_TYPE_DEF(JDKRandomGenerator), module, "JDKRandomGenerator", 0);
      }

      void t_JDKRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "class_", make_descriptor(JDKRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "wrapfn_", make_descriptor(t_JDKRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JDKRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_JDKRandomGenerator::wrap_Object(JDKRandomGenerator(((t_JDKRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JDKRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JDKRandomGenerator object((jobject) NULL);

            INT_CALL(object = JDKRandomGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Random a0((jobject) NULL);
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Random::initializeClass, &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
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

      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args)
      {
        JArray< jbyte > a0((jobject) NULL);

        if (!parseArgs(args, "[B", &a0))
        {
          OBJ_CALL(self->object.nextBytes(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemeris::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemeris::mids$ = NULL;
        bool STKEphemerisFile$STKEphemeris::live$ = false;

        jclass STKEphemerisFile$STKEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0a6ea578b35c45e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemeris::STKEphemerisFile$STKEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0a6ea578b35c45e, a0.this$, a1, a2.this$)) {}

        ::java::lang::String STKEphemerisFile$STKEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        jdouble STKEphemerisFile$STKEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::java::util::List STKEphemerisFile$STKEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, id),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, segments),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemeris__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemeris)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemeris__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemeris_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemeris, t_STKEphemerisFile$STKEphemeris, STKEphemerisFile$STKEphemeris);

        void t_STKEphemerisFile$STKEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemeris), &PY_TYPE_DEF(STKEphemerisFile$STKEphemeris), module, "STKEphemerisFile$STKEphemeris", 0);
        }

        void t_STKEphemerisFile$STKEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "class_", make_descriptor(STKEphemerisFile$STKEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemeris::wrap_Object(STKEphemerisFile$STKEphemeris(((t_STKEphemerisFile$STKEphemeris *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          STKEphemerisFile$STKEphemeris object((jobject) NULL);

          if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemeris(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemerisSegment));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data)
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
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_setSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSAlmanac::IRNSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void IRNSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_modelCalled_03e6485ac4e3e934] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonModelObserver::PythonModelObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonModelObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonModelObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonModelObserver::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAbstractPropagator::class$ = NULL;
      jmethodID *FieldAbstractPropagator::mids$ = NULL;
      bool FieldAbstractPropagator::live$ = false;

      jclass FieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a553824829fc2514] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_e40bff2c3349a3fd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStartDate_fa8a1245db18b643] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_updateAdditionalStates_db7b9ef879f5b135] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_initializePropagation_7ae3461a92a43152] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_fa8a1245db18b643] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getStartDate_09b0a926600dfc14] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_updateUnmanagedStates_db7b9ef879f5b135] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_stateChanged_52154b94d63e10ed] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldAbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f], a0.this$);
      }

      ::java::util::List FieldAbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_a6156df500549a58]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldAbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
      }

      ::org::hipparchus::Field FieldAbstractPropagator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      ::org::orekit::frames::Frame FieldAbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a553824829fc2514]));
      }

      JArray< ::java::lang::String > FieldAbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldAbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_e40bff2c3349a3fd]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbstractPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
      }

      jboolean FieldAbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_85b5a3e9101d7c1f], a0.this$));
      }

      void FieldAbstractPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
      }

      void FieldAbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
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
      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data);
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_FieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldAbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, field),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, frame),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, multiplexer),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, setAttitudeProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbstractPropagator)[] = {
        { Py_tp_methods, t_FieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbstractPropagator, t_FieldAbstractPropagator, FieldAbstractPropagator);
      PyObject *t_FieldAbstractPropagator::wrap_Object(const FieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbstractPropagator), &PY_TYPE_DEF(FieldAbstractPropagator), module, "FieldAbstractPropagator", 0);
      }

      void t_FieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "class_", make_descriptor(FieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "wrapfn_", make_descriptor(t_FieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldAbstractPropagator::wrap_Object(FieldAbstractPropagator(((t_FieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args)
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

      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg)
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
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlTokenBuilder::class$ = NULL;
            jmethodID *XmlTokenBuilder::mids$ = NULL;
            bool XmlTokenBuilder::live$ = false;

            jclass XmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::List XmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_9b67b2bd574b1d70], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_XmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_XmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlTokenBuilder)[] = {
              { Py_tp_methods, t_XmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlTokenBuilder, t_XmlTokenBuilder, XmlTokenBuilder);

            void t_XmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlTokenBuilder), &PY_TYPE_DEF(XmlTokenBuilder), module, "XmlTokenBuilder", 0);
            }

            void t_XmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "class_", make_descriptor(XmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "wrapfn_", make_descriptor(t_XmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_XmlTokenBuilder::wrap_Object(XmlTokenBuilder(((t_XmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                mids$[mid_init$_07829ca5e164764b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMeasurement_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeasurement", "()D");
                mids$[mid_getType_f32a91f5b1972277] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Observation::Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07829ca5e164764b, a0.this$, a1.this$, a2)) {}

            ::org::orekit::time::AbsoluteDate Observation::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
            }

            jdouble Observation::getMeasurement() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeasurement_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::ObservationType Observation::getType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::ObservationType(env->callObjectMethod(this$, mids$[mid_getType_f32a91f5b1972277]));
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionData::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionData::mids$ = NULL;
              bool RtcmOrbitCorrectionData::live$ = false;

              jclass RtcmOrbitCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_f2f64475e4580546] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_7cd8e64b85aa1635] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_0a2a1ac2721c0336] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_d62793cb3669987a] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionData::RtcmOrbitCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint RtcmOrbitCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmOrbitCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_7cd8e64b85aa1635]));
              }

              void RtcmOrbitCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_0a2a1ac2721c0336], a0);
              }

              void RtcmOrbitCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_d62793cb3669987a], a0.this$);
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
              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionData)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionData_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionData, t_RtcmOrbitCorrectionData, RtcmOrbitCorrectionData);

              void t_RtcmOrbitCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionData), &PY_TYPE_DEF(RtcmOrbitCorrectionData), module, "RtcmOrbitCorrectionData", 0);
              }

              void t_RtcmOrbitCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "class_", make_descriptor(RtcmOrbitCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionData::wrap_Object(RtcmOrbitCorrectionData(((t_RtcmOrbitCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter::mids$ = NULL;
        bool StreamingCpfWriter::live$ = false;

        jclass StreamingCpfWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_84ed1ac42f8f4abe] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;)V");
            mids$[mid_init$_7c732c7d5d657707] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;Z)V");
            mids$[mid_newSegment_d403cd4ec66eca21] = env->getMethodID(cls, "newSegment", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ilrs/StreamingCpfWriter$Segment;");
            mids$[mid_writeEndOfFile_7ae3461a92a43152] = env->getMethodID(cls, "writeEndOfFile", "()V");
            mids$[mid_writeHeader_7ae3461a92a43152] = env->getMethodID(cls, "writeHeader", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84ed1ac42f8f4abe, a0.this$, a1.this$, a2.this$)) {}

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c732c7d5d657707, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::files::ilrs::StreamingCpfWriter$Segment StreamingCpfWriter::newSegment(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::files::ilrs::StreamingCpfWriter$Segment(env->callObjectMethod(this$, mids$[mid_newSegment_d403cd4ec66eca21], a0.this$));
        }

        void StreamingCpfWriter::writeEndOfFile() const
        {
          env->callVoidMethod(this$, mids$[mid_writeEndOfFile_7ae3461a92a43152]);
        }

        void StreamingCpfWriter::writeHeader() const
        {
          env->callVoidMethod(this$, mids$[mid_writeHeader_7ae3461a92a43152]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self);
        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self);

        static PyMethodDef t_StreamingCpfWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, newSegment, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter, writeEndOfFile, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter, writeHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter__methods_ },
          { Py_tp_init, (void *) t_StreamingCpfWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter, t_StreamingCpfWriter, StreamingCpfWriter);

        void t_StreamingCpfWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter), &PY_TYPE_DEF(StreamingCpfWriter), module, "StreamingCpfWriter", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "HeaderLineWriter", make_descriptor(&PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter)));
        }

        void t_StreamingCpfWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "class_", make_descriptor(StreamingCpfWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter::wrap_Object(StreamingCpfWriter(((t_StreamingCpfWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              jboolean a3;
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkkZ", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2, a3));
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

        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.newSegment(a0));
            return ::org::orekit::files::ilrs::t_StreamingCpfWriter$Segment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newSegment", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeEndOfFile());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeHeader());
          Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
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
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_1cb2de56c89f4b52] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a69d58691b2f6a42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_3dcf0b9943835ef4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_add_585261c47f8bb8c7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_3dcf0b9943835ef4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_8c3ffd19fe76e82d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_585261c47f8bb8c7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_cb1d9a131d5e5e35] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_05ce3f5e63fb7e2e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_585261c47f8bb8c7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_585261c47f8bb8c7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_5e30662bac3edb02] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_0e35505a51eda123] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_cb1d9a131d5e5e35] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_cb1d9a131d5e5e35] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_3a8e2a6c92fd1cf2] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_d2259a595105558d] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_585261c47f8bb8c7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d517a7265f416cee] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_9dd724c9bf212c41] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_5a56d0bd99be417f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/SparseFieldVector;");
          mids$[mid_subtract_585261c47f8bb8c7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_394dfc39c31419fa] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_648bcdf08fddb790] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_0f7840d9f7bdbccc] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_b9f5757f8273f2da] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_47b54617593d4460] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_648bcdf08fddb790] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0f7840d9f7bdbccc] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_b9f5757f8273f2da] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_47b54617593d4460] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_0a2a1ac2721c0336] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cb2de56c89f4b52, a0.this$, a1.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a69d58691b2f6a42, a0.this$, a1)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_3dcf0b9943835ef4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_3dcf0b9943835ef4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_05ce3f5e63fb7e2e], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_585261c47f8bb8c7], a0.this$));
      }

      jboolean SparseFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint SparseFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::FieldElement SparseFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_5e30662bac3edb02], a0));
      }

      ::org::hipparchus::Field SparseFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_0e35505a51eda123], a0, a1));
      }

      jint SparseFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_3a8e2a6c92fd1cf2], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_d2259a595105558d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_585261c47f8bb8c7], a0.this$));
      }

      void SparseFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d517a7265f416cee], a0.this$);
      }

      void SparseFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9dd724c9bf212c41], a0, a1.this$);
      }

      void SparseFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      SparseFieldVector SparseFieldVector::subtract(const SparseFieldVector & a0) const
      {
        return SparseFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_5a56d0bd99be417f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_585261c47f8bb8c7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > SparseFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_394dfc39c31419fa]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_648bcdf08fddb790], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_0f7840d9f7bdbccc], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_b9f5757f8273f2da], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_47b54617593d4460], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_648bcdf08fddb790], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0f7840d9f7bdbccc], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_b9f5757f8273f2da], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_47b54617593d4460], a0.this$, a1, a2));
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader::mids$ = NULL;
            bool AbstractSolarActivityDataLoader::live$ = false;

            jclass AbstractSolarActivityDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDataSet_d01a04ddab6c7194] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getUTC_63ac10047983bd43] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_setMaxDate_e82d68cd9f886886] = env->getMethodID(cls, "setMaxDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setMinDate_e82d68cd9f886886] = env->getMethodID(cls, "setMinDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::SortedSet AbstractSolarActivityDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_d01a04ddab6c7194]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityDataLoader::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_63ac10047983bd43]));
            }

            void AbstractSolarActivityDataLoader::setMaxDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxDate_e82d68cd9f886886], a0.this$);
            }

            void AbstractSolarActivityDataLoader::setMinDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMinDate_e82d68cd9f886886], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, dataSet),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, maxDate),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getUTC, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMaxDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMinDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader, t_AbstractSolarActivityDataLoader, AbstractSolarActivityDataLoader);
            PyObject *t_AbstractSolarActivityDataLoader::wrap_Object(const AbstractSolarActivityDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader), &PY_TYPE_DEF(AbstractSolarActivityDataLoader), module, "AbstractSolarActivityDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters)));
            }

            void t_AbstractSolarActivityDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "class_", make_descriptor(AbstractSolarActivityDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader::wrap_Object(AbstractSolarActivityDataLoader(((t_AbstractSolarActivityDataLoader *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMinDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMinDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMinDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "minDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FunctionalDetector::class$ = NULL;
        jmethodID *FunctionalDetector::mids$ = NULL;
        bool FunctionalDetector::live$ = false;

        jclass FunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_4f95d673d33a983a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FunctionalDetector::FunctionalDetector() : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble FunctionalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
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
        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args);
        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args);
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data);
        static PyGetSetDef t_FunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FunctionalDetector)[] = {
          { Py_tp_methods, t_FunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FunctionalDetector_init_ },
          { Py_tp_getset, t_FunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FunctionalDetector, t_FunctionalDetector, FunctionalDetector);
        PyObject *t_FunctionalDetector::wrap_Object(const FunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FunctionalDetector), &PY_TYPE_DEF(FunctionalDetector), module, "FunctionalDetector", 0);
        }

        void t_FunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "class_", make_descriptor(FunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "wrapfn_", make_descriptor(t_FunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FunctionalDetector::wrap_Object(FunctionalDetector(((t_FunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          FunctionalDetector object((jobject) NULL);

          INT_CALL(object = FunctionalDetector());
          self->object = object;
          self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FunctionalDetector);

          return 0;
        }

        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagatorBuilder::class$ = NULL;
        jmethodID *GLONASSNumericalPropagatorBuilder::mids$ = NULL;
        bool GLONASSNumericalPropagatorBuilder::live$ = false;

        jclass GLONASSNumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fda51b74477ee74c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Z)V");
            mids$[mid_init$_8dfdeeba52e3e344] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_attitudeProvider_056a33b5e9982ba4] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_build_ac7532e841088313] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
            mids$[mid_eci_efe7e4850252d670] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_mass_2482227c0cdf1750] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fda51b74477ee74c, a0.this$, a1.this$, a2)) {}

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dfdeeba52e3e344, a0.this$, a1.this$, a2, a3.this$)) {}

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_056a33b5e9982ba4], a0.this$));
        }

        ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNumericalPropagatorBuilder::build() const
        {
          return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_build_ac7532e841088313]));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_efe7e4850252d670], a0.this$));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::mass(jdouble a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_2482227c0cdf1750], a0));
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
        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);

        static PyMethodDef t_GLONASSNumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, attitudeProvider, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, eci, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, mass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagatorBuilder, t_GLONASSNumericalPropagatorBuilder, GLONASSNumericalPropagatorBuilder);

        void t_GLONASSNumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagatorBuilder), &PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder), module, "GLONASSNumericalPropagatorBuilder", 0);
        }

        void t_GLONASSNumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "class_", make_descriptor(GLONASSNumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagatorBuilder::wrap_Object(GLONASSNumericalPropagatorBuilder(((t_GLONASSNumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.attitudeProvider(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.eci(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eci", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.mass(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegrator::class$ = NULL;
          jmethodID *GaussIntegrator::mids$ = NULL;
          bool GaussIntegrator::live$ = false;

          jclass GaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_832c28cb3cc4d660] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_getNumberOfPoints_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_b772323fc98b7293] = env->getMethodID(cls, "getPoint", "(I)D");
              mids$[mid_getWeight_b772323fc98b7293] = env->getMethodID(cls, "getWeight", "(I)D");
              mids$[mid_integrate_96e94d14952261a3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegrator::GaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_832c28cb3cc4d660, a0.this$)) {}

          GaussIntegrator::GaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

          jint GaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_f2f64475e4580546]);
          }

          jdouble GaussIntegrator::getPoint(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPoint_b772323fc98b7293], a0);
          }

          jdouble GaussIntegrator::getWeight(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWeight_b772323fc98b7293], a0);
          }

          jdouble GaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_96e94d14952261a3], a0.this$);
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
          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self);
          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data);
          static PyGetSetDef t_GaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_GaussIntegrator, numberOfPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_GaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_GaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegrator)[] = {
            { Py_tp_methods, t_GaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_GaussIntegrator_init_ },
            { Py_tp_getset, t_GaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegrator, t_GaussIntegrator, GaussIntegrator);

          void t_GaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegrator), &PY_TYPE_DEF(GaussIntegrator), module, "GaussIntegrator", 0);
          }

          void t_GaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "class_", make_descriptor(GaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "wrapfn_", make_descriptor(t_GaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_GaussIntegrator::wrap_Object(GaussIntegrator(((t_GaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = GaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = GaussIntegrator(a0, a1));
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

          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MicrosphereProjectionInterpolator::class$ = NULL;
        jmethodID *MicrosphereProjectionInterpolator::mids$ = NULL;
        bool MicrosphereProjectionInterpolator::live$ = false;

        jclass MicrosphereProjectionInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ee4f982a0b0360ab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;DZD)V");
            mids$[mid_init$_c20a1ab6e596ddd0] = env->getMethodID(cls, "<init>", "(IIDDDDZD)V");
            mids$[mid_interpolate_ca62b9640059ffa6] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere & a0, jdouble a1, jboolean a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee4f982a0b0360ab, a0.this$, a1, a2, a3)) {}

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jboolean a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c20a1ab6e596ddd0, a0, a1, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::analysis::MultivariateFunction MicrosphereProjectionInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_ca62b9640059ffa6], a0.this$, a1.this$));
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
        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args);

        static PyMethodDef t_MicrosphereProjectionInterpolator__methods_[] = {
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MicrosphereProjectionInterpolator)[] = {
          { Py_tp_methods, t_MicrosphereProjectionInterpolator__methods_ },
          { Py_tp_init, (void *) t_MicrosphereProjectionInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MicrosphereProjectionInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MicrosphereProjectionInterpolator, t_MicrosphereProjectionInterpolator, MicrosphereProjectionInterpolator);

        void t_MicrosphereProjectionInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MicrosphereProjectionInterpolator), &PY_TYPE_DEF(MicrosphereProjectionInterpolator), module, "MicrosphereProjectionInterpolator", 0);
        }

        void t_MicrosphereProjectionInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "class_", make_descriptor(MicrosphereProjectionInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "wrapfn_", make_descriptor(t_MicrosphereProjectionInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 1)))
            return NULL;
          return t_MicrosphereProjectionInterpolator::wrap_Object(MicrosphereProjectionInterpolator(((t_MicrosphereProjectionInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere a0((jobject) NULL);
              jdouble a1;
              jboolean a2;
              jdouble a3;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDZD", ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              jint a0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jboolean a6;
              jdouble a7;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "IIDDDDZD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
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
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterDriversProvider::class$ = NULL;
      jmethodID *PythonParameterDriversProvider::mids$ = NULL;
      bool PythonParameterDriversProvider::live$ = false;

      jclass PythonParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterDriversProvider::PythonParameterDriversProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonParameterDriversProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonParameterDriversProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonParameterDriversProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self);
      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args);
      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data);
      static PyGetSetDef t_PythonParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterDriversProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_PythonParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterDriversProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterDriversProvider)[] = {
        { Py_tp_methods, t_PythonParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) t_PythonParameterDriversProvider_init_ },
        { Py_tp_getset, t_PythonParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterDriversProvider, t_PythonParameterDriversProvider, PythonParameterDriversProvider);

      void t_PythonParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterDriversProvider), &PY_TYPE_DEF(PythonParameterDriversProvider), module, "PythonParameterDriversProvider", 1);
      }

      void t_PythonParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "class_", make_descriptor(PythonParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "wrapfn_", make_descriptor(t_PythonParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterDriversProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonParameterDriversProvider_getParametersDrivers0 },
          { "pythonDecRef", "()V", (void *) t_PythonParameterDriversProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_PythonParameterDriversProvider::wrap_Object(PythonParameterDriversProvider(((t_PythonParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterDriversProvider_init_(t_PythonParameterDriversProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterDriversProvider object((jobject) NULL);

        INT_CALL(object = PythonParameterDriversProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterDriversProvider_finalize(t_PythonParameterDriversProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterDriversProvider_pythonExtension(t_PythonParameterDriversProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonParameterDriversProvider_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonParameterDriversProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterDriversProvider::mids$[PythonParameterDriversProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParameterDriversProvider_get__self(t_PythonParameterDriversProvider *self, void *data)
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
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *FieldMatrixPreservingVisitor::mids$ = NULL;
      bool FieldMatrixPreservingVisitor::live$ = false;

      jclass FieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_8c5ca78361f003c1] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void FieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      void FieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_8c5ca78361f003c1], a0, a1, a2.this$);
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
      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self);
      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixPreservingVisitor, t_FieldMatrixPreservingVisitor, FieldMatrixPreservingVisitor);
      PyObject *t_FieldMatrixPreservingVisitor::wrap_Object(const FieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixPreservingVisitor), &PY_TYPE_DEF(FieldMatrixPreservingVisitor), module, "FieldMatrixPreservingVisitor", 0);
      }

      void t_FieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "class_", make_descriptor(FieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixPreservingVisitor::wrap_Object(FieldMatrixPreservingVisitor(((t_FieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Space::class$ = NULL;
      jmethodID *Space::mids$ = NULL;
      bool Space::live$ = false;

      jclass Space::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Space");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSubSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Space::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      Space Space::getSubSpace() const
      {
        return Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_0438ef5f9a5edb53]));
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
      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_getDimension(t_Space *self);
      static PyObject *t_Space_getSubSpace(t_Space *self);
      static PyObject *t_Space_get__dimension(t_Space *self, void *data);
      static PyObject *t_Space_get__subSpace(t_Space *self, void *data);
      static PyGetSetDef t_Space__fields_[] = {
        DECLARE_GET_FIELD(t_Space, dimension),
        DECLARE_GET_FIELD(t_Space, subSpace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Space__methods_[] = {
        DECLARE_METHOD(t_Space, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Space, getSubSpace, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Space)[] = {
        { Py_tp_methods, t_Space__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Space__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Space)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Space, t_Space, Space);

      void t_Space::install(PyObject *module)
      {
        installType(&PY_TYPE(Space), &PY_TYPE_DEF(Space), module, "Space", 0);
      }

      void t_Space::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "class_", make_descriptor(Space::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "wrapfn_", make_descriptor(t_Space::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Space::initializeClass, 1)))
          return NULL;
        return t_Space::wrap_Object(Space(((t_Space *) arg)->object.this$));
      }
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Space::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Space_getDimension(t_Space *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Space_getSubSpace(t_Space *self)
      {
        Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubSpace());
        return t_Space::wrap_Object(result);
      }

      static PyObject *t_Space_get__dimension(t_Space *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Space_get__subSpace(t_Space *self, void *data)
      {
        Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubSpace());
        return t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonTransformProvider::class$ = NULL;
      jmethodID *PythonTransformProvider::mids$ = NULL;
      bool PythonTransformProvider::live$ = false;

      jclass PythonTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTransformProvider::PythonTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTransformProvider::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self);
      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data);
      static PyGetSetDef t_PythonTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTransformProvider)[] = {
        { Py_tp_methods, t_PythonTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonTransformProvider_init_ },
        { Py_tp_getset, t_PythonTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTransformProvider, t_PythonTransformProvider, PythonTransformProvider);

      void t_PythonTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTransformProvider), &PY_TYPE_DEF(PythonTransformProvider), module, "PythonTransformProvider", 1);
      }

      void t_PythonTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "class_", make_descriptor(PythonTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "wrapfn_", make_descriptor(t_PythonTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonTransformProvider_getTransform0 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonTransformProvider_getTransform1 },
          { "pythonDecRef", "()V", (void *) t_PythonTransformProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonTransformProvider::wrap_Object(PythonTransformProvider(((t_PythonTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *YesNoUnknown::class$ = NULL;
          jmethodID *YesNoUnknown::mids$ = NULL;
          bool YesNoUnknown::live$ = false;
          YesNoUnknown *YesNoUnknown::NO = NULL;
          YesNoUnknown *YesNoUnknown::UNKOWN = NULL;
          YesNoUnknown *YesNoUnknown::YES = NULL;

          jclass YesNoUnknown::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/YesNoUnknown");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_3148638a17c7418c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
              mids$[mid_values_aba63ee2f8193a0b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NO = new YesNoUnknown(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              UNKOWN = new YesNoUnknown(env->getStaticObjectField(cls, "UNKOWN", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              YES = new YesNoUnknown(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          YesNoUnknown YesNoUnknown::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return YesNoUnknown(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3148638a17c7418c], a0.this$));
          }

          JArray< YesNoUnknown > YesNoUnknown::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< YesNoUnknown >(env->callStaticObjectMethod(cls, mids$[mid_values_aba63ee2f8193a0b]));
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
          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args);
          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_YesNoUnknown_values(PyTypeObject *type);
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data);
          static PyGetSetDef t_YesNoUnknown__fields_[] = {
            DECLARE_GET_FIELD(t_YesNoUnknown, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_YesNoUnknown__methods_[] = {
            DECLARE_METHOD(t_YesNoUnknown, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, of_, METH_VARARGS),
            DECLARE_METHOD(t_YesNoUnknown, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(YesNoUnknown)[] = {
            { Py_tp_methods, t_YesNoUnknown__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_YesNoUnknown__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(YesNoUnknown)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(YesNoUnknown, t_YesNoUnknown, YesNoUnknown);
          PyObject *t_YesNoUnknown::wrap_Object(const YesNoUnknown& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_YesNoUnknown::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_YesNoUnknown::install(PyObject *module)
          {
            installType(&PY_TYPE(YesNoUnknown), &PY_TYPE_DEF(YesNoUnknown), module, "YesNoUnknown", 0);
          }

          void t_YesNoUnknown::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "class_", make_descriptor(YesNoUnknown::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "wrapfn_", make_descriptor(t_YesNoUnknown::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "boxfn_", make_descriptor(boxObject));
            env->getClass(YesNoUnknown::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "NO", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::NO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "UNKOWN", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::UNKOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "YES", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::YES)));
          }

          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, YesNoUnknown::initializeClass, 1)))
              return NULL;
            return t_YesNoUnknown::wrap_Object(YesNoUnknown(((t_YesNoUnknown *) arg)->object.this$));
          }
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, YesNoUnknown::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            YesNoUnknown result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::valueOf(a0));
              return t_YesNoUnknown::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_YesNoUnknown_values(PyTypeObject *type)
          {
            JArray< YesNoUnknown > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::values());
            return JArray<jobject>(result.this$).wrap(t_YesNoUnknown::wrap_jobject);
          }
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$Sigma::class$ = NULL;
            jmethodID *CMAESOptimizer$Sigma::mids$ = NULL;
            bool CMAESOptimizer$Sigma::live$ = false;

            jclass CMAESOptimizer$Sigma::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_getSigma_7cdc325af0834901] = env->getMethodID(cls, "getSigma", "()[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$Sigma::CMAESOptimizer$Sigma(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

            JArray< jdouble > CMAESOptimizer$Sigma::getSigma() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_7cdc325af0834901]));
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
            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args);
            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self);
            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data);
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$Sigma__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, sigma),
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$Sigma__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, getSigma, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$Sigma)[] = {
              { Py_tp_methods, t_CMAESOptimizer$Sigma__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$Sigma_init_ },
              { Py_tp_getset, t_CMAESOptimizer$Sigma__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$Sigma)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$Sigma, t_CMAESOptimizer$Sigma, CMAESOptimizer$Sigma);
            PyObject *t_CMAESOptimizer$Sigma::wrap_Object(const CMAESOptimizer$Sigma& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$Sigma::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$Sigma::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$Sigma), &PY_TYPE_DEF(CMAESOptimizer$Sigma), module, "CMAESOptimizer$Sigma", 0);
            }

            void t_CMAESOptimizer$Sigma::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "class_", make_descriptor(CMAESOptimizer$Sigma::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "wrapfn_", make_descriptor(t_CMAESOptimizer$Sigma::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$Sigma::wrap_Object(CMAESOptimizer$Sigma(((t_CMAESOptimizer$Sigma *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds)
            {
              JArray< jdouble > a0((jobject) NULL);
              CMAESOptimizer$Sigma object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = CMAESOptimizer$Sigma(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getSigma());
              return result.wrap();
            }
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getSigma());
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Pow::Pow() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Pow::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
            mids$[mid_init$_78b88d9ac962dac0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_5173509e6f716b64] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_321bcd237994fcea] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_78b88d9ac962dac0, a0.this$, a1.this$, a2)) {}

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5173509e6f716b64, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLatitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
        }

        jdouble FieldLatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_456d9a2f64d6b28d]);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistory::class$ = NULL;
              jmethodID *OrbitCovarianceHistory::mids$ = NULL;
              bool OrbitCovarianceHistory::live$ = false;

              jclass OrbitCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9302c61a34ecedaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_a6156df500549a58] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_ab36bd1c715bb8f7] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistory::OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9302c61a34ecedaf, a0.this$, a1.this$)) {}

              ::java::util::List OrbitCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata OrbitCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_ab36bd1c715bb8f7]));
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
              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data);
              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistory)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistory_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistory, t_OrbitCovarianceHistory, OrbitCovarianceHistory);

              void t_OrbitCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistory), &PY_TYPE_DEF(OrbitCovarianceHistory), module, "OrbitCovarianceHistory", 0);
              }

              void t_OrbitCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "class_", make_descriptor(OrbitCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "wrapfn_", make_descriptor(t_OrbitCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistory::wrap_Object(OrbitCovarianceHistory(((t_OrbitCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovariance));
              }

              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/hipparchus/complex/ComplexField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexField::class$ = NULL;
      jmethodID *ComplexField::mids$ = NULL;
      bool ComplexField::live$ = false;

      jclass ComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_3cb90e62d7040545] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getOne_8278e96d3787b980] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_8278e96d3787b980] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ComplexField ComplexField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3cb90e62d7040545]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getOne() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getOne_8278e96d3787b980]));
      }

      ::java::lang::Class ComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getZero() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getZero_8278e96d3787b980]));
      }

      jint ComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_getInstance(PyTypeObject *type);
      static PyObject *t_ComplexField_getOne(t_ComplexField *self);
      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self);
      static PyObject *t_ComplexField_getZero(t_ComplexField *self);
      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data);
      static PyGetSetDef t_ComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexField, instance),
        DECLARE_GET_FIELD(t_ComplexField, one),
        DECLARE_GET_FIELD(t_ComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_ComplexField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexField__methods_[] = {
        DECLARE_METHOD(t_ComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_ComplexField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexField)[] = {
        { Py_tp_methods, t_ComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexField, t_ComplexField, ComplexField);

      void t_ComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexField), &PY_TYPE_DEF(ComplexField), module, "ComplexField", 0);
      }

      void t_ComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "class_", make_descriptor(ComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "wrapfn_", make_descriptor(t_ComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexField::initializeClass, 1)))
          return NULL;
        return t_ComplexField::wrap_Object(ComplexField(((t_ComplexField *) arg)->object.this$));
      }
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ComplexField_getInstance(PyTypeObject *type)
      {
        ComplexField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexField::getInstance());
        return t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getOne(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexField_getZero(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data)
      {
        ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractPropagator::class$ = NULL;
      jmethodID *PythonAbstractPropagator::mids$ = NULL;
      bool PythonAbstractPropagator::live$ = false;

      jclass PythonAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractPropagator::PythonAbstractPropagator() : ::org::orekit::propagation::AbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self);
      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonAbstractPropagator, t_PythonAbstractPropagator, PythonAbstractPropagator);

      void t_PythonAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractPropagator), &PY_TYPE_DEF(PythonAbstractPropagator), module, "PythonAbstractPropagator", 1);
      }

      void t_PythonAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "class_", make_descriptor(PythonAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "wrapfn_", make_descriptor(t_PythonAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractPropagator::wrap_Object(PythonAbstractPropagator(((t_PythonAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractPropagator object((jobject) NULL);

        INT_CALL(object = PythonAbstractPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data)
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
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixFormat::class$ = NULL;
      jmethodID *RealMatrixFormat::mids$ = NULL;
      bool RealMatrixFormat::live$ = false;

      jclass RealMatrixFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0ed06339391372ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_2538090b505fb359] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_9b0089f0864a6e3c] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;)Ljava/lang/String;");
          mids$[mid_format_30eab4431b0ccc57] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getColumnSeparator_0090f7797e403f43] = env->getMethodID(cls, "getColumnSeparator", "()Ljava/lang/String;");
          mids$[mid_getFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_0090f7797e403f43] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealMatrixFormat_781980547e5b377f] = env->getStaticMethodID(cls, "getRealMatrixFormat", "()Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRealMatrixFormat_5cf1d305e0489d9f] = env->getStaticMethodID(cls, "getRealMatrixFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRowPrefix_0090f7797e403f43] = env->getMethodID(cls, "getRowPrefix", "()Ljava/lang/String;");
          mids$[mid_getRowSeparator_0090f7797e403f43] = env->getMethodID(cls, "getRowSeparator", "()Ljava/lang/String;");
          mids$[mid_getRowSuffix_0090f7797e403f43] = env->getMethodID(cls, "getRowSuffix", "()Ljava/lang/String;");
          mids$[mid_getSuffix_0090f7797e403f43] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_9e86325e5f106865] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_parse_26cc2d1eb4cf3e9c] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrixFormat::RealMatrixFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ed06339391372ae, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::text::NumberFormat & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2538090b505fb359, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::java::lang::String RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_9b0089f0864a6e3c], a0.this$));
      }

      ::java::lang::StringBuffer RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_30eab4431b0ccc57], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealMatrixFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      ::java::lang::String RealMatrixFormat::getColumnSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getColumnSeparator_0090f7797e403f43]));
      }

      ::java::text::NumberFormat RealMatrixFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_d34e2e8dd35583a0]));
      }

      ::java::lang::String RealMatrixFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_0090f7797e403f43]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_781980547e5b377f]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_5cf1d305e0489d9f], a0.this$));
      }

      ::java::lang::String RealMatrixFormat::getRowPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowPrefix_0090f7797e403f43]));
      }

      ::java::lang::String RealMatrixFormat::getRowSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSeparator_0090f7797e403f43]));
      }

      ::java::lang::String RealMatrixFormat::getRowSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSuffix_0090f7797e403f43]));
      }

      ::java::lang::String RealMatrixFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_0090f7797e403f43]));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_9e86325e5f106865], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_26cc2d1eb4cf3e9c], a0.this$, a1.this$));
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
      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data);
      static PyGetSetDef t_RealMatrixFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrixFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealMatrixFormat, columnSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, prefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, realMatrixFormat),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowPrefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSuffix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrixFormat__methods_[] = {
        DECLARE_METHOD(t_RealMatrixFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getColumnSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRealMatrixFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixFormat)[] = {
        { Py_tp_methods, t_RealMatrixFormat__methods_ },
        { Py_tp_init, (void *) t_RealMatrixFormat_init_ },
        { Py_tp_getset, t_RealMatrixFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixFormat, t_RealMatrixFormat, RealMatrixFormat);

      void t_RealMatrixFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixFormat), &PY_TYPE_DEF(RealMatrixFormat), module, "RealMatrixFormat", 0);
      }

      void t_RealMatrixFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "class_", make_descriptor(RealMatrixFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "wrapfn_", make_descriptor(t_RealMatrixFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixFormat::initializeClass, 1)))
          return NULL;
        return t_RealMatrixFormat::wrap_Object(RealMatrixFormat(((t_RealMatrixFormat *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat object((jobject) NULL);

            INT_CALL(object = RealMatrixFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealMatrixFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            ::java::text::NumberFormat a6((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getColumnSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat());
            return t_RealMatrixFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealMatrixFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat(a0));
              return t_RealMatrixFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealMatrixFormat", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getColumnSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data)
      {
        RealMatrixFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealMatrixFormat());
        return t_RealMatrixFormat::wrap_Object(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSuffix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
