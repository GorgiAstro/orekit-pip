#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsMoultonFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonFieldIntegratorBuilder::live$ = false;

        jclass AdamsMoultonFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegratorBuilder::AdamsMoultonFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsMoultonFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegratorBuilder, t_AdamsMoultonFieldIntegratorBuilder, AdamsMoultonFieldIntegratorBuilder);
        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(const AdamsMoultonFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder), module, "AdamsMoultonFieldIntegratorBuilder", 0);
        }

        void t_AdamsMoultonFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "class_", make_descriptor(AdamsMoultonFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(AdamsMoultonFieldIntegratorBuilder(((t_AdamsMoultonFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsMoultonFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeIndependentLOSTransform::class$ = NULL;
        jmethodID *TimeIndependentLOSTransform::mids$ = NULL;
        bool TimeIndependentLOSTransform::live$ = false;

        jclass TimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_23b7762b1a728d4c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_624b61103e61016a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream TimeIndependentLOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_23b7762b1a728d4c], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_624b61103e61016a], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self);
        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args);
        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_TimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_TimeIndependentLOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_TimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_TimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeIndependentLOSTransform, t_TimeIndependentLOSTransform, TimeIndependentLOSTransform);

        void t_TimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeIndependentLOSTransform), &PY_TYPE_DEF(TimeIndependentLOSTransform), module, "TimeIndependentLOSTransform", 0);
        }

        void t_TimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "class_", make_descriptor(TimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_TimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_TimeIndependentLOSTransform::wrap_Object(TimeIndependentLOSTransform(((t_TimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RRQRDecomposition::class$ = NULL;
      jmethodID *RRQRDecomposition::mids$ = NULL;
      bool RRQRDecomposition::live$ = false;

      jclass RRQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RRQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRank_2af4736545087009] = env->getMethodID(cls, "getRank", "(D)I");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_07adb42ffaa97d31] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_fd10cb359d67ca83] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix RRQRDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
      }

      jint RRQRDecomposition::getRank(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_2af4736545087009], a0);
      }

      ::org::hipparchus::linear::DecompositionSolver RRQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
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
      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self);
      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg);
      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args);
      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data);
      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data);
      static PyGetSetDef t_RRQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RRQRDecomposition, p),
        DECLARE_GET_FIELD(t_RRQRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RRQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_RRQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_RRQRDecomposition, getRank, METH_O),
        DECLARE_METHOD(t_RRQRDecomposition, getSolver, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RRQRDecomposition)[] = {
        { Py_tp_methods, t_RRQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_RRQRDecomposition_init_ },
        { Py_tp_getset, t_RRQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RRQRDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::QRDecomposition),
        NULL
      };

      DEFINE_TYPE(RRQRDecomposition, t_RRQRDecomposition, RRQRDecomposition);

      void t_RRQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RRQRDecomposition), &PY_TYPE_DEF(RRQRDecomposition), module, "RRQRDecomposition", 0);
      }

      void t_RRQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "class_", make_descriptor(RRQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "wrapfn_", make_descriptor(t_RRQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RRQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_RRQRDecomposition::wrap_Object(RRQRDecomposition(((t_RRQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RRQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RRQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RRQRDecomposition(a0, a1));
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

      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRank(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRank", arg);
        return NULL;
      }

      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        return callSuper(PY_TYPE(RRQRDecomposition), (PyObject *) self, "getSolver", args, 2);
      }

      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckFieldTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckFieldTransformer::mids$ = NULL;
        bool AdamsNordsieckFieldTransformer::live$ = false;

        jclass AdamsNordsieckFieldTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_f2bf35817d667b8d] = env->getStaticMethodID(cls, "getInstance", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer;");
            mids$[mid_initializeHighOrderDerivatives_3c657d6a3baa084a] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_7ec78cb4b1521bd4] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_66608a0c0bb66791] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckFieldTransformer AdamsNordsieckFieldTransformer::getInstance(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckFieldTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_f2bf35817d667b8d], a0.this$, a1));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_3c657d6a3baa084a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_7ec78cb4b1521bd4], a0.this$));
        }

        void AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_66608a0c0bb66791], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data);
        static PyGetSetDef t_AdamsNordsieckFieldTransformer__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsNordsieckFieldTransformer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsNordsieckFieldTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, getInstance, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckFieldTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckFieldTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdamsNordsieckFieldTransformer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckFieldTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckFieldTransformer, t_AdamsNordsieckFieldTransformer, AdamsNordsieckFieldTransformer);
        PyObject *t_AdamsNordsieckFieldTransformer::wrap_Object(const AdamsNordsieckFieldTransformer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsNordsieckFieldTransformer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsNordsieckFieldTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckFieldTransformer), &PY_TYPE_DEF(AdamsNordsieckFieldTransformer), module, "AdamsNordsieckFieldTransformer", 0);
        }

        void t_AdamsNordsieckFieldTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "class_", make_descriptor(AdamsNordsieckFieldTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckFieldTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckFieldTransformer::wrap_Object(AdamsNordsieckFieldTransformer(((t_AdamsNordsieckFieldTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          AdamsNordsieckFieldTransformer result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckFieldTransformer::getInstance(a0, a1));
            return t_AdamsNordsieckFieldTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArgs(args, "K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
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
              mids$[mid_init$_03ca3c35dcd2022b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;)V");
              mids$[mid_getObjectiveFunction_826b9148fa764579] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunction::ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03ca3c35dcd2022b, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateFunction ObjectiveFunction::getObjectiveFunction() const
          {
            return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_826b9148fa764579]));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ShadowModel::class$ = NULL;
              jmethodID *ShadowModel::mids$ = NULL;
              bool ShadowModel::live$ = false;
              ShadowModel *ShadowModel::CONE = NULL;
              ShadowModel *ShadowModel::CYLINDRICAL = NULL;
              ShadowModel *ShadowModel::DUAL_CONE = NULL;
              ShadowModel *ShadowModel::NONE = NULL;

              jclass ShadowModel::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_43f4a69c4fcd2e8f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_values_cbac0424a5fbdf33] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CONE = new ShadowModel(env->getStaticObjectField(cls, "CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  CYLINDRICAL = new ShadowModel(env->getStaticObjectField(cls, "CYLINDRICAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  DUAL_CONE = new ShadowModel(env->getStaticObjectField(cls, "DUAL_CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  NONE = new ShadowModel(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShadowModel ShadowModel::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShadowModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43f4a69c4fcd2e8f], a0.this$));
              }

              JArray< ShadowModel > ShadowModel::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShadowModel >(env->callStaticObjectMethod(cls, mids$[mid_values_cbac0424a5fbdf33]));
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
              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args);
              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShadowModel_values(PyTypeObject *type);
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data);
              static PyGetSetDef t_ShadowModel__fields_[] = {
                DECLARE_GET_FIELD(t_ShadowModel, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShadowModel__methods_[] = {
                DECLARE_METHOD(t_ShadowModel, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShadowModel, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShadowModel)[] = {
                { Py_tp_methods, t_ShadowModel__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShadowModel__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShadowModel)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShadowModel, t_ShadowModel, ShadowModel);
              PyObject *t_ShadowModel::wrap_Object(const ShadowModel& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShadowModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShadowModel::install(PyObject *module)
              {
                installType(&PY_TYPE(ShadowModel), &PY_TYPE_DEF(ShadowModel), module, "ShadowModel", 0);
              }

              void t_ShadowModel::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "class_", make_descriptor(ShadowModel::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "wrapfn_", make_descriptor(t_ShadowModel::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShadowModel::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CYLINDRICAL", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CYLINDRICAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "DUAL_CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::DUAL_CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "NONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::NONE)));
              }

              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShadowModel::initializeClass, 1)))
                  return NULL;
                return t_ShadowModel::wrap_Object(ShadowModel(((t_ShadowModel *) arg)->object.this$));
              }
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShadowModel::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShadowModel result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::valueOf(a0));
                  return t_ShadowModel::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShadowModel_values(PyTypeObject *type)
              {
                JArray< ShadowModel > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::values());
                return JArray<jobject>(result.this$).wrap(t_ShadowModel::wrap_jobject);
              }
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data)
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
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *WeightedEvaluation::class$ = NULL;
        jmethodID *WeightedEvaluation::mids$ = NULL;
        bool WeightedEvaluation::live$ = false;

        jclass WeightedEvaluation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/WeightedEvaluation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_3207f9c2ae7271d9] = env->getMethodID(cls, "evaluate", "([D[D)D");
            mids$[mid_evaluate_0f0d79795aa485ac] = env->getMethodID(cls, "evaluate", "([D[DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_0f0d79795aa485ac], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args);

        static PyMethodDef t_WeightedEvaluation__methods_[] = {
          DECLARE_METHOD(t_WeightedEvaluation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeightedEvaluation)[] = {
          { Py_tp_methods, t_WeightedEvaluation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeightedEvaluation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WeightedEvaluation, t_WeightedEvaluation, WeightedEvaluation);

        void t_WeightedEvaluation::install(PyObject *module)
        {
          installType(&PY_TYPE(WeightedEvaluation), &PY_TYPE_DEF(WeightedEvaluation), module, "WeightedEvaluation", 0);
        }

        void t_WeightedEvaluation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "class_", make_descriptor(WeightedEvaluation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "wrapfn_", make_descriptor(t_WeightedEvaluation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeightedEvaluation::initializeClass, 1)))
            return NULL;
          return t_WeightedEvaluation::wrap_Object(WeightedEvaluation(((t_WeightedEvaluation *) arg)->object.this$));
        }
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeightedEvaluation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *SpearmansCorrelation::class$ = NULL;
        jmethodID *SpearmansCorrelation::mids$ = NULL;
        bool SpearmansCorrelation::live$ = false;

        jclass SpearmansCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/SpearmansCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_189a9187f1b87acf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_init$_7d9c97be304480a2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_be124f4006dc9f69] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_3207f9c2ae7271d9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getRankCorrelation_1a1aafc4780288e5] = env->getMethodID(cls, "getRankCorrelation", "()Lorg/hipparchus/stat/correlation/PearsonsCorrelation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpearmansCorrelation::SpearmansCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_189a9187f1b87acf, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::stat::ranking::RankingAlgorithm & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d9c97be304480a2, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_be124f4006dc9f69], a0.this$));
        }

        jdouble SpearmansCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::stat::correlation::PearsonsCorrelation SpearmansCorrelation::getRankCorrelation() const
        {
          return ::org::hipparchus::stat::correlation::PearsonsCorrelation(env->callObjectMethod(this$, mids$[mid_getRankCorrelation_1a1aafc4780288e5]));
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
      namespace correlation {
        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data);
        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data);
        static PyGetSetDef t_SpearmansCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_SpearmansCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_SpearmansCorrelation, rankCorrelation),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpearmansCorrelation__methods_[] = {
          DECLARE_METHOD(t_SpearmansCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getRankCorrelation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpearmansCorrelation)[] = {
          { Py_tp_methods, t_SpearmansCorrelation__methods_ },
          { Py_tp_init, (void *) t_SpearmansCorrelation_init_ },
          { Py_tp_getset, t_SpearmansCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpearmansCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpearmansCorrelation, t_SpearmansCorrelation, SpearmansCorrelation);

        void t_SpearmansCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(SpearmansCorrelation), &PY_TYPE_DEF(SpearmansCorrelation), module, "SpearmansCorrelation", 0);
        }

        void t_SpearmansCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "class_", make_descriptor(SpearmansCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "wrapfn_", make_descriptor(t_SpearmansCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpearmansCorrelation::initializeClass, 1)))
            return NULL;
          return t_SpearmansCorrelation::wrap_Object(SpearmansCorrelation(((t_SpearmansCorrelation *) arg)->object.this$));
        }
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpearmansCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SpearmansCorrelation object((jobject) NULL);

              INT_CALL(object = SpearmansCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::RankingAlgorithm a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::stat::ranking::RankingAlgorithm a1((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SpearmansCorrelation(a0, a1));
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

        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation result((jobject) NULL);
          OBJ_CALL(result = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation value((jobject) NULL);
          OBJ_CALL(value = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Interval::class$ = NULL;
          jmethodID *Interval::mids$ = NULL;
          bool Interval::live$ = false;

          jclass Interval::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Interval");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_checkPoint_eaa26b96983ee05b] = env->getMethodID(cls, "checkPoint", "(DD)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_b74f83833fdad017] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_b74f83833fdad017] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_b74f83833fdad017] = env->getMethodID(cls, "getSup", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Interval::Interval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Interval::checkPoint(jdouble a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_eaa26b96983ee05b], a0, a1));
          }

          jdouble Interval::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_b74f83833fdad017]);
          }

          jdouble Interval::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_b74f83833fdad017]);
          }

          jdouble Interval::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
          }

          jdouble Interval::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_b74f83833fdad017]);
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
          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args);
          static PyObject *t_Interval_getBarycenter(t_Interval *self);
          static PyObject *t_Interval_getInf(t_Interval *self);
          static PyObject *t_Interval_getSize(t_Interval *self);
          static PyObject *t_Interval_getSup(t_Interval *self);
          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data);
          static PyObject *t_Interval_get__inf(t_Interval *self, void *data);
          static PyObject *t_Interval_get__size(t_Interval *self, void *data);
          static PyObject *t_Interval_get__sup(t_Interval *self, void *data);
          static PyGetSetDef t_Interval__fields_[] = {
            DECLARE_GET_FIELD(t_Interval, barycenter),
            DECLARE_GET_FIELD(t_Interval, inf),
            DECLARE_GET_FIELD(t_Interval, size),
            DECLARE_GET_FIELD(t_Interval, sup),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Interval__methods_[] = {
            DECLARE_METHOD(t_Interval, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, checkPoint, METH_VARARGS),
            DECLARE_METHOD(t_Interval, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSup, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Interval)[] = {
            { Py_tp_methods, t_Interval__methods_ },
            { Py_tp_init, (void *) t_Interval_init_ },
            { Py_tp_getset, t_Interval__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Interval)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Interval, t_Interval, Interval);

          void t_Interval::install(PyObject *module)
          {
            installType(&PY_TYPE(Interval), &PY_TYPE_DEF(Interval), module, "Interval", 0);
          }

          void t_Interval::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "class_", make_descriptor(Interval::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "wrapfn_", make_descriptor(t_Interval::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Interval::initializeClass, 1)))
              return NULL;
            return t_Interval::wrap_Object(Interval(((t_Interval *) arg)->object.this$));
          }
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Interval::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Interval object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Interval(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.checkPoint(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
            return NULL;
          }

          static PyObject *t_Interval_getBarycenter(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getInf(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSize(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSup(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__inf(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__size(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__sup(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedPair::class$ = NULL;
      jmethodID *TimeStampedPair::mids$ = NULL;
      bool TimeStampedPair::live$ = false;
      jdouble TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass TimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_75a403904966363f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)V");
          mids$[mid_init$_7b052766e2573d36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;D)V");
          mids$[mid_checkDatesConsistency_d6176fd55d408ce8] = env->getStaticMethodID(cls, "checkDatesConsistency", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFirst_a63f3f151ca9e302] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getSecond_a63f3f151ca9e302] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75a403904966363f, a0.this$, a1.this$)) {}

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b052766e2573d36, a0.this$, a1.this$, a2)) {}

      void TimeStampedPair::checkDatesConsistency(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDatesConsistency_d6176fd55d408ce8], a0.this$, a1.this$, a2);
      }

      ::org::orekit::time::AbsoluteDate TimeStampedPair::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_a63f3f151ca9e302]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_a63f3f151ca9e302]));
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
      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args);
      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data);
      static PyGetSetDef t_TimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPair, date),
        DECLARE_GET_FIELD(t_TimeStampedPair, first),
        DECLARE_GET_FIELD(t_TimeStampedPair, second),
        DECLARE_GET_FIELD(t_TimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPair, checkDatesConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPair)[] = {
        { Py_tp_methods, t_TimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPair_init_ },
        { Py_tp_getset, t_TimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedPair, t_TimeStampedPair, TimeStampedPair);
      PyObject *t_TimeStampedPair::wrap_Object(const TimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_TimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_TimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPair), &PY_TYPE_DEF(TimeStampedPair), module, "TimeStampedPair", 0);
      }

      void t_TimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "class_", make_descriptor(TimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "wrapfn_", make_descriptor(t_TimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPair::wrap_Object(TimeStampedPair(((t_TimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            jdouble a2;
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPair(a0, a1, a2));
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

      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::time::TimeStampedPair::checkDatesConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDatesConsistency", args);
        return NULL;
      }

      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipse.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipse::class$ = NULL;
      jmethodID *Ellipse::mids$ = NULL;
      bool Ellipse::live$ = false;

      jclass Ellipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_62b9ceaa2d203299] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/frames/Frame;)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_b74f83833fdad017] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getCenter_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCenterOfCurvature_3e1d04f71eb7f673] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_8b724f8b4fdad1a2] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getV_8b724f8b4fdad1a2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAt_498f52cd8e5a7072] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_projectToEllipse_b59fe39c52b8d345] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToEllipse_3e1d04f71eb7f673] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toPlane_9d707d8812de06bd] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toSpace_66b5e411a7caffe0] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipse::Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62b9ceaa2d203299, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

      jdouble Ellipse::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble Ellipse::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_b74f83833fdad017]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_3e1d04f71eb7f673], a0.this$));
      }

      ::org::orekit::frames::Frame Ellipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::pointAt(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_498f52cd8e5a7072], a0));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Ellipse::projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_b59fe39c52b8d345], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_3e1d04f71eb7f673], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toPlane_9d707d8812de06bd], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_66b5e411a7caffe0], a0.this$));
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
      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipse_getA(t_Ellipse *self);
      static PyObject *t_Ellipse_getB(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenter(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_getFrame(t_Ellipse *self);
      static PyObject *t_Ellipse_getU(t_Ellipse *self);
      static PyObject *t_Ellipse_getV(t_Ellipse *self);
      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args);
      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data);
      static PyGetSetDef t_Ellipse__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipse, a),
        DECLARE_GET_FIELD(t_Ellipse, b),
        DECLARE_GET_FIELD(t_Ellipse, center),
        DECLARE_GET_FIELD(t_Ellipse, frame),
        DECLARE_GET_FIELD(t_Ellipse, u),
        DECLARE_GET_FIELD(t_Ellipse, v),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipse__methods_[] = {
        DECLARE_METHOD(t_Ellipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_Ellipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, pointAt, METH_O),
        DECLARE_METHOD(t_Ellipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_Ellipse, toPlane, METH_O),
        DECLARE_METHOD(t_Ellipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipse)[] = {
        { Py_tp_methods, t_Ellipse__methods_ },
        { Py_tp_init, (void *) t_Ellipse_init_ },
        { Py_tp_getset, t_Ellipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipse, t_Ellipse, Ellipse);

      void t_Ellipse::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipse), &PY_TYPE_DEF(Ellipse), module, "Ellipse", 0);
      }

      void t_Ellipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "class_", make_descriptor(Ellipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "wrapfn_", make_descriptor(t_Ellipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipse::initializeClass, 1)))
          return NULL;
        return t_Ellipse::wrap_Object(Ellipse(((t_Ellipse *) arg)->object.this$));
      }
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        Ellipse object((jobject) NULL);

        if (!parseArgs(args, "kkkDDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = Ellipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipse_getA(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getB(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getCenter(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_getFrame(t_Ellipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getU(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getV(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseAbstractUnivariateSolver::class$ = NULL;
        jmethodID *BaseAbstractUnivariateSolver::mids$ = NULL;
        bool BaseAbstractUnivariateSolver::live$ = false;

        jclass BaseAbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_getStartValue_b74f83833fdad017] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_solve_6fb62642ce3110d4] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_076ce9f904fe1577] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_82bbd98edb095e2c] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_computeObjectiveValue_04fd0666b613d2ab] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_verifyInterval_369b4c97255d5afa] = env->getMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_incrementEvaluationCount_a1fa5dae97ea5ed2] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_verifySequence_b5167f35b2521627] = env->getMethodID(cls, "verifySequence", "(DDD)V");
            mids$[mid_verifyBracketing_369b4c97255d5afa] = env->getMethodID(cls, "verifyBracketing", "(DD)V");
            mids$[mid_isBracketing_cd8da52a7e84190c] = env->getMethodID(cls, "isBracketing", "(DD)Z");
            mids$[mid_isSequence_bf10cceb76af8f9c] = env->getMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_setup_6c6e0210841d1026] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint BaseAbstractUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jdouble BaseAbstractUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateSolver::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateSolver::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateSolver::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_6fb62642ce3110d4], a0, a1.this$, a2);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_076ce9f904fe1577], a0, a1.this$, a2, a3);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_82bbd98edb095e2c], a0, a1.this$, a2, a3, a4);
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
        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, max),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, min),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, startValue),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMax, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMin, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateSolver, t_BaseAbstractUnivariateSolver, BaseAbstractUnivariateSolver);
        PyObject *t_BaseAbstractUnivariateSolver::wrap_Object(const BaseAbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateSolver), &PY_TYPE_DEF(BaseAbstractUnivariateSolver), module, "BaseAbstractUnivariateSolver", 0);
        }

        void t_BaseAbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "class_", make_descriptor(BaseAbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateSolver::wrap_Object(BaseAbstractUnivariateSolver(((t_BaseAbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
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
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$FrRangeMeasurement::class$ = NULL;
        jmethodID *CRD$FrRangeMeasurement::mids$ = NULL;
        bool CRD$FrRangeMeasurement::live$ = false;

        jclass CRD$FrRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$FrRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4336e7907590b9ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DILjava/lang/String;IIIII)V");
            mids$[mid_getDetectorChannel_55546ef6a647f39b] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getFilterFlag_55546ef6a647f39b] = env->getMethodID(cls, "getFilterFlag", "()I");
            mids$[mid_getReceiveAmplitude_55546ef6a647f39b] = env->getMethodID(cls, "getReceiveAmplitude", "()I");
            mids$[mid_getStopNumber_55546ef6a647f39b] = env->getMethodID(cls, "getStopNumber", "()I");
            mids$[mid_getTransmitAmplitude_55546ef6a647f39b] = env->getMethodID(cls, "getTransmitAmplitude", "()I");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$FrRangeMeasurement::CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, const ::java::lang::String & a3, jint a4, jint a5, jint a6, jint a7, jint a8) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_4336e7907590b9ca, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        jint CRD$FrRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_55546ef6a647f39b]);
        }

        jint CRD$FrRangeMeasurement::getFilterFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getFilterFlag_55546ef6a647f39b]);
        }

        jint CRD$FrRangeMeasurement::getReceiveAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getReceiveAmplitude_55546ef6a647f39b]);
        }

        jint CRD$FrRangeMeasurement::getStopNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getStopNumber_55546ef6a647f39b]);
        }

        jint CRD$FrRangeMeasurement::getTransmitAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getTransmitAmplitude_55546ef6a647f39b]);
        }

        ::java::lang::String CRD$FrRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$FrRangeMeasurement::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$FrRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, filterFlag),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, receiveAmplitude),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, stopNumber),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, transmitAmplitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$FrRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getFilterFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getReceiveAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getStopNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getTransmitAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$FrRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$FrRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$FrRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$FrRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$FrRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$FrRangeMeasurement, t_CRD$FrRangeMeasurement, CRD$FrRangeMeasurement);

        void t_CRD$FrRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$FrRangeMeasurement), &PY_TYPE_DEF(CRD$FrRangeMeasurement), module, "CRD$FrRangeMeasurement", 0);
        }

        void t_CRD$FrRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "class_", make_descriptor(CRD$FrRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$FrRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$FrRangeMeasurement::wrap_Object(CRD$FrRangeMeasurement(((t_CRD$FrRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          jint a4;
          jint a5;
          jint a6;
          jint a7;
          jint a8;
          CRD$FrRangeMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDIsIIIII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            INT_CALL(object = CRD$FrRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFilterFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStopNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFilterFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStopNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaturalRanking::class$ = NULL;
        jmethodID *NaturalRanking::mids$ = NULL;
        bool NaturalRanking::live$ = false;
        ::org::hipparchus::stat::ranking::NaNStrategy *NaturalRanking::DEFAULT_NAN_STRATEGY = NULL;
        ::org::hipparchus::stat::ranking::TiesStrategy *NaturalRanking::DEFAULT_TIES_STRATEGY = NULL;

        jclass NaturalRanking::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaturalRanking");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_762a548744e64bc1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)V");
            mids$[mid_init$_12e7f930f26d954d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_c6e936703eef190b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_9ea9143ae8bc6296] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getNanStrategy_9ae875326a45f3e9] = env->getMethodID(cls, "getNanStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_getTiesStrategy_89158e6cc63b090c] = env->getMethodID(cls, "getTiesStrategy", "()Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_rank_14dee4cb8cc3e959] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_NAN_STRATEGY = new ::org::hipparchus::stat::ranking::NaNStrategy(env->getStaticObjectField(cls, "DEFAULT_NAN_STRATEGY", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            DEFAULT_TIES_STRATEGY = new ::org::hipparchus::stat::ranking::TiesStrategy(env->getStaticObjectField(cls, "DEFAULT_TIES_STRATEGY", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaturalRanking::NaturalRanking() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_762a548744e64bc1, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12e7f930f26d954d, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6e936703eef190b, a0.this$, a1.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ea9143ae8bc6296, a0.this$, a1.this$)) {}

        ::org::hipparchus::stat::ranking::NaNStrategy NaturalRanking::getNanStrategy() const
        {
          return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNanStrategy_9ae875326a45f3e9]));
        }

        ::org::hipparchus::stat::ranking::TiesStrategy NaturalRanking::getTiesStrategy() const
        {
          return ::org::hipparchus::stat::ranking::TiesStrategy(env->callObjectMethod(this$, mids$[mid_getTiesStrategy_89158e6cc63b090c]));
        }

        JArray< jdouble > NaturalRanking::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_14dee4cb8cc3e959], a0.this$));
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
      namespace ranking {
        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg);
        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data);
        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data);
        static PyGetSetDef t_NaturalRanking__fields_[] = {
          DECLARE_GET_FIELD(t_NaturalRanking, nanStrategy),
          DECLARE_GET_FIELD(t_NaturalRanking, tiesStrategy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaturalRanking__methods_[] = {
          DECLARE_METHOD(t_NaturalRanking, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, getNanStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, getTiesStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaturalRanking)[] = {
          { Py_tp_methods, t_NaturalRanking__methods_ },
          { Py_tp_init, (void *) t_NaturalRanking_init_ },
          { Py_tp_getset, t_NaturalRanking__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaturalRanking)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NaturalRanking, t_NaturalRanking, NaturalRanking);

        void t_NaturalRanking::install(PyObject *module)
        {
          installType(&PY_TYPE(NaturalRanking), &PY_TYPE_DEF(NaturalRanking), module, "NaturalRanking", 0);
        }

        void t_NaturalRanking::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "class_", make_descriptor(NaturalRanking::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "wrapfn_", make_descriptor(t_NaturalRanking::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaturalRanking::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_NAN_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(*NaturalRanking::DEFAULT_NAN_STRATEGY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_TIES_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(*NaturalRanking::DEFAULT_TIES_STRATEGY)));
        }

        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaturalRanking::initializeClass, 1)))
            return NULL;
          return t_NaturalRanking::wrap_Object(NaturalRanking(((t_NaturalRanking *) arg)->object.this$));
        }
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaturalRanking::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NaturalRanking object((jobject) NULL);

              INT_CALL(object = NaturalRanking());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::TiesStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
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

        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }

        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
        }

        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEIntegrator::class$ = NULL;
      jmethodID *FieldODEIntegrator::mids$ = NULL;
      bool FieldODEIntegrator::live$ = false;

      jclass FieldODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_7d036dd73a796a18] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_c7e835482ba4bd87] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_cd46d1493dfc3830] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_81520b552cb3fa26] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_b7aa8b39e4b21836] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_integrate_75ca69013be095d1] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_7d036dd73a796a18], a0.this$);
      }

      void FieldODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_c7e835482ba4bd87], a0.this$);
      }

      void FieldODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_cd46d1493dfc3830], a0.this$);
      }

      void FieldODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2]);
      }

      void FieldODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2]);
      }

      void FieldODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_81520b552cb3fa26]));
      }

      jint FieldODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      ::java::util::List FieldODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_e62d3bb06d56d7e3]));
      }

      jint FieldODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
      }

      ::java::lang::String FieldODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::util::List FieldODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3]));
      }

      ::java::util::List FieldODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_b7aa8b39e4b21836]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_75ca69013be095d1], a0.this$, a1.this$, a2.this$));
      }

      void FieldODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_44ed599e93e8a30c], a0);
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
      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data);
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data);
      static PyGetSetDef t_FieldODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_FieldODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, name),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepStart),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegrator)[] = {
        { Py_tp_methods, t_FieldODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEIntegrator, t_FieldODEIntegrator, FieldODEIntegrator);
      PyObject *t_FieldODEIntegrator::wrap_Object(const FieldODEIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEIntegrator), &PY_TYPE_DEF(FieldODEIntegrator), module, "FieldODEIntegrator", 0);
      }

      void t_FieldODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "class_", make_descriptor(FieldODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "wrapfn_", make_descriptor(t_FieldODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldODEIntegrator::wrap_Object(FieldODEIntegrator(((t_FieldODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.integrate(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue$Event::class$ = NULL;
          jmethodID *FieldRecordAndContinue$Event::mids$ = NULL;
          bool FieldRecordAndContinue$Event::live$ = false;

          jclass FieldRecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
              mids$[mid_getState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::FieldEventDetector FieldRecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_e78af9d734a5fbe1]));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldRecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_fba6d56f8dbc98d0]));
          }

          jboolean FieldRecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_9ab94ac1dc23b105]);
          }

          ::java::lang::String FieldRecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, state),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue$Event)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue$Event, t_FieldRecordAndContinue$Event, FieldRecordAndContinue$Event);
          PyObject *t_FieldRecordAndContinue$Event::wrap_Object(const FieldRecordAndContinue$Event& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue$Event::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue$Event), &PY_TYPE_DEF(FieldRecordAndContinue$Event), module, "FieldRecordAndContinue$Event", 0);
          }

          void t_FieldRecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "class_", make_descriptor(FieldRecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "wrapfn_", make_descriptor(t_FieldRecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue$Event::wrap_Object(FieldRecordAndContinue$Event(((t_FieldRecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldRecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_94fe42eaf738176b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm01Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm01Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01::SsrIgm01(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_94fe42eaf738176b, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm01::getSsrIgm01Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm01Data_810bed48fafb0b9a]));
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
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase$Status::class$ = NULL;
        jmethodID *EstimatedMeasurementBase$Status::mids$ = NULL;
        bool EstimatedMeasurementBase$Status::live$ = false;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::PROCESSED = NULL;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::REJECTED = NULL;

        jclass EstimatedMeasurementBase$Status::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase$Status");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_a623848866cc27aa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_values_c981a3ddee93d7f9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PROCESSED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "PROCESSED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            REJECTED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "REJECTED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase$Status EstimatedMeasurementBase$Status::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EstimatedMeasurementBase$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a623848866cc27aa], a0.this$));
        }

        JArray< EstimatedMeasurementBase$Status > EstimatedMeasurementBase$Status::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EstimatedMeasurementBase$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_c981a3ddee93d7f9]));
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
        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type);
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase$Status__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase$Status, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase$Status__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase$Status)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase$Status__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimatedMeasurementBase$Status__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase$Status)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase$Status, t_EstimatedMeasurementBase$Status, EstimatedMeasurementBase$Status);
        PyObject *t_EstimatedMeasurementBase$Status::wrap_Object(const EstimatedMeasurementBase$Status& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase$Status::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase$Status), &PY_TYPE_DEF(EstimatedMeasurementBase$Status), module, "EstimatedMeasurementBase$Status", 0);
        }

        void t_EstimatedMeasurementBase$Status::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "class_", make_descriptor(EstimatedMeasurementBase$Status::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedMeasurementBase$Status::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "PROCESSED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::PROCESSED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "REJECTED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::REJECTED)));
        }

        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase$Status::wrap_Object(EstimatedMeasurementBase$Status(((t_EstimatedMeasurementBase$Status *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EstimatedMeasurementBase$Status result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::valueOf(a0));
            return t_EstimatedMeasurementBase$Status::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type)
        {
          JArray< EstimatedMeasurementBase$Status > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::values());
          return JArray<jobject>(result.this$).wrap(t_EstimatedMeasurementBase$Status::wrap_jobject);
        }
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TorqueFree::class$ = NULL;
      jmethodID *TorqueFree::mids$ = NULL;
      bool TorqueFree::live$ = false;

      jclass TorqueFree::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TorqueFree");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e345ce844a977b8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;Lorg/orekit/attitudes/Inertia;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getInertia_5cd6be00a4c2be15] = env->getMethodID(cls, "getInertia", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_getInitialAttitude_9d85ee1243dd5d25] = env->getMethodID(cls, "getInitialAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TorqueFree::TorqueFree(const ::org::orekit::attitudes::Attitude & a0, const ::org::orekit::attitudes::Inertia & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e345ce844a977b8c, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TorqueFree::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Inertia TorqueFree::getInertia() const
      {
        return ::org::orekit::attitudes::Inertia(env->callObjectMethod(this$, mids$[mid_getInertia_5cd6be00a4c2be15]));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getInitialAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getInitialAttitude_9d85ee1243dd5d25]));
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
      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args);
      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self);
      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self);
      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data);
      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data);
      static PyGetSetDef t_TorqueFree__fields_[] = {
        DECLARE_GET_FIELD(t_TorqueFree, inertia),
        DECLARE_GET_FIELD(t_TorqueFree, initialAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TorqueFree__methods_[] = {
        DECLARE_METHOD(t_TorqueFree, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TorqueFree, getInertia, METH_NOARGS),
        DECLARE_METHOD(t_TorqueFree, getInitialAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TorqueFree)[] = {
        { Py_tp_methods, t_TorqueFree__methods_ },
        { Py_tp_init, (void *) t_TorqueFree_init_ },
        { Py_tp_getset, t_TorqueFree__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TorqueFree)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TorqueFree, t_TorqueFree, TorqueFree);

      void t_TorqueFree::install(PyObject *module)
      {
        installType(&PY_TYPE(TorqueFree), &PY_TYPE_DEF(TorqueFree), module, "TorqueFree", 0);
      }

      void t_TorqueFree::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "class_", make_descriptor(TorqueFree::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "wrapfn_", make_descriptor(t_TorqueFree::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TorqueFree::initializeClass, 1)))
          return NULL;
        return t_TorqueFree::wrap_Object(TorqueFree(((t_TorqueFree *) arg)->object.this$));
      }
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TorqueFree::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        ::org::orekit::attitudes::Inertia a1((jobject) NULL);
        TorqueFree object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::attitudes::Inertia::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TorqueFree(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Inertia value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(value);
      }

      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_convert_1085fbc3099561ad] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed49a95e057deeb1] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_8c138e9dd275b235] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_439cb7b3f99fe6c0] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorConverter::PythonPropagatorConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonPropagatorConverter::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractSubHyperplane::class$ = NULL;
        jmethodID *AbstractSubHyperplane::mids$ = NULL;
        bool AbstractSubHyperplane::live$ = false;

        jclass AbstractSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyTransform_e43d4173d01d86e9] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_copySelf_3cd648bf55550e6e] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_getHyperplane_40a20a6ecfa9e745] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getRemainingRegion_3698fd1911856e70] = env->getMethodID(cls, "getRemainingRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_8fc75099ef206f26] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
            mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractSubHyperplane AbstractSubHyperplane::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_applyTransform_e43d4173d01d86e9], a0.this$));
        }

        AbstractSubHyperplane AbstractSubHyperplane::copySelf() const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_3cd648bf55550e6e]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane AbstractSubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_40a20a6ecfa9e745]));
        }

        ::org::hipparchus::geometry::partitioning::Region AbstractSubHyperplane::getRemainingRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getRemainingRegion_3698fd1911856e70]));
        }

        jdouble AbstractSubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
        }

        jboolean AbstractSubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
        }

        AbstractSubHyperplane AbstractSubHyperplane::reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_8fc75099ef206f26], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane AbstractSubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args);
        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data);
        static PyGetSetDef t_AbstractSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, empty),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, remainingRegion),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, size),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_AbstractSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getRemainingRegion, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractSubHyperplane)[] = {
          { Py_tp_methods, t_AbstractSubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractSubHyperplane, t_AbstractSubHyperplane, AbstractSubHyperplane);
        PyObject *t_AbstractSubHyperplane::wrap_Object(const AbstractSubHyperplane& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractSubHyperplane), &PY_TYPE_DEF(AbstractSubHyperplane), module, "AbstractSubHyperplane", 0);
        }

        void t_AbstractSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "class_", make_descriptor(AbstractSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "wrapfn_", make_descriptor(t_AbstractSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_AbstractSubHyperplane::wrap_Object(AbstractSubHyperplane(((t_AbstractSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self)
        {
          AbstractSubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Region value((jobject) NULL);
          OBJ_CALL(value = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/YUMAParser.h"
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

      ::java::lang::Class *YUMAParser::class$ = NULL;
      jmethodID *YUMAParser::mids$ = NULL;
      bool YUMAParser::live$ = false;

      jclass YUMAParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/YUMAParser");

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

      YUMAParser::YUMAParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      YUMAParser::YUMAParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_6d628f04453f432c, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List YUMAParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_e62d3bb06d56d7e3]));
      }

      ::java::util::List YUMAParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_e62d3bb06d56d7e3]));
      }

      ::java::lang::String YUMAParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
      }

      void YUMAParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_a1fa5dae97ea5ed2]);
      }

      void YUMAParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
      }

      jboolean YUMAParser::stillAcceptsData() const
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
      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self);
      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args);
      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self);
      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data);
      static PyGetSetDef t_YUMAParser__fields_[] = {
        DECLARE_GET_FIELD(t_YUMAParser, almanacs),
        DECLARE_GET_FIELD(t_YUMAParser, pRNNumbers),
        DECLARE_GET_FIELD(t_YUMAParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YUMAParser__methods_[] = {
        DECLARE_METHOD(t_YUMAParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_YUMAParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YUMAParser)[] = {
        { Py_tp_methods, t_YUMAParser__methods_ },
        { Py_tp_init, (void *) t_YUMAParser_init_ },
        { Py_tp_getset, t_YUMAParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YUMAParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(YUMAParser, t_YUMAParser, YUMAParser);

      void t_YUMAParser::install(PyObject *module)
      {
        installType(&PY_TYPE(YUMAParser), &PY_TYPE_DEF(YUMAParser), module, "YUMAParser", 0);
      }

      void t_YUMAParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "class_", make_descriptor(YUMAParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "wrapfn_", make_descriptor(t_YUMAParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YUMAParser::initializeClass, 1)))
          return NULL;
        return t_YUMAParser::wrap_Object(YUMAParser(((t_YUMAParser *) arg)->object.this$));
      }
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YUMAParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = YUMAParser(a0));
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
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = YUMAParser(a0, a1, a2));
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

      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args)
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

      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data)
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
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonPartialsObserver::class$ = NULL;
        jmethodID *PythonPartialsObserver::mids$ = NULL;
        bool PythonPartialsObserver::live$ = false;

        jclass PythonPartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonPartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_partialsComputed_915c7d1930588394] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPartialsObserver::PythonPartialsObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonPartialsObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonPartialsObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonPartialsObserver::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self);
        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args);
        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data);
        static PyGetSetDef t_PythonPartialsObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPartialsObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPartialsObserver__methods_[] = {
          DECLARE_METHOD(t_PythonPartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPartialsObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPartialsObserver)[] = {
          { Py_tp_methods, t_PythonPartialsObserver__methods_ },
          { Py_tp_init, (void *) t_PythonPartialsObserver_init_ },
          { Py_tp_getset, t_PythonPartialsObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPartialsObserver, t_PythonPartialsObserver, PythonPartialsObserver);

        void t_PythonPartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPartialsObserver), &PY_TYPE_DEF(PythonPartialsObserver), module, "PythonPartialsObserver", 1);
        }

        void t_PythonPartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "class_", make_descriptor(PythonPartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "wrapfn_", make_descriptor(t_PythonPartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPartialsObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonPartialsObserver_partialsComputed0 },
            { "pythonDecRef", "()V", (void *) t_PythonPartialsObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPartialsObserver::initializeClass, 1)))
            return NULL;
          return t_PythonPartialsObserver::wrap_Object(PythonPartialsObserver(((t_PythonPartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonPartialsObserver object((jobject) NULL);

          INT_CALL(object = PythonPartialsObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args)
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

        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "partialsComputed", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data)
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
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils$FactorialLog::class$ = NULL;
      jmethodID *CombinatoricsUtils$FactorialLog::mids$ = NULL;
      bool CombinatoricsUtils$FactorialLog::live$ = false;

      jclass CombinatoricsUtils$FactorialLog::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils$FactorialLog");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_dc53c47ab75f82df] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");
          mids$[mid_value_2afcbc21f4e57ab2] = env->getMethodID(cls, "value", "(I)D");
          mids$[mid_withCache_55ac766317195991] = env->getMethodID(cls, "withCache", "(I)Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::create()
      {
        jclass cls = env->getClass(initializeClass);
        return CombinatoricsUtils$FactorialLog(env->callStaticObjectMethod(cls, mids$[mid_create_dc53c47ab75f82df]));
      }

      jdouble CombinatoricsUtils$FactorialLog::value(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_2afcbc21f4e57ab2], a0);
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::withCache(jint a0) const
      {
        return CombinatoricsUtils$FactorialLog(env->callObjectMethod(this$, mids$[mid_withCache_55ac766317195991], a0));
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
      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type);
      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);

      static PyMethodDef t_CombinatoricsUtils$FactorialLog__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, value, METH_O),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, withCache, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils$FactorialLog)[] = {
        { Py_tp_methods, t_CombinatoricsUtils$FactorialLog__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils$FactorialLog)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils$FactorialLog, t_CombinatoricsUtils$FactorialLog, CombinatoricsUtils$FactorialLog);

      void t_CombinatoricsUtils$FactorialLog::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils$FactorialLog), &PY_TYPE_DEF(CombinatoricsUtils$FactorialLog), module, "CombinatoricsUtils$FactorialLog", 0);
      }

      void t_CombinatoricsUtils$FactorialLog::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "class_", make_descriptor(CombinatoricsUtils$FactorialLog::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "wrapfn_", make_descriptor(t_CombinatoricsUtils$FactorialLog::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(CombinatoricsUtils$FactorialLog(((t_CombinatoricsUtils$FactorialLog *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type)
      {
        CombinatoricsUtils$FactorialLog result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils$FactorialLog::create());
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        CombinatoricsUtils$FactorialLog result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCache(a0));
          return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCache", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectorResults::class$ = NULL;
          jmethodID *CycleSlipDetectorResults::mids$ = NULL;
          bool CycleSlipDetectorResults::live$ = false;

          jclass CycleSlipDetectorResults::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getBeginDate_fe9f6e33a82195ff] = env->getMethodID(cls, "getBeginDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCycleSlipMap_810bed48fafb0b9a] = env->getMethodID(cls, "getCycleSlipMap", "()Ljava/util/Map;");
              mids$[mid_getEndDate_fe9f6e33a82195ff] = env->getMethodID(cls, "getEndDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getSatelliteName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSatelliteName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getBeginDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeginDate_fe9f6e33a82195ff], a0.this$));
          }

          ::java::util::Map CycleSlipDetectorResults::getCycleSlipMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCycleSlipMap_810bed48fafb0b9a]));
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getEndDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_fe9f6e33a82195ff], a0.this$));
          }

          ::java::lang::String CycleSlipDetectorResults::getSatelliteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSatelliteName_1c1fa1e935d6cdcf]));
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
          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data);
          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data);
          static PyGetSetDef t_CycleSlipDetectorResults__fields_[] = {
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, cycleSlipMap),
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, satelliteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CycleSlipDetectorResults__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectorResults, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getBeginDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getCycleSlipMap, METH_NOARGS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getEndDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getSatelliteName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectorResults)[] = {
            { Py_tp_methods, t_CycleSlipDetectorResults__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CycleSlipDetectorResults__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectorResults)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectorResults, t_CycleSlipDetectorResults, CycleSlipDetectorResults);

          void t_CycleSlipDetectorResults::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectorResults), &PY_TYPE_DEF(CycleSlipDetectorResults), module, "CycleSlipDetectorResults", 0);
          }

          void t_CycleSlipDetectorResults::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "class_", make_descriptor(CycleSlipDetectorResults::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "wrapfn_", make_descriptor(t_CycleSlipDetectorResults::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectorResults::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectorResults::wrap_Object(CycleSlipDetectorResults(((t_CycleSlipDetectorResults *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectorResults::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getBeginDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBeginDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getEndDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEndDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteName());
            return j2p(result);
          }

          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *RungeKuttaFieldIntegrator::mids$ = NULL;
        bool RungeKuttaFieldIntegrator::live$ = false;

        jclass RungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_81520b552cb3fa26] = env->getMethodID(cls, "getDefaultStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_75ca69013be095d1] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_singleStep_85013ed12cf10d41] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_7cba9d9178eefc1d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_fraction_431f825c752f7b4c] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement RungeKuttaFieldIntegrator::getDefaultStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDefaultStep_81520b552cb3fa26]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative RungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_75ca69013be095d1], a0.this$, a1.this$, a2.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > RungeKuttaFieldIntegrator::singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_singleStep_85013ed12cf10d41], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self);
        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, defaultStep),
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaFieldIntegrator, t_RungeKuttaFieldIntegrator, RungeKuttaFieldIntegrator);
        PyObject *t_RungeKuttaFieldIntegrator::wrap_Object(const RungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaFieldIntegrator), &PY_TYPE_DEF(RungeKuttaFieldIntegrator), module, "RungeKuttaFieldIntegrator", 0);
        }

        void t_RungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "class_", make_descriptor(RungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaFieldIntegrator::wrap_Object(RungeKuttaFieldIntegrator(((t_RungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getDefaultStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(RungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, "KK[KK", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getDefaultStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *WilcoxonSignedRankTest::class$ = NULL;
        jmethodID *WilcoxonSignedRankTest::mids$ = NULL;
        bool WilcoxonSignedRankTest::live$ = false;

        jclass WilcoxonSignedRankTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/WilcoxonSignedRankTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_c6e936703eef190b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_wilcoxonSignedRank_3207f9c2ae7271d9] = env->getMethodID(cls, "wilcoxonSignedRank", "([D[D)D");
            mids$[mid_wilcoxonSignedRankTest_0c373dc781edcf2f] = env->getMethodID(cls, "wilcoxonSignedRankTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WilcoxonSignedRankTest::WilcoxonSignedRankTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        WilcoxonSignedRankTest::WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6e936703eef190b, a0.this$, a1.this$)) {}

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRank(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRank_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRankTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRankTest_0c373dc781edcf2f], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args);

        static PyMethodDef t_WilcoxonSignedRankTest__methods_[] = {
          DECLARE_METHOD(t_WilcoxonSignedRankTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRank, METH_VARARGS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRankTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WilcoxonSignedRankTest)[] = {
          { Py_tp_methods, t_WilcoxonSignedRankTest__methods_ },
          { Py_tp_init, (void *) t_WilcoxonSignedRankTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WilcoxonSignedRankTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WilcoxonSignedRankTest, t_WilcoxonSignedRankTest, WilcoxonSignedRankTest);

        void t_WilcoxonSignedRankTest::install(PyObject *module)
        {
          installType(&PY_TYPE(WilcoxonSignedRankTest), &PY_TYPE_DEF(WilcoxonSignedRankTest), module, "WilcoxonSignedRankTest", 0);
        }

        void t_WilcoxonSignedRankTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "class_", make_descriptor(WilcoxonSignedRankTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "wrapfn_", make_descriptor(t_WilcoxonSignedRankTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WilcoxonSignedRankTest::initializeClass, 1)))
            return NULL;
          return t_WilcoxonSignedRankTest::wrap_Object(WilcoxonSignedRankTest(((t_WilcoxonSignedRankTest *) arg)->object.this$));
        }
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WilcoxonSignedRankTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              WilcoxonSignedRankTest object((jobject) NULL);

              INT_CALL(object = WilcoxonSignedRankTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              WilcoxonSignedRankTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = WilcoxonSignedRankTest(a0, a1));
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

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRank(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRank", args);
          return NULL;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jdouble result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRankTest(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRankTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ComplexEigenDecomposition::class$ = NULL;
      jmethodID *ComplexEigenDecomposition::mids$ = NULL;
      bool ComplexEigenDecomposition::live$ = false;
      jdouble ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK = (jdouble) 0;

      jclass ComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_103e61a34f552989] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_getD_81d49643ce3a3c0b] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getDeterminant_b74f83833fdad017] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalues_24cc06122e1087cf] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_06abfeddf4c4a28c] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getV_81d49643ce3a3c0b] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getVT_81d49643ce3a3c0b] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_hasComplexEigenvalues_9ab94ac1dc23b105] = env->getMethodID(cls, "hasComplexEigenvalues", "()Z");
          mids$[mid_matricesToEigenArrays_a1fa5dae97ea5ed2] = env->getMethodID(cls, "matricesToEigenArrays", "()V");
          mids$[mid_findEigenValues_84bd15e0995d0c79] = env->getMethodID(cls, "findEigenValues", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_findEigenVectors_3c04247304967ec8] = env->getMethodID(cls, "findEigenVectors", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkDefinition_84bd15e0995d0c79] = env->getMethodID(cls, "checkDefinition", "(Lorg/hipparchus/linear/RealMatrix;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EIGENVECTORS_EQUALITY = env->getStaticDoubleField(cls, "DEFAULT_EIGENVECTORS_EQUALITY");
          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          DEFAULT_EPSILON_AV_VD_CHECK = env->getStaticDoubleField(cls, "DEFAULT_EPSILON_AV_VD_CHECK");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_103e61a34f552989, a0.this$, a1, a2, a3)) {}

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getD() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getD_81d49643ce3a3c0b]));
      }

      jdouble ComplexEigenDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_b74f83833fdad017]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexEigenDecomposition::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_24cc06122e1087cf]));
      }

      ::org::hipparchus::linear::FieldVector ComplexEigenDecomposition::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_06abfeddf4c4a28c], a0));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getV() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getV_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_81d49643ce3a3c0b]));
      }

      jboolean ComplexEigenDecomposition::hasComplexEigenvalues() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasComplexEigenvalues_9ab94ac1dc23b105]);
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
      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_ComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, d),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, determinant),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, eigenvalues),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, v),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_ComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getD, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvector, METH_O),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getVT, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, hasComplexEigenvalues, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_ComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_ComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_ComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexEigenDecomposition, t_ComplexEigenDecomposition, ComplexEigenDecomposition);

      void t_ComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexEigenDecomposition), &PY_TYPE_DEF(ComplexEigenDecomposition), module, "ComplexEigenDecomposition", 0);
      }

      void t_ComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "class_", make_descriptor(ComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "wrapfn_", make_descriptor(t_ComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(ComplexEigenDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EIGENVECTORS_EQUALITY", make_descriptor(ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON_AV_VD_CHECK", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK));
      }

      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_ComplexEigenDecomposition::wrap_Object(ComplexEigenDecomposition(((t_ComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0, a1, a2, a3));
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

      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasComplexEigenvalues());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *ConfidenceInterval::class$ = NULL;
        jmethodID *ConfidenceInterval::mids$ = NULL;
        bool ConfidenceInterval::live$ = false;

        jclass ConfidenceInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/ConfidenceInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getConfidenceLevel_b74f83833fdad017] = env->getMethodID(cls, "getConfidenceLevel", "()D");
            mids$[mid_getLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getLowerBound", "()D");
            mids$[mid_getUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getUpperBound", "()D");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfidenceInterval::ConfidenceInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble ConfidenceInterval::getConfidenceLevel() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConfidenceLevel_b74f83833fdad017]);
        }

        jdouble ConfidenceInterval::getLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerBound_b74f83833fdad017]);
        }

        jdouble ConfidenceInterval::getUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperBound_b74f83833fdad017]);
        }

        ::java::lang::String ConfidenceInterval::toString() const
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
      namespace interval {
        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args);
        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data);
        static PyGetSetDef t_ConfidenceInterval__fields_[] = {
          DECLARE_GET_FIELD(t_ConfidenceInterval, confidenceLevel),
          DECLARE_GET_FIELD(t_ConfidenceInterval, lowerBound),
          DECLARE_GET_FIELD(t_ConfidenceInterval, upperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfidenceInterval__methods_[] = {
          DECLARE_METHOD(t_ConfidenceInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, getConfidenceLevel, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getLowerBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getUpperBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfidenceInterval)[] = {
          { Py_tp_methods, t_ConfidenceInterval__methods_ },
          { Py_tp_init, (void *) t_ConfidenceInterval_init_ },
          { Py_tp_getset, t_ConfidenceInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfidenceInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConfidenceInterval, t_ConfidenceInterval, ConfidenceInterval);

        void t_ConfidenceInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfidenceInterval), &PY_TYPE_DEF(ConfidenceInterval), module, "ConfidenceInterval", 0);
        }

        void t_ConfidenceInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "class_", make_descriptor(ConfidenceInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "wrapfn_", make_descriptor(t_ConfidenceInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfidenceInterval::initializeClass, 1)))
            return NULL;
          return t_ConfidenceInterval::wrap_Object(ConfidenceInterval(((t_ConfidenceInterval *) arg)->object.this$));
        }
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfidenceInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ConfidenceInterval object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = ConfidenceInterval(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ConfidenceInterval), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CalibrationDetail::class$ = NULL;
        jmethodID *CRD$CalibrationDetail::mids$ = NULL;
        bool CRD$CalibrationDetail::live$ = false;

        jclass CRD$CalibrationDetail::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CalibrationDetail");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_962a82a1818ef660] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CalibrationDetail::CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::org::orekit::files::ilrs::CRD$Calibration(env->newObject(initializeClass, &mids$, mid_init$_962a82a1818ef660, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::java::lang::String CRD$CalibrationDetail::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args);

        static PyMethodDef t_CRD$CalibrationDetail__methods_[] = {
          DECLARE_METHOD(t_CRD$CalibrationDetail, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, toCrdString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CalibrationDetail)[] = {
          { Py_tp_methods, t_CRD$CalibrationDetail__methods_ },
          { Py_tp_init, (void *) t_CRD$CalibrationDetail_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CalibrationDetail)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$Calibration),
          NULL
        };

        DEFINE_TYPE(CRD$CalibrationDetail, t_CRD$CalibrationDetail, CRD$CalibrationDetail);

        void t_CRD$CalibrationDetail::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CalibrationDetail), &PY_TYPE_DEF(CRD$CalibrationDetail), module, "CRD$CalibrationDetail", 0);
        }

        void t_CRD$CalibrationDetail::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "class_", make_descriptor(CRD$CalibrationDetail::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "wrapfn_", make_descriptor(t_CRD$CalibrationDetail::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CalibrationDetail::initializeClass, 1)))
            return NULL;
          return t_CRD$CalibrationDetail::wrap_Object(CRD$CalibrationDetail(((t_CRD$CalibrationDetail *) arg)->object.this$));
        }
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CalibrationDetail::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$CalibrationDetail object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$CalibrationDetail(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$CalibrationDetail), (PyObject *) self, "toCrdString", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimator::live$ = false;

        jclass SemiAnalyticalKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_71c06d037b2269e4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_processMeasurements_63b6806abfbbcee4] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimator::SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a1, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a4) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_71c06d037b2269e4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_63b6806abfbbcee4], a0.this$));
        }

        void SemiAnalyticalKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimator_init_ },
          { Py_tp_getset, t_SemiAnalyticalKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimator, t_SemiAnalyticalKalmanEstimator, SemiAnalyticalKalmanEstimator);

        void t_SemiAnalyticalKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimator), module, "SemiAnalyticalKalmanEstimator", 0);
        }

        void t_SemiAnalyticalKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "class_", make_descriptor(SemiAnalyticalKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimator::wrap_Object(SemiAnalyticalKalmanEstimator(((t_SemiAnalyticalKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a1((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a4((jobject) NULL);
          SemiAnalyticalKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SemiAnalyticalKalmanEstimator(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmElements::class$ = NULL;
              jmethodID *AcmElements::mids$ = NULL;
              bool AcmElements::live$ = false;
              AcmElements *AcmElements::AD = NULL;
              AcmElements *AcmElements::ATT = NULL;
              AcmElements *AcmElements::COV = NULL;
              AcmElements *AcmElements::MAN = NULL;
              AcmElements *AcmElements::PHYS = NULL;
              AcmElements *AcmElements::USER = NULL;

              jclass AcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_7df8b87f364494a5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");
                  mids$[mid_values_88e407a5efbb01d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmElements(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  ATT = new AcmElements(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  COV = new AcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  MAN = new AcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  PHYS = new AcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  USER = new AcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmElements AcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7df8b87f364494a5], a0.this$));
              }

              JArray< AcmElements > AcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_88e407a5efbb01d9]));
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
              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args);
              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmElements_values(PyTypeObject *type);
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data);
              static PyGetSetDef t_AcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_AcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmElements__methods_[] = {
                DECLARE_METHOD(t_AcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmElements)[] = {
                { Py_tp_methods, t_AcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmElements, t_AcmElements, AcmElements);
              PyObject *t_AcmElements::wrap_Object(const AcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmElements), &PY_TYPE_DEF(AcmElements), module, "AcmElements", 0);
              }

              void t_AcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "class_", make_descriptor(AcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "wrapfn_", make_descriptor(t_AcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "AD", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "ATT", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "COV", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "MAN", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "PHYS", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "USER", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::USER)));
              }

              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmElements::initializeClass, 1)))
                  return NULL;
                return t_AcmElements::wrap_Object(AcmElements(((t_AcmElements *) arg)->object.this$));
              }
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::valueOf(a0));
                  return t_AcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmElements_values(PyTypeObject *type)
              {
                JArray< AcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_AcmElements::wrap_jobject);
              }
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data)
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
