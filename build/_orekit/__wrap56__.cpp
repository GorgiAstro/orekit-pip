#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView$DefiningConeType::class$ = NULL;
        jmethodID *PolygonalFieldOfView$DefiningConeType::mids$ = NULL;
        bool PolygonalFieldOfView$DefiningConeType::live$ = false;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = NULL;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = NULL;

        jclass PolygonalFieldOfView$DefiningConeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_1e6b864dc48b987d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_values_a0f61bfb90a5f891] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_verticesRadius_988810e80d644418] = env->getMethodID(cls, "verticesRadius", "(DI)D");
            mids$[mid_createVertex_763682734669ebe3] = env->getMethodID(cls, "createVertex", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DI)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView$DefiningConeType PolygonalFieldOfView$DefiningConeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PolygonalFieldOfView$DefiningConeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1e6b864dc48b987d], a0.this$));
        }

        JArray< PolygonalFieldOfView$DefiningConeType > PolygonalFieldOfView$DefiningConeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PolygonalFieldOfView$DefiningConeType >(env->callStaticObjectMethod(cls, mids$[mid_values_a0f61bfb90a5f891]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView$DefiningConeType__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView$DefiningConeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView$DefiningConeType__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView$DefiningConeType)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView$DefiningConeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PolygonalFieldOfView$DefiningConeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView$DefiningConeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView$DefiningConeType, t_PolygonalFieldOfView$DefiningConeType, PolygonalFieldOfView$DefiningConeType);
        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_Object(const PolygonalFieldOfView$DefiningConeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PolygonalFieldOfView$DefiningConeType::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView$DefiningConeType), &PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType), module, "PolygonalFieldOfView$DefiningConeType", 0);
        }

        void t_PolygonalFieldOfView$DefiningConeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "class_", make_descriptor(PolygonalFieldOfView$DefiningConeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "wrapfn_", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(PolygonalFieldOfView$DefiningConeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES)));
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(PolygonalFieldOfView$DefiningConeType(((t_PolygonalFieldOfView$DefiningConeType *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PolygonalFieldOfView$DefiningConeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::valueOf(a0));
            return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type)
        {
          JArray< PolygonalFieldOfView$DefiningConeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::values());
          return JArray<jobject>(result.this$).wrap(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject);
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonFieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonFieldODEIntegratorBuilder::mids$ = NULL;
        bool PythonFieldODEIntegratorBuilder::live$ = false;

        jclass PythonFieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_d2b5a7210d9a6d44] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldODEIntegratorBuilder::PythonFieldODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self);
        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonFieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, self),
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonFieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonFieldODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonFieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldODEIntegratorBuilder, t_PythonFieldODEIntegratorBuilder, PythonFieldODEIntegratorBuilder);
        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_Object(const PythonFieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldODEIntegratorBuilder), &PY_TYPE_DEF(PythonFieldODEIntegratorBuilder), module, "PythonFieldODEIntegratorBuilder", 1);
        }

        void t_PythonFieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "class_", make_descriptor(PythonFieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonFieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator0 },
            { "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldODEIntegratorBuilder_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonFieldODEIntegratorBuilder::wrap_Object(PythonFieldODEIntegratorBuilder(((t_PythonFieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonFieldODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data)
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
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_signedAmplitude_4222abdadde032f5] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
            mids$[mid_signedAmplitude_6c8e6cd5d59063ae] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAccelerationModel::PythonAccelerationModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAccelerationModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAccelerationModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAccelerationModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldRuleFactory::class$ = NULL;
          jmethodID *FieldRuleFactory::mids$ = NULL;
          bool FieldRuleFactory::live$ = false;

          jclass FieldRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_c07c8b9364272960] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair FieldRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_c07c8b9364272960], a0));
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
          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args);
          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data);
          static PyGetSetDef t_FieldRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRuleFactory)[] = {
            { Py_tp_methods, t_FieldRuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRuleFactory, t_FieldRuleFactory, FieldRuleFactory);
          PyObject *t_FieldRuleFactory::wrap_Object(const FieldRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRuleFactory), &PY_TYPE_DEF(FieldRuleFactory), module, "FieldRuleFactory", 0);
          }

          void t_FieldRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "class_", make_descriptor(FieldRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "wrapfn_", make_descriptor(t_FieldRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldRuleFactory::wrap_Object(FieldRuleFactory(((t_FieldRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManBasis::class$ = NULL;
              jmethodID *ManBasis::mids$ = NULL;
              bool ManBasis::live$ = false;
              ManBasis *ManBasis::ANTICIPATED = NULL;
              ManBasis *ManBasis::CANDIDATE = NULL;
              ManBasis *ManBasis::DETERMINED_OD = NULL;
              ManBasis *ManBasis::DETERMINED_TLM = NULL;
              ManBasis *ManBasis::OTHER = NULL;
              ManBasis *ManBasis::PLANNED = NULL;
              ManBasis *ManBasis::SIMULATED = NULL;

              jclass ManBasis::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManBasis");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_73193b6b294235bb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_values_b8cf81ed4602ae73] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANTICIPATED = new ManBasis(env->getStaticObjectField(cls, "ANTICIPATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  CANDIDATE = new ManBasis(env->getStaticObjectField(cls, "CANDIDATE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_OD = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_TLM = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_TLM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  OTHER = new ManBasis(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  PLANNED = new ManBasis(env->getStaticObjectField(cls, "PLANNED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  SIMULATED = new ManBasis(env->getStaticObjectField(cls, "SIMULATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ManBasis ManBasis::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManBasis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_73193b6b294235bb], a0.this$));
              }

              JArray< ManBasis > ManBasis::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManBasis >(env->callStaticObjectMethod(cls, mids$[mid_values_b8cf81ed4602ae73]));
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
              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args);
              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManBasis_values(PyTypeObject *type);
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data);
              static PyGetSetDef t_ManBasis__fields_[] = {
                DECLARE_GET_FIELD(t_ManBasis, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManBasis__methods_[] = {
                DECLARE_METHOD(t_ManBasis, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManBasis, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManBasis)[] = {
                { Py_tp_methods, t_ManBasis__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManBasis__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManBasis)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManBasis, t_ManBasis, ManBasis);
              PyObject *t_ManBasis::wrap_Object(const ManBasis& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManBasis::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManBasis::install(PyObject *module)
              {
                installType(&PY_TYPE(ManBasis), &PY_TYPE_DEF(ManBasis), module, "ManBasis", 0);
              }

              void t_ManBasis::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "class_", make_descriptor(ManBasis::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "wrapfn_", make_descriptor(t_ManBasis::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManBasis::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "ANTICIPATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::ANTICIPATED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "CANDIDATE", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::CANDIDATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_OD", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_TLM", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_TLM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "OTHER", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "PLANNED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::PLANNED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "SIMULATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::SIMULATED)));
              }

              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManBasis::initializeClass, 1)))
                  return NULL;
                return t_ManBasis::wrap_Object(ManBasis(((t_ManBasis *) arg)->object.this$));
              }
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManBasis::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManBasis result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::valueOf(a0));
                  return t_ManBasis::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManBasis_values(PyTypeObject *type)
              {
                JArray< ManBasis > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::values());
                return JArray<jobject>(result.this$).wrap(t_ManBasis::wrap_jobject);
              }
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data)
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
          mids$[mid_value_62d646651711e99a] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_62d646651711e99a], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticJ2ClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticJ2ClockModifier::mids$ = NULL;
          bool AbstractRelativisticJ2ClockModifier::live$ = false;

          jclass AbstractRelativisticJ2ClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_relativisticJ2Correction_d9ef56512f9ba161] = env->getMethodID(cls, "relativisticJ2Correction", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticJ2ClockModifier::AbstractRelativisticJ2ClockModifier(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}
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
          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticJ2ClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticJ2ClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticJ2ClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticJ2ClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticJ2ClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticJ2ClockModifier, t_AbstractRelativisticJ2ClockModifier, AbstractRelativisticJ2ClockModifier);

          void t_AbstractRelativisticJ2ClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticJ2ClockModifier), &PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier), module, "AbstractRelativisticJ2ClockModifier", 0);
          }

          void t_AbstractRelativisticJ2ClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "class_", make_descriptor(AbstractRelativisticJ2ClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticJ2ClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticJ2ClockModifier::wrap_Object(AbstractRelativisticJ2ClockModifier(((t_AbstractRelativisticJ2ClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            AbstractRelativisticJ2ClockModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = AbstractRelativisticJ2ClockModifier(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00$FieldOutput::class$ = NULL;
          jmethodID *NRLMSISE00$FieldOutput::mids$ = NULL;
          bool NRLMSISE00$FieldOutput::live$ = false;

          jclass NRLMSISE00$FieldOutput::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_dfcf702144fd7bc1] = env->getMethodID(cls, "getDensity", "(I)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00$FieldOutput::getDensity(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_dfcf702144fd7bc1], a0));
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
          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args);
          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data);
          static PyGetSetDef t_NRLMSISE00$FieldOutput__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00$FieldOutput, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00$FieldOutput__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, of_, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, getDensity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00$FieldOutput)[] = {
            { Py_tp_methods, t_NRLMSISE00$FieldOutput__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00$FieldOutput__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00$FieldOutput)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00$FieldOutput, t_NRLMSISE00$FieldOutput, NRLMSISE00$FieldOutput);
          PyObject *t_NRLMSISE00$FieldOutput::wrap_Object(const NRLMSISE00$FieldOutput& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NRLMSISE00$FieldOutput::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NRLMSISE00$FieldOutput::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00$FieldOutput), &PY_TYPE_DEF(NRLMSISE00$FieldOutput), module, "NRLMSISE00$FieldOutput", 0);
          }

          void t_NRLMSISE00$FieldOutput::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "class_", make_descriptor(NRLMSISE00$FieldOutput::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "wrapfn_", make_descriptor(t_NRLMSISE00$FieldOutput::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00$FieldOutput::wrap_Object(NRLMSISE00$FieldOutput(((t_NRLMSISE00$FieldOutput *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getDensity(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", arg);
            return NULL;
          }
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUpFactory::class$ = NULL;
          jmethodID *InterSatellitesWindUpFactory::mids$ = NULL;
          bool InterSatellitesWindUpFactory::live$ = false;

          jclass InterSatellitesWindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_f08e6c07199500fb] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesWindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesWindUpFactory::InterSatellitesWindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp InterSatellitesWindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::estimation::measurements::gnss::Dipole & a5) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_f08e6c07199500fb], a0.this$, a1, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args);

          static PyMethodDef t_InterSatellitesWindUpFactory__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUpFactory)[] = {
            { Py_tp_methods, t_InterSatellitesWindUpFactory__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesWindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUpFactory, t_InterSatellitesWindUpFactory, InterSatellitesWindUpFactory);

          void t_InterSatellitesWindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUpFactory), &PY_TYPE_DEF(InterSatellitesWindUpFactory), module, "InterSatellitesWindUpFactory", 0);
          }

          void t_InterSatellitesWindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "class_", make_descriptor(InterSatellitesWindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "wrapfn_", make_descriptor(t_InterSatellitesWindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUpFactory::wrap_Object(InterSatellitesWindUpFactory(((t_InterSatellitesWindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            InterSatellitesWindUpFactory object((jobject) NULL);

            INT_CALL(object = InterSatellitesWindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            jint a4;
            ::org::orekit::estimation::measurements::gnss::Dipole a5((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp result((jobject) NULL);

            if (!parseArgs(args, "KIkKIk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesWindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonAbstractRadiationForceModel::class$ = NULL;
        jmethodID *PythonAbstractRadiationForceModel::mids$ = NULL;
        bool PythonAbstractRadiationForceModel::live$ = false;

        jclass PythonAbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonAbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_91e2420e47e6f11a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractRadiationForceModel::PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_91e2420e47e6f11a, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::java::util::List PythonAbstractRadiationForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void PythonAbstractRadiationForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractRadiationForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractRadiationForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractRadiationForceModel, t_PythonAbstractRadiationForceModel, PythonAbstractRadiationForceModel);

        void t_PythonAbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractRadiationForceModel), &PY_TYPE_DEF(PythonAbstractRadiationForceModel), module, "PythonAbstractRadiationForceModel", 0);
        }

        void t_PythonAbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "class_", make_descriptor(PythonAbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "wrapfn_", make_descriptor(t_PythonAbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractRadiationForceModel::wrap_Object(PythonAbstractRadiationForceModel(((t_PythonAbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          PythonAbstractRadiationForceModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PythonAbstractRadiationForceModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args)
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

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data)
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
#include "org/orekit/forces/SlewingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_9367a0f01d04690a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDD)V");
          mids$[mid_getNormal_ee088fe02cdd6745] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_38283c57554889c0] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SlewingPanel::SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_9367a0f01d04690a, a0.this$, a1, a2.this$, a3.this$, a4, a5, a6, a7, a8)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SlewingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_ee088fe02cdd6745], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SlewingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_38283c57554889c0], a0.this$));
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzerSelector::class$ = NULL;
            jmethodID *LexicalAnalyzerSelector::mids$ = NULL;
            bool LexicalAnalyzerSelector::live$ = false;

            jclass LexicalAnalyzerSelector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_select_6986ede958a90fcd] = env->getStaticMethodID(cls, "select", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/utils/lexical/LexicalAnalyzer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer LexicalAnalyzerSelector::select(const ::org::orekit::data::DataSource & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer(env->callStaticObjectMethod(cls, mids$[mid_select_6986ede958a90fcd], a0.this$));
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
            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzerSelector__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzerSelector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, select, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzerSelector)[] = {
              { Py_tp_methods, t_LexicalAnalyzerSelector__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzerSelector)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzerSelector, t_LexicalAnalyzerSelector, LexicalAnalyzerSelector);

            void t_LexicalAnalyzerSelector::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzerSelector), &PY_TYPE_DEF(LexicalAnalyzerSelector), module, "LexicalAnalyzerSelector", 0);
            }

            void t_LexicalAnalyzerSelector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "class_", make_descriptor(LexicalAnalyzerSelector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "wrapfn_", make_descriptor(t_LexicalAnalyzerSelector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzerSelector::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzerSelector::wrap_Object(LexicalAnalyzerSelector(((t_LexicalAnalyzerSelector *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzerSelector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzerSelector::select(a0));
                return ::org::orekit::files::ccsds::utils::lexical::t_LexicalAnalyzer::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "select", arg);
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
#include "java/io/StringWriter.h"
#include "java/lang/StringBuffer.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "java/io/StringWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringWriter::class$ = NULL;
    jmethodID *StringWriter::mids$ = NULL;
    bool StringWriter::live$ = false;

    jclass StringWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_append_ced84d40a330cb87] = env->getMethodID(cls, "append", "(C)Ljava/io/StringWriter;");
        mids$[mid_append_711d0d8909e52768] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
        mids$[mid_append_fc72a286a05709d6] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_getBuffer_eb1ec7cf84c46af7] = env->getMethodID(cls, "getBuffer", "()Ljava/lang/StringBuffer;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_write_105e1eadb709d9ac] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_6f10578448832e2a] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_c9a77c84756b106b] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringWriter::StringWriter() : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    StringWriter::StringWriter(jint a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    StringWriter StringWriter::append(jchar a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_ced84d40a330cb87], a0));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_711d0d8909e52768], a0.this$));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_fc72a286a05709d6], a0.this$, a1, a2));
    }

    void StringWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void StringWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    ::java::lang::StringBuffer StringWriter::getBuffer() const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_getBuffer_eb1ec7cf84c46af7]));
    }

    ::java::lang::String StringWriter::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void StringWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_105e1eadb709d9ac], a0.this$);
    }

    void StringWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void StringWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_6f10578448832e2a], a0.this$, a1, a2);
    }

    void StringWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_c9a77c84756b106b], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self);
    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data);
    static PyGetSetDef t_StringWriter__fields_[] = {
      DECLARE_GET_FIELD(t_StringWriter, buffer),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StringWriter__methods_[] = {
      DECLARE_METHOD(t_StringWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, getBuffer, METH_NOARGS),
      DECLARE_METHOD(t_StringWriter, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringWriter)[] = {
      { Py_tp_methods, t_StringWriter__methods_ },
      { Py_tp_init, (void *) t_StringWriter_init_ },
      { Py_tp_getset, t_StringWriter__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(StringWriter, t_StringWriter, StringWriter);

    void t_StringWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(StringWriter), &PY_TYPE_DEF(StringWriter), module, "StringWriter", 0);
    }

    void t_StringWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "class_", make_descriptor(StringWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "wrapfn_", make_descriptor(t_StringWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringWriter::initializeClass, 1)))
        return NULL;
      return t_StringWriter::wrap_Object(StringWriter(((t_StringWriter *) arg)->object.this$));
    }
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringWriter object((jobject) NULL);

          INT_CALL(object = StringWriter());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          StringWriter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringWriter(a0));
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

    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self)
    {
      ::java::lang::StringBuffer result((jobject) NULL);
      OBJ_CALL(result = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(result);
    }

    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data)
    {
      ::java::lang::StringBuffer value((jobject) NULL);
      OBJ_CALL(value = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(value);
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
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_54a886dab86dfc73] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegrator::ThreeEighthesIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > ThreeEighthesIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *BracketingNthOrderBrentSolver::mids$ = NULL;
        bool BracketingNthOrderBrentSolver::live$ = false;

        jclass BracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_init$_2894b57d568d7362] = env->getMethodID(cls, "<init>", "(DDDI)V");
            mids$[mid_getMaximalOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_solve_264b7d79e28fc408] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_56efbacf041dc493] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_1290cd17e7801197] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_fb0079f6db85289e] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jint a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jdouble a2, jint a3) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_2894b57d568d7362, a0, a1, a2, a3)) {}

        jint BracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_d6ab429752e7c267]);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_264b7d79e28fc408], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_56efbacf041dc493], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_1290cd17e7801197], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self);
        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_BracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_BracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_BracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_BracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketingNthOrderBrentSolver, t_BracketingNthOrderBrentSolver, BracketingNthOrderBrentSolver);
        PyObject *t_BracketingNthOrderBrentSolver::wrap_Object(const BracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketingNthOrderBrentSolver), &PY_TYPE_DEF(BracketingNthOrderBrentSolver), module, "BracketingNthOrderBrentSolver", 0);
        }

        void t_BracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "class_", make_descriptor(BracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_BracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_BracketingNthOrderBrentSolver::wrap_Object(BracketingNthOrderBrentSolver(((t_BracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketingNthOrderBrentSolver object((jobject) NULL);

              INT_CALL(object = BracketingNthOrderBrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2, a3));
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

        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args)
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

          return callSuper(PY_TYPE(BracketingNthOrderBrentSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args)
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
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiElliptic::class$ = NULL;
          jmethodID *FieldJacobiElliptic::mids$ = NULL;
          bool FieldJacobiElliptic::live$ = false;

          jclass FieldJacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_e3d0ff3c0584eadf] = env->getMethodID(cls, "arccd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccd_a3b854adede8eaaa] = env->getMethodID(cls, "arccd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_e3d0ff3c0584eadf] = env->getMethodID(cls, "arccn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_a3b854adede8eaaa] = env->getMethodID(cls, "arccn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_e3d0ff3c0584eadf] = env->getMethodID(cls, "arccs", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_a3b854adede8eaaa] = env->getMethodID(cls, "arccs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcdc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_a3b854adede8eaaa] = env->getMethodID(cls, "arcdc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcdn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_a3b854adede8eaaa] = env->getMethodID(cls, "arcdn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcds", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_a3b854adede8eaaa] = env->getMethodID(cls, "arcds", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcnc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_a3b854adede8eaaa] = env->getMethodID(cls, "arcnc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcnd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_a3b854adede8eaaa] = env->getMethodID(cls, "arcnd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcns", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_a3b854adede8eaaa] = env->getMethodID(cls, "arcns", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcsc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_a3b854adede8eaaa] = env->getMethodID(cls, "arcsc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcsd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_a3b854adede8eaaa] = env->getMethodID(cls, "arcsd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_e3d0ff3c0584eadf] = env->getMethodID(cls, "arcsn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_a3b854adede8eaaa] = env->getMethodID(cls, "arcsn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getM_08d37e3f77b7239d] = env->getMethodID(cls, "getM", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_valuesC_b7ce9fba56994ed4] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesC_2b42f4f538709bf3] = env->getMethodID(cls, "valuesC", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesD_f444413ca237faeb] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesD_1eaf79f5c38790f7] = env->getMethodID(cls, "valuesD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesN_dbaa4efdddec1b3d] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesN_893396a44a3905f5] = env->getMethodID(cls, "valuesN", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesS_be3a44280ba2f571] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");
              mids$[mid_valuesS_83aa5c5a677c95f6] = env->getMethodID(cls, "valuesS", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_e3d0ff3c0584eadf], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::getM() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM_08d37e3f77b7239d]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_b7ce9fba56994ed4], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_2b42f4f538709bf3], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_f444413ca237faeb], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_1eaf79f5c38790f7], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_dbaa4efdddec1b3d], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_893396a44a3905f5], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_be3a44280ba2f571], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_83aa5c5a677c95f6], a0.this$));
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
          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self);
          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data);
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data);
          static PyGetSetDef t_FieldJacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, m),
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccs, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcds, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcns, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesC, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesD, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesN, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiElliptic)[] = {
            { Py_tp_methods, t_FieldJacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldJacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiElliptic, t_FieldJacobiElliptic, FieldJacobiElliptic);
          PyObject *t_FieldJacobiElliptic::wrap_Object(const FieldJacobiElliptic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiElliptic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiElliptic), &PY_TYPE_DEF(FieldJacobiElliptic), module, "FieldJacobiElliptic", 0);
          }

          void t_FieldJacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "class_", make_descriptor(FieldJacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "wrapfn_", make_descriptor(t_FieldJacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiElliptic::wrap_Object(FieldJacobiElliptic(((t_FieldJacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getM());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", args);
            return NULL;
          }
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getM());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmParser::class$ = NULL;
            jmethodID *OdmParser::mids$ = NULL;
            bool OdmParser::live$ = false;

            jclass OdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSelectedMu_9981f74b2d109da6] = env->getMethodID(cls, "getSelectedMu", "()D");
                mids$[mid_setMuCreated_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_getMuSet_9981f74b2d109da6] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_setMuParsed_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate OdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_80e11148db499dda]));
            }

            jdouble OdmParser::getSelectedMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSelectedMu_9981f74b2d109da6]);
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
            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args);
            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self);
            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self);
            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data);
            static PyGetSetDef t_OdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_OdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_OdmParser, selectedMu),
              DECLARE_GET_FIELD(t_OdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmParser__methods_[] = {
              DECLARE_METHOD(t_OdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_OdmParser, getSelectedMu, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmParser)[] = {
              { Py_tp_methods, t_OdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(OdmParser, t_OdmParser, OdmParser);
            PyObject *t_OdmParser::wrap_Object(const OdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_OdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_OdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmParser), &PY_TYPE_DEF(OdmParser), module, "OdmParser", 0);
            }

            void t_OdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "class_", make_descriptor(OdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "wrapfn_", make_descriptor(t_OdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmParser::initializeClass, 1)))
                return NULL;
              return t_OdmParser::wrap_Object(OdmParser(((t_OdmParser *) arg)->object.this$));
            }
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) result);
            }
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateModifierUtil::class$ = NULL;
          jmethodID *RangeRateModifierUtil::mids$ = NULL;
          bool RangeRateModifierUtil::live$ = false;

          jclass RangeRateModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeRateModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeRateModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateModifierUtil)[] = {
            { Py_tp_methods, t_RangeRateModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeRateModifierUtil, t_RangeRateModifierUtil, RangeRateModifierUtil);

          void t_RangeRateModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateModifierUtil), &PY_TYPE_DEF(RangeRateModifierUtil), module, "RangeRateModifierUtil", 0);
          }

          void t_RangeRateModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "class_", make_descriptor(RangeRateModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "wrapfn_", make_descriptor(t_RangeRateModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeRateModifierUtil::wrap_Object(RangeRateModifierUtil(((t_RangeRateModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateModifierUtil::initializeClass, 0))
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation::live$ = false;
            ::java::lang::String *MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass MarshallSolarActivityFutureEstimation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7bbacdad8b0eb1d6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_ca908e3bd6515c6a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_3ed6ed4fd1891c42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_25914fdff8407a44] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_abdc0e22a4059f05] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_init$_0b03362c4f3de3ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_get24HoursKp_209f08246d708042] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_9b63d19c31941c0f] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_209f08246d708042] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_209f08246d708042] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getFileDate_f30b9f87adcfe94a] = env->getMethodID(cls, "getFileDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateComponents;");
                mids$[mid_getInstantFlux_209f08246d708042] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_209f08246d708042] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getStrengthLevel_04adabe90c843f39] = env->getMethodID(cls, "getStrengthLevel", "()Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_getThreeHourlyKP_209f08246d708042] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_7bbacdad8b0eb1d6, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_ca908e3bd6515c6a, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_3ed6ed4fd1891c42, a0.this$, a1.this$, a2.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_25914fdff8407a44, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_abdc0e22a4059f05, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_0b03362c4f3de3ae, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            jdouble MarshallSolarActivityFutureEstimation::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_209f08246d708042], a0.this$);
            }

            JArray< jdouble > MarshallSolarActivityFutureEstimation::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_9b63d19c31941c0f], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_209f08246d708042], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_209f08246d708042], a0.this$);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimation::getFileDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_f30b9f87adcfe94a], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_209f08246d708042], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_209f08246d708042], a0.this$);
            }

            ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation::getStrengthLevel() const
            {
              return ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel(env->callObjectMethod(this$, mids$[mid_getStrengthLevel_04adabe90c843f39]));
            }

            jdouble MarshallSolarActivityFutureEstimation::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_209f08246d708042], a0.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, strengthLevel),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getFileDate, METH_O),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getStrengthLevel, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimation_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation, t_MarshallSolarActivityFutureEstimation, MarshallSolarActivityFutureEstimation);
            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_Object(const MarshallSolarActivityFutureEstimation& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation), module, "MarshallSolarActivityFutureEstimation", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "StrengthLevel", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel)));
            }

            void t_MarshallSolarActivityFutureEstimation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "class_", make_descriptor(MarshallSolarActivityFutureEstimation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation::wrap_Object(MarshallSolarActivityFutureEstimation(((t_MarshallSolarActivityFutureEstimation *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sK", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kK", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 8:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6, a7));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
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

            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::DateComponents result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFileDate(a0));
                return ::org::orekit::time::t_DateComponents::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFileDate", arg);
              return NULL;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);
              OBJ_CALL(result = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel value((jobject) NULL);
              OBJ_CALL(value = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *ComplexUnivariateIntegrator::mids$ = NULL;
      bool ComplexUnivariateIntegrator::live$ = false;

      jclass ComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a94eda72b38ebde] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;)V");
          mids$[mid_integrate_5e919239e72a0b0d] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_integrate_1f28a978a4700a99] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexUnivariateIntegrator::ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a94eda72b38ebde, a0.this$)) {}

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_5e919239e72a0b0d], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_1f28a978a4700a99], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args);

      static PyMethodDef t_ComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_ComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_ComplexUnivariateIntegrator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUnivariateIntegrator, t_ComplexUnivariateIntegrator, ComplexUnivariateIntegrator);

      void t_ComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUnivariateIntegrator), &PY_TYPE_DEF(ComplexUnivariateIntegrator), module, "ComplexUnivariateIntegrator", 0);
      }

      void t_ComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "class_", make_descriptor(ComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_ComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_ComplexUnivariateIntegrator::wrap_Object(ComplexUnivariateIntegrator(((t_ComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
        ComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0))
        {
          INT_CALL(object = ComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKk[k", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            ::org::hipparchus::complex::Complex a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKkk", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateIonosphericDelayModifier::BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          void BistaticRangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void BistaticRangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateIonosphericDelayModifier, t_BistaticRangeRateIonosphericDelayModifier, BistaticRangeRateIonosphericDelayModifier);

          void t_BistaticRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateIonosphericDelayModifier), module, "BistaticRangeRateIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateIonosphericDelayModifier::wrap_Object(BistaticRangeRateIonosphericDelayModifier(((t_BistaticRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeRateIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_copy_fe1447429c89969b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_9981f74b2d109da6] = env->getMethodID(cls, "evaluate", "()D");
            mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getData_be783177b060994b] = env->getMethodID(cls, "getData", "()[D");
            mids$[mid_setData_a71c45509eaf92d1] = env->getMethodID(cls, "setData", "([D)V");
            mids$[mid_setData_40b495c766d36227] = env->getMethodID(cls, "setData", "([DII)V");
            mids$[mid_getDataRef_be783177b060994b] = env->getMethodID(cls, "getDataRef", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::descriptive::UnivariateStatistic AbstractUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_fe1447429c89969b]));
        }

        jdouble AbstractUnivariateStatistic::evaluate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_9981f74b2d109da6]);
        }

        jdouble AbstractUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
        }

        JArray< jdouble > AbstractUnivariateStatistic::getData() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getData_be783177b060994b]));
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_a71c45509eaf92d1], a0.this$);
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_40b495c766d36227], a0.this$, a1, a2);
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
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessageType::class$ = NULL;
          jmethodID *RtcmMessageType::mids$ = NULL;
          bool RtcmMessageType::live$ = false;
          RtcmMessageType *RtcmMessageType::RTCM_1019 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1020 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1042 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1044 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1045 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1057 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1058 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1060 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1063 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1064 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1066 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1240 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1241 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1243 = NULL;

          jclass RtcmMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_d150c80d98169821] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_valueOf_d150c80d98169821] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_values_8d269c4aeab07175] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              RTCM_1019 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1019", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1020 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1020", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1042 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1042", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1044 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1044", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1045 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1045", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1057 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1057", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1058 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1058", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1060 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1060", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1063 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1063", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1064 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1064", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1066 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1066", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1240 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1240", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1241 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1241", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1243 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1243", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessageType RtcmMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_d150c80d98169821], a0.this$));
          }

          RtcmMessageType RtcmMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d150c80d98169821], a0.this$));
          }

          JArray< RtcmMessageType > RtcmMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_8d269c4aeab07175]));
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
        namespace parser {
          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args);
          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmMessageType_values(PyTypeObject *type);
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data);
          static PyGetSetDef t_RtcmMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmMessageType__methods_[] = {
            DECLARE_METHOD(t_RtcmMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessageType)[] = {
            { Py_tp_methods, t_RtcmMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmMessageType, t_RtcmMessageType, RtcmMessageType);
          PyObject *t_RtcmMessageType::wrap_Object(const RtcmMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessageType), &PY_TYPE_DEF(RtcmMessageType), module, "RtcmMessageType", 0);
          }

          void t_RtcmMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "class_", make_descriptor(RtcmMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "wrapfn_", make_descriptor(t_RtcmMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1019", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1020", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1042", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1042)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1044", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1044)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1045", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1045)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1057", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1057)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1058", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1058)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1060", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1060)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1063", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1063)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1064", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1064)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1066", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1066)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1240", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1240)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1241", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1241)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1243", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1243)));
          }

          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessageType::initializeClass, 1)))
              return NULL;
            return t_RtcmMessageType::wrap_Object(RtcmMessageType(((t_RtcmMessageType *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::getMessageType(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::valueOf(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmMessageType_values(PyTypeObject *type)
          {
            JArray< RtcmMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmMessageType::wrap_jobject);
          }
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data)
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
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$OrderDirection::class$ = NULL;
      jmethodID *MathArrays$OrderDirection::mids$ = NULL;
      bool MathArrays$OrderDirection::live$ = false;
      MathArrays$OrderDirection *MathArrays$OrderDirection::DECREASING = NULL;
      MathArrays$OrderDirection *MathArrays$OrderDirection::INCREASING = NULL;

      jclass MathArrays$OrderDirection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$OrderDirection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_769af153f9265ccf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$OrderDirection;");
          mids$[mid_values_f6897388ac03eb73] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$OrderDirection;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DECREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "DECREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          INCREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "INCREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$OrderDirection MathArrays$OrderDirection::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$OrderDirection(env->callStaticObjectMethod(cls, mids$[mid_valueOf_769af153f9265ccf], a0.this$));
      }

      JArray< MathArrays$OrderDirection > MathArrays$OrderDirection::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$OrderDirection >(env->callStaticObjectMethod(cls, mids$[mid_values_f6897388ac03eb73]));
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
      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type);
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data);
      static PyGetSetDef t_MathArrays$OrderDirection__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$OrderDirection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$OrderDirection__methods_[] = {
        DECLARE_METHOD(t_MathArrays$OrderDirection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$OrderDirection)[] = {
        { Py_tp_methods, t_MathArrays$OrderDirection__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$OrderDirection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$OrderDirection)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$OrderDirection, t_MathArrays$OrderDirection, MathArrays$OrderDirection);
      PyObject *t_MathArrays$OrderDirection::wrap_Object(const MathArrays$OrderDirection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$OrderDirection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$OrderDirection::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$OrderDirection), &PY_TYPE_DEF(MathArrays$OrderDirection), module, "MathArrays$OrderDirection", 0);
      }

      void t_MathArrays$OrderDirection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "class_", make_descriptor(MathArrays$OrderDirection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "wrapfn_", make_descriptor(t_MathArrays$OrderDirection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$OrderDirection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "DECREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::DECREASING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "INCREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::INCREASING)));
      }

      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$OrderDirection::initializeClass, 1)))
          return NULL;
        return t_MathArrays$OrderDirection::wrap_Object(MathArrays$OrderDirection(((t_MathArrays$OrderDirection *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$OrderDirection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$OrderDirection result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::valueOf(a0));
          return t_MathArrays$OrderDirection::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type)
      {
        JArray< MathArrays$OrderDirection > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$OrderDirection::wrap_jobject);
      }
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *PythonAbstractSelfFeedingLoader::mids$ = NULL;
      bool PythonAbstractSelfFeedingLoader::live$ = false;

      jclass PythonAbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractSelfFeedingLoader::PythonAbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PythonAbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_PythonAbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(PythonAbstractSelfFeedingLoader, t_PythonAbstractSelfFeedingLoader, PythonAbstractSelfFeedingLoader);

      void t_PythonAbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractSelfFeedingLoader), &PY_TYPE_DEF(PythonAbstractSelfFeedingLoader), module, "PythonAbstractSelfFeedingLoader", 0);
      }

      void t_PythonAbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "class_", make_descriptor(PythonAbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_PythonAbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractSelfFeedingLoader::wrap_Object(PythonAbstractSelfFeedingLoader(((t_PythonAbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        PythonAbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonAbstractSelfFeedingLoader(a0, a1));
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
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *EllipsoidId::class$ = NULL;
        jmethodID *EllipsoidId::mids$ = NULL;
        bool EllipsoidId::live$ = false;
        EllipsoidId *EllipsoidId::GRS80 = NULL;
        EllipsoidId *EllipsoidId::IERS2003 = NULL;
        EllipsoidId *EllipsoidId::IERS96 = NULL;
        EllipsoidId *EllipsoidId::WGS84 = NULL;

        jclass EllipsoidId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/EllipsoidId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_c28be5edaa652817] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/EllipsoidId;");
            mids$[mid_values_ea16544cccf235fa] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/EllipsoidId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GRS80 = new EllipsoidId(env->getStaticObjectField(cls, "GRS80", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS2003 = new EllipsoidId(env->getStaticObjectField(cls, "IERS2003", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS96 = new EllipsoidId(env->getStaticObjectField(cls, "IERS96", "Lorg/orekit/rugged/api/EllipsoidId;"));
            WGS84 = new EllipsoidId(env->getStaticObjectField(cls, "WGS84", "Lorg/orekit/rugged/api/EllipsoidId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipsoidId EllipsoidId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EllipsoidId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c28be5edaa652817], a0.this$));
        }

        JArray< EllipsoidId > EllipsoidId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EllipsoidId >(env->callStaticObjectMethod(cls, mids$[mid_values_ea16544cccf235fa]));
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
        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args);
        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EllipsoidId_values(PyTypeObject *type);
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data);
        static PyGetSetDef t_EllipsoidId__fields_[] = {
          DECLARE_GET_FIELD(t_EllipsoidId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipsoidId__methods_[] = {
          DECLARE_METHOD(t_EllipsoidId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, of_, METH_VARARGS),
          DECLARE_METHOD(t_EllipsoidId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipsoidId)[] = {
          { Py_tp_methods, t_EllipsoidId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EllipsoidId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipsoidId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EllipsoidId, t_EllipsoidId, EllipsoidId);
        PyObject *t_EllipsoidId::wrap_Object(const EllipsoidId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EllipsoidId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EllipsoidId::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipsoidId), &PY_TYPE_DEF(EllipsoidId), module, "EllipsoidId", 0);
        }

        void t_EllipsoidId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "class_", make_descriptor(EllipsoidId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "wrapfn_", make_descriptor(t_EllipsoidId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "boxfn_", make_descriptor(boxObject));
          env->getClass(EllipsoidId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "GRS80", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::GRS80)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS2003", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS2003)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS96", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS96)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "WGS84", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::WGS84)));
        }

        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipsoidId::initializeClass, 1)))
            return NULL;
          return t_EllipsoidId::wrap_Object(EllipsoidId(((t_EllipsoidId *) arg)->object.this$));
        }
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipsoidId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EllipsoidId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::valueOf(a0));
            return t_EllipsoidId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EllipsoidId_values(PyTypeObject *type)
        {
          JArray< EllipsoidId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::values());
          return JArray<jobject>(result.this$).wrap(t_EllipsoidId::wrap_jobject);
        }
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Meteo::class$ = NULL;
        jmethodID *CRD$Meteo::mids$ = NULL;
        bool CRD$Meteo::live$ = false;

        jclass CRD$Meteo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Meteo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a422fab7ffe774b8] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
            mids$[mid_getData_d751c1a57012b438] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
            mids$[mid_getMeteo_2bb7a0ceebe4cc7e] = env->getMethodID(cls, "getMeteo", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Meteo::CRD$Meteo(const ::java::util::SortedSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a422fab7ffe774b8, a0.this$)) {}

        ::java::util::List CRD$Meteo::getData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_d751c1a57012b438]));
        }

        ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement CRD$Meteo::getMeteo(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement(env->callObjectMethod(this$, mids$[mid_getMeteo_2bb7a0ceebe4cc7e], a0.this$));
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
        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self);
        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg);
        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data);
        static PyGetSetDef t_CRD$Meteo__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Meteo, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Meteo__methods_[] = {
          DECLARE_METHOD(t_CRD$Meteo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, getData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Meteo, getMeteo, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Meteo)[] = {
          { Py_tp_methods, t_CRD$Meteo__methods_ },
          { Py_tp_init, (void *) t_CRD$Meteo_init_ },
          { Py_tp_getset, t_CRD$Meteo__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Meteo)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Meteo, t_CRD$Meteo, CRD$Meteo);

        void t_CRD$Meteo::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Meteo), &PY_TYPE_DEF(CRD$Meteo), module, "CRD$Meteo", 0);
        }

        void t_CRD$Meteo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "class_", make_descriptor(CRD$Meteo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "wrapfn_", make_descriptor(t_CRD$Meteo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Meteo::initializeClass, 1)))
            return NULL;
          return t_CRD$Meteo::wrap_Object(CRD$Meteo(((t_CRD$Meteo *) arg)->object.this$));
        }
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Meteo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          CRD$Meteo object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = CRD$Meteo(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$MeteorologicalMeasurement));
        }

        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getMeteo(a0));
            return ::org::orekit::files::ilrs::t_CRD$MeteorologicalMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteo", arg);
          return NULL;
        }

        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemData::class$ = NULL;
              jmethodID *OemData::mids$ = NULL;
              bool OemData::live$ = false;

              jclass OemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCovarianceMatrix_2060160f377cd67c] = env->getMethodID(cls, "addCovarianceMatrix", "(Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                  mids$[mid_addData_a72d7f163f4d4acf] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Z)Z");
                  mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_d751c1a57012b438] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getEphemeridesDataLines_d751c1a57012b438] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemData::OemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              void OemData::addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCovarianceMatrix_2060160f377cd67c], a0.this$);
              }

              jboolean OemData::addData(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, jboolean a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_a72d7f163f4d4acf], a0.this$, a1);
              }

              ::org::orekit::utils::CartesianDerivativesFilter OemData::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
              }

              ::java::util::List OemData::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
              }

              ::java::util::List OemData::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_d751c1a57012b438]));
              }

              ::java::util::List OemData::getEphemeridesDataLines() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_d751c1a57012b438]));
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
              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg);
              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args);
              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self);
              static PyObject *t_OemData_getCoordinates(t_OemData *self);
              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self);
              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self);
              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data);
              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data);
              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data);
              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data);
              static PyGetSetDef t_OemData__fields_[] = {
                DECLARE_GET_FIELD(t_OemData, availableDerivatives),
                DECLARE_GET_FIELD(t_OemData, coordinates),
                DECLARE_GET_FIELD(t_OemData, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemData, ephemeridesDataLines),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemData__methods_[] = {
                DECLARE_METHOD(t_OemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, addCovarianceMatrix, METH_O),
                DECLARE_METHOD(t_OemData, addData, METH_VARARGS),
                DECLARE_METHOD(t_OemData, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getEphemeridesDataLines, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemData)[] = {
                { Py_tp_methods, t_OemData__methods_ },
                { Py_tp_init, (void *) t_OemData_init_ },
                { Py_tp_getset, t_OemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OemData, t_OemData, OemData);

              void t_OemData::install(PyObject *module)
              {
                installType(&PY_TYPE(OemData), &PY_TYPE_DEF(OemData), module, "OemData", 0);
              }

              void t_OemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "class_", make_descriptor(OemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "wrapfn_", make_descriptor(t_OemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemData::initializeClass, 1)))
                  return NULL;
                return t_OemData::wrap_Object(OemData(((t_OemData *) arg)->object.this$));
              }
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds)
              {
                OemData object((jobject) NULL);

                INT_CALL(object = OemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCovarianceMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCovarianceMatrix", arg);
                return NULL;
              }

              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                jboolean a1;
                jboolean result;

                if (!parseArgs(args, "kZ", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.addData(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", args);
                return NULL;
              }

              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemData_getCoordinates(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemeridesDataLines());
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
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldStepHandlerMultiplexer::class$ = NULL;
        jmethodID *FieldStepHandlerMultiplexer::mids$ = NULL;
        bool FieldStepHandlerMultiplexer::live$ = false;

        jclass FieldStepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldStepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_a9c3be9ee399328f] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
            mids$[mid_add_b6d4e0fa68ea09a5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getHandlers_d751c1a57012b438] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_33c76379cdb8499a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_remove_bf3e2612211a7ec7] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_remove_a9c3be9ee399328f] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepHandlerMultiplexer::FieldStepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void FieldStepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_a9c3be9ee399328f], a0.this$);
        }

        void FieldStepHandlerMultiplexer::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_b6d4e0fa68ea09a5], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        void FieldStepHandlerMultiplexer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8062511934471166], a0.this$);
        }

        ::java::util::List FieldStepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_d751c1a57012b438]));
        }

        void FieldStepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_33c76379cdb8499a], a0.this$);
        }

        void FieldStepHandlerMultiplexer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_bf3e2612211a7ec7], a0.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_a9c3be9ee399328f], a0.this$);
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
        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_FieldStepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, handlers),
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_FieldStepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_FieldStepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_FieldStepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepHandlerMultiplexer, t_FieldStepHandlerMultiplexer, FieldStepHandlerMultiplexer);
        PyObject *t_FieldStepHandlerMultiplexer::wrap_Object(const FieldStepHandlerMultiplexer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepHandlerMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepHandlerMultiplexer), &PY_TYPE_DEF(FieldStepHandlerMultiplexer), module, "FieldStepHandlerMultiplexer", 0);
        }

        void t_FieldStepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "class_", make_descriptor(FieldStepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "wrapfn_", make_descriptor(t_FieldStepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_FieldStepHandlerMultiplexer::wrap_Object(FieldStepHandlerMultiplexer(((t_FieldStepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          FieldStepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = FieldStepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockPhaseModifier::RelativisticJ2ClockPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockPhaseModifier, t_RelativisticJ2ClockPhaseModifier, RelativisticJ2ClockPhaseModifier);

          void t_RelativisticJ2ClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockPhaseModifier), module, "RelativisticJ2ClockPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockPhaseModifier::wrap_Object(RelativisticJ2ClockPhaseModifier(((t_RelativisticJ2ClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data)
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
#include "org/orekit/utils/PythonConstants.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonConstants::class$ = NULL;
      jmethodID *PythonConstants::mids$ = NULL;
      bool PythonConstants::live$ = false;

      jclass PythonConstants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonConstants");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonConstants::PythonConstants() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonConstants::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonConstants::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonConstants::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self);
      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args);
      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data);
      static PyGetSetDef t_PythonConstants__fields_[] = {
        DECLARE_GET_FIELD(t_PythonConstants, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonConstants__methods_[] = {
        DECLARE_METHOD(t_PythonConstants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonConstants, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonConstants)[] = {
        { Py_tp_methods, t_PythonConstants__methods_ },
        { Py_tp_init, (void *) t_PythonConstants_init_ },
        { Py_tp_getset, t_PythonConstants__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonConstants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonConstants, t_PythonConstants, PythonConstants);

      void t_PythonConstants::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonConstants), &PY_TYPE_DEF(PythonConstants), module, "PythonConstants", 1);
      }

      void t_PythonConstants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "class_", make_descriptor(PythonConstants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "wrapfn_", make_descriptor(t_PythonConstants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonConstants::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonConstants_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonConstants::initializeClass, 1)))
          return NULL;
        return t_PythonConstants::wrap_Object(PythonConstants(((t_PythonConstants *) arg)->object.this$));
      }
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonConstants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds)
      {
        PythonConstants object((jobject) NULL);

        INT_CALL(object = PythonConstants());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args)
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

      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data)
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
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinhCosh::class$ = NULL;
      jmethodID *SinhCosh::mids$ = NULL;
      bool SinhCosh::live$ = false;

      jclass SinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cosh_9981f74b2d109da6] = env->getMethodID(cls, "cosh", "()D");
          mids$[mid_difference_84bccadda29b40de] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinh_9981f74b2d109da6] = env->getMethodID(cls, "sinh", "()D");
          mids$[mid_sum_84bccadda29b40de] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinhCosh::cosh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosh_9981f74b2d109da6]);
      }

      SinhCosh SinhCosh::difference(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_84bccadda29b40de], a0.this$, a1.this$));
      }

      jdouble SinhCosh::sinh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sinh_9981f74b2d109da6]);
      }

      SinhCosh SinhCosh::sum(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_84bccadda29b40de], a0.this$, a1.this$));
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
      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinhCosh__methods_[] = {
        DECLARE_METHOD(t_SinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinhCosh)[] = {
        { Py_tp_methods, t_SinhCosh__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinhCosh, t_SinhCosh, SinhCosh);

      void t_SinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(SinhCosh), &PY_TYPE_DEF(SinhCosh), module, "SinhCosh", 0);
      }

      void t_SinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "class_", make_descriptor(SinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "wrapfn_", make_descriptor(t_SinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinhCosh::initializeClass, 1)))
          return NULL;
        return t_SinhCosh::wrap_Object(SinhCosh(((t_SinhCosh *) arg)->object.this$));
      }
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cosh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::difference(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sinh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::sum(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
