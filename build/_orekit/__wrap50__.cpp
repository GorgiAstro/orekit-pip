#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *SolarRadiationPressure::class$ = NULL;
        jmethodID *SolarRadiationPressure::mids$ = NULL;
        bool SolarRadiationPressure::live$ = false;

        jclass SolarRadiationPressure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/SolarRadiationPressure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7df9bc8521d0f47a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_init$_8d693bdc6a4d68ef] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLightingRatio_cc79c2733879de35] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLightingRatio_66a2f071e6ed0c06] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolarRadiationPressure::SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_7df9bc8521d0f47a, a0.this$, a1.this$, a2.this$)) {}

        SolarRadiationPressure::SolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_8d693bdc6a4d68ef, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::CalculusFieldElement SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLightingRatio_cc79c2733879de35], a0.this$));
        }

        jdouble SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLightingRatio_66a2f071e6ed0c06], a0.this$);
        }

        ::java::util::List SolarRadiationPressure::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data);
        static PyGetSetDef t_SolarRadiationPressure__fields_[] = {
          DECLARE_GET_FIELD(t_SolarRadiationPressure, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolarRadiationPressure__methods_[] = {
          DECLARE_METHOD(t_SolarRadiationPressure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getLightingRatio, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolarRadiationPressure)[] = {
          { Py_tp_methods, t_SolarRadiationPressure__methods_ },
          { Py_tp_init, (void *) t_SolarRadiationPressure_init_ },
          { Py_tp_getset, t_SolarRadiationPressure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolarRadiationPressure)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(SolarRadiationPressure, t_SolarRadiationPressure, SolarRadiationPressure);

        void t_SolarRadiationPressure::install(PyObject *module)
        {
          installType(&PY_TYPE(SolarRadiationPressure), &PY_TYPE_DEF(SolarRadiationPressure), module, "SolarRadiationPressure", 0);
        }

        void t_SolarRadiationPressure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "class_", make_descriptor(SolarRadiationPressure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "wrapfn_", make_descriptor(t_SolarRadiationPressure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolarRadiationPressure::initializeClass, 1)))
            return NULL;
          return t_SolarRadiationPressure::wrap_Object(SolarRadiationPressure(((t_SolarRadiationPressure *) arg)->object.this$));
        }
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolarRadiationPressure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "DDkkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2, a3, a4));
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

        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args)
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

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLightingRatio", args);
          return NULL;
        }

        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data)
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
#include "org/orekit/forces/FixedPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *FixedPanel::class$ = NULL;
      jmethodID *FixedPanel::mids$ = NULL;
      bool FixedPanel::live$ = false;

      jclass FixedPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/FixedPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b0869c2e0e4bff25] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DZDDDD)V");
          mids$[mid_getNormal_665eae343e14b9ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_78226ca7935182ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedPanel::FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_b0869c2e0e4bff25, a0.this$, a1, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_665eae343e14b9ea], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
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
      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args);

      static PyMethodDef t_FixedPanel__methods_[] = {
        DECLARE_METHOD(t_FixedPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedPanel)[] = {
        { Py_tp_methods, t_FixedPanel__methods_ },
        { Py_tp_init, (void *) t_FixedPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(FixedPanel, t_FixedPanel, FixedPanel);

      void t_FixedPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedPanel), &PY_TYPE_DEF(FixedPanel), module, "FixedPanel", 0);
      }

      void t_FixedPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "class_", make_descriptor(FixedPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "wrapfn_", make_descriptor(t_FixedPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedPanel::initializeClass, 1)))
          return NULL;
        return t_FixedPanel::wrap_Object(FixedPanel(((t_FixedPanel *) arg)->object.this$));
      }
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        jboolean a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        FixedPanel object((jobject) NULL);

        if (!parseArgs(args, "kDZDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = FixedPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args)
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

        return callSuper(PY_TYPE(FixedPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Floor::class$ = NULL;
        jmethodID *Floor::mids$ = NULL;
        bool Floor::live$ = false;

        jclass Floor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Floor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Floor::Floor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Floor::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Floor::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Floor_value(t_Floor *self, PyObject *args);

        static PyMethodDef t_Floor__methods_[] = {
          DECLARE_METHOD(t_Floor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Floor)[] = {
          { Py_tp_methods, t_Floor__methods_ },
          { Py_tp_init, (void *) t_Floor_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Floor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Floor, t_Floor, Floor);

        void t_Floor::install(PyObject *module)
        {
          installType(&PY_TYPE(Floor), &PY_TYPE_DEF(Floor), module, "Floor", 0);
        }

        void t_Floor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "class_", make_descriptor(Floor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "wrapfn_", make_descriptor(t_Floor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Floor::initializeClass, 1)))
            return NULL;
          return t_Floor::wrap_Object(Floor(((t_Floor *) arg)->object.this$));
        }
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Floor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds)
        {
          Floor object((jobject) NULL);

          INT_CALL(object = Floor());
          self->object = object;

          return 0;
        }

        static PyObject *t_Floor_value(t_Floor *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *Omm::class$ = NULL;
              jmethodID *Omm::mids$ = NULL;
              bool Omm::live$ = false;
              ::java::lang::String *Omm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Omm::ROOT = NULL;

              jclass Omm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/Omm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_dfd47f55f3c4ed53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_generateKeplerianOrbit_073190698893349f] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_dd3e4a8d51055f1f] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_generateTLE_32ddbfc0b67883b1] = env->getMethodID(cls, "generateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
                  mids$[mid_getData_3caba89943abdaa7] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmData;");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMetadata_2a4a4905976c4bdf] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Omm::Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_dfd47f55f3c4ed53, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::orbits::KeplerianOrbit Omm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_073190698893349f]));
              }

              ::org::orekit::propagation::SpacecraftState Omm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_dd3e4a8d51055f1f]));
              }

              ::org::orekit::propagation::analytical::tle::TLE Omm::generateTLE() const
              {
                return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generateTLE_32ddbfc0b67883b1]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmData Omm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmData(env->callObjectMethod(this$, mids$[mid_getData_3caba89943abdaa7]));
              }

              ::org::orekit::time::AbsoluteDate Omm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata Omm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_2a4a4905976c4bdf]));
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
              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args);
              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self);
              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self);
              static PyObject *t_Omm_generateTLE(t_Omm *self);
              static PyObject *t_Omm_getData(t_Omm *self);
              static PyObject *t_Omm_getDate(t_Omm *self);
              static PyObject *t_Omm_getMetadata(t_Omm *self);
              static PyObject *t_Omm_get__data(t_Omm *self, void *data);
              static PyObject *t_Omm_get__date(t_Omm *self, void *data);
              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data);
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data);
              static PyGetSetDef t_Omm__fields_[] = {
                DECLARE_GET_FIELD(t_Omm, data),
                DECLARE_GET_FIELD(t_Omm, date),
                DECLARE_GET_FIELD(t_Omm, metadata),
                DECLARE_GET_FIELD(t_Omm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Omm__methods_[] = {
                DECLARE_METHOD(t_Omm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Omm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateTLE, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Omm)[] = {
                { Py_tp_methods, t_Omm__methods_ },
                { Py_tp_init, (void *) t_Omm_init_ },
                { Py_tp_getset, t_Omm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Omm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Omm, t_Omm, Omm);
              PyObject *t_Omm::wrap_Object(const Omm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Omm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Omm::install(PyObject *module)
              {
                installType(&PY_TYPE(Omm), &PY_TYPE_DEF(Omm), module, "Omm", 0);
              }

              void t_Omm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "class_", make_descriptor(Omm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "wrapfn_", make_descriptor(t_Omm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Omm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Omm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "ROOT", make_descriptor(j2p(*Omm::ROOT)));
              }

              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Omm::initializeClass, 1)))
                  return NULL;
                return t_Omm::wrap_Object(Omm(((t_Omm *) arg)->object.this$));
              }
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Omm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Omm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Omm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Omm_generateTLE(t_Omm *self)
              {
                ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
                OBJ_CALL(result = self->object.generateTLE());
                return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
              }

              static PyObject *t_Omm_getData(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(result);
              }

              static PyObject *t_Omm_getDate(t_Omm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Omm_getMetadata(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(result);
              }
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Omm_get__data(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(value);
              }

              static PyObject *t_Omm_get__date(t_Omm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(value);
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
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Rotation::class$ = NULL;
          jmethodID *Rotation::mids$ = NULL;
          bool Rotation::live$ = false;
          Rotation *Rotation::IDENTITY = NULL;

          jclass Rotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Rotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bedd188d9f399c34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_03697b699aa0ff80] = env->getMethodID(cls, "<init>", "([[DD)V");
              mids$[mid_init$_155dcc6d13e5c5b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_031d018afc606d51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_da0304f1b27bd801] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;DDD)V");
              mids$[mid_init$_39a9a79474e53394] = env->getMethodID(cls, "<init>", "(DDDDZ)V");
              mids$[mid_applyInverseTo_d9eecc5668c093d0] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyInverseTo_afd63a09f6d01e4c] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyInverseTo_0d03c8a1d7f56f02] = env->getMethodID(cls, "applyInverseTo", "([D[D)V");
              mids$[mid_applyTo_d9eecc5668c093d0] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyTo_afd63a09f6d01e4c] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyTo_0d03c8a1d7f56f02] = env->getMethodID(cls, "applyTo", "([D[D)V");
              mids$[mid_compose_1018c521de6ee2a3] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_composeInverse_1018c521de6ee2a3] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_distance_9887de54c3d14021] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)D");
              mids$[mid_getAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getAngles_32000a56afaeda36] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[D");
              mids$[mid_getAxis_4856575fbf5ac2cf] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getMatrix_43de1192439efa92] = env->getMethodID(cls, "getMatrix", "()[[D");
              mids$[mid_getQ0_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ0", "()D");
              mids$[mid_getQ1_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ1", "()D");
              mids$[mid_getQ2_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ2", "()D");
              mids$[mid_getQ3_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ3", "()D");
              mids$[mid_revert_24d2e432e376f9a0] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDENTITY = new Rotation(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/geometry/euclidean/threed/Rotation;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedd188d9f399c34, a0.this$, a1.this$)) {}

          Rotation::Rotation(const JArray< JArray< jdouble > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03697b699aa0ff80, a0.this$, a1)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_155dcc6d13e5c5b3, a0.this$, a1, a2.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_031d018afc606d51, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da0304f1b27bd801, a0.this$, a1.this$, a2, a3, a4)) {}

          Rotation::Rotation(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39a9a79474e53394, a0, a1, a2, a3, a4)) {}

          Rotation Rotation::applyInverseTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_d9eecc5668c093d0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_afd63a09f6d01e4c], a0.this$));
          }

          void Rotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_0d03c8a1d7f56f02], a0.this$, a1.this$);
          }

          Rotation Rotation::applyTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyTo_d9eecc5668c093d0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyTo_afd63a09f6d01e4c], a0.this$));
          }

          void Rotation::applyTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_0d03c8a1d7f56f02], a0.this$, a1.this$);
          }

          Rotation Rotation::compose(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_compose_1018c521de6ee2a3], a0.this$, a1.this$));
          }

          Rotation Rotation::composeInverse(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_composeInverse_1018c521de6ee2a3], a0.this$, a1.this$));
          }

          jdouble Rotation::distance(const Rotation & a0, const Rotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_9887de54c3d14021], a0.this$, a1.this$);
          }

          jdouble Rotation::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_456d9a2f64d6b28d]);
          }

          JArray< jdouble > Rotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAngles_32000a56afaeda36], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxis_4856575fbf5ac2cf], a0.this$));
          }

          JArray< JArray< jdouble > > Rotation::getMatrix() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getMatrix_43de1192439efa92]));
          }

          jdouble Rotation::getQ0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ0_456d9a2f64d6b28d]);
          }

          jdouble Rotation::getQ1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ1_456d9a2f64d6b28d]);
          }

          jdouble Rotation::getQ2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ2_456d9a2f64d6b28d]);
          }

          jdouble Rotation::getQ3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ3_456d9a2f64d6b28d]);
          }

          Rotation Rotation::revert() const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_revert_24d2e432e376f9a0]));
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
        namespace threed {
          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_Rotation_getAngle(t_Rotation *self);
          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg);
          static PyObject *t_Rotation_getMatrix(t_Rotation *self);
          static PyObject *t_Rotation_getQ0(t_Rotation *self);
          static PyObject *t_Rotation_getQ1(t_Rotation *self);
          static PyObject *t_Rotation_getQ2(t_Rotation *self);
          static PyObject *t_Rotation_getQ3(t_Rotation *self);
          static PyObject *t_Rotation_revert(t_Rotation *self);
          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data);
          static PyGetSetDef t_Rotation__fields_[] = {
            DECLARE_GET_FIELD(t_Rotation, angle),
            DECLARE_GET_FIELD(t_Rotation, matrix),
            DECLARE_GET_FIELD(t_Rotation, q0),
            DECLARE_GET_FIELD(t_Rotation, q1),
            DECLARE_GET_FIELD(t_Rotation, q2),
            DECLARE_GET_FIELD(t_Rotation, q3),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Rotation__methods_[] = {
            DECLARE_METHOD(t_Rotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Rotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, getAxis, METH_O),
            DECLARE_METHOD(t_Rotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Rotation)[] = {
            { Py_tp_methods, t_Rotation__methods_ },
            { Py_tp_init, (void *) t_Rotation_init_ },
            { Py_tp_getset, t_Rotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Rotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Rotation, t_Rotation, Rotation);

          void t_Rotation::install(PyObject *module)
          {
            installType(&PY_TYPE(Rotation), &PY_TYPE_DEF(Rotation), module, "Rotation", 0);
          }

          void t_Rotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "class_", make_descriptor(Rotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "wrapfn_", make_descriptor(t_Rotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "boxfn_", make_descriptor(boxObject));
            env->getClass(Rotation::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "IDENTITY", make_descriptor(t_Rotation::wrap_Object(*Rotation::IDENTITY)));
          }

          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Rotation::initializeClass, 1)))
              return NULL;
            return t_Rotation::wrap_Object(Rotation(((t_Rotation *) arg)->object.this$));
          }
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Rotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);
                jdouble a1;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "[[DD", &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = Rotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "KKDDD", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jboolean a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "DDDDZ", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.compose(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.composeInverse(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            Rotation a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Rotation::initializeClass, Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Rotation::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAngle(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_Rotation_getMatrix(t_Rotation *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_getQ0(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ1(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ2(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ3(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_revert(t_Rotation *self)
          {
            Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Rotation::wrap_Object(result);
          }

          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ3());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleArrayConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_7d4f41c65056f174] = env->getMethodID(cls, "accept", "(I[D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleArrayConsumer::accept(jint a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_7d4f41c65056f174], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleArrayConsumer, t_ParseToken$IndexedDoubleArrayConsumer, ParseToken$IndexedDoubleArrayConsumer);

            void t_ParseToken$IndexedDoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer), module, "ParseToken$IndexedDoubleArrayConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleArrayConsumer::wrap_Object(ParseToken$IndexedDoubleArrayConsumer(((t_ParseToken$IndexedDoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args)
            {
              jint a0;
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "I[D", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
          mids$[mid_value_4b742fe429c22ba8] = env->getMethodID(cls, "value", "([D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > MultivariateVectorFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_4b742fe429c22ba8], a0.this$));
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
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$SatelliteEphemeris::class$ = NULL;
        jmethodID *EphemerisFile$SatelliteEphemeris::mids$ = NULL;
        bool EphemerisFile$SatelliteEphemeris::live$ = false;

        jclass EphemerisFile$SatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$SatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_e29a1189b47e1aad] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ecec515dedcdf4ce] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String EphemerisFile$SatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        jdouble EphemerisFile$SatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_e29a1189b47e1aad]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ecec515dedcdf4ce], a0.this$));
        }

        ::java::util::List EphemerisFile$SatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStop() const
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
      namespace general {
        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyGetSetDef t_EphemerisFile$SatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$SatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$SatelliteEphemeris)[] = {
          { Py_tp_methods, t_EphemerisFile$SatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$SatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$SatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$SatelliteEphemeris, t_EphemerisFile$SatelliteEphemeris, EphemerisFile$SatelliteEphemeris);
        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_Object(const EphemerisFile$SatelliteEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile$SatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$SatelliteEphemeris), &PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris), module, "EphemerisFile$SatelliteEphemeris", 0);
        }

        void t_EphemerisFile$SatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "class_", make_descriptor(EphemerisFile$SatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "wrapfn_", make_descriptor(t_EphemerisFile$SatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$SatelliteEphemeris::wrap_Object(EphemerisFile$SatelliteEphemeris(((t_EphemerisFile$SatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroPhaseModifier::class$ = NULL;
          jmethodID *ShapiroPhaseModifier::mids$ = NULL;
          bool ShapiroPhaseModifier::live$ = false;

          jclass ShapiroPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroPhaseModifier::ShapiroPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self);
          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroPhaseModifier, t_ShapiroPhaseModifier, ShapiroPhaseModifier);

          void t_ShapiroPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroPhaseModifier), &PY_TYPE_DEF(ShapiroPhaseModifier), module, "ShapiroPhaseModifier", 0);
          }

          void t_ShapiroPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "class_", make_descriptor(ShapiroPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroPhaseModifier::wrap_Object(ShapiroPhaseModifier(((t_ShapiroPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data)
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
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/util/Pair.h"
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
            mids$[mid_init$_cea2a98fe3ea59d1] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_createPropagators_ba27c0a798c66bed] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_getEvaluationsCount_f2f64475e4580546] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_f2f64475e4580546] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedOrbitalParametersDriversForBuilder_ace385640a2723ff] = env->getMethodID(cls, "getSelectedOrbitalParametersDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_e470b6d9e0d979db] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_setEvaluationsCounter_33deb2f2de655904] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_33deb2f2de655904] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f8e49be09d1e1247] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");
            mids$[mid_configureHarvester_f80d2a02173b5959] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_9e53ad80ae898100] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractBatchLSModel::AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cea2a98fe3ea59d1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::Propagator > AbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_createPropagators_ba27c0a798c66bed], a0.this$));
        }

        void AbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93], a0, a1.this$);
        }

        jint AbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_f2f64475e4580546]);
        }

        jint AbstractBatchLSModel::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_f2f64475e4580546]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedOrbitalParametersDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedOrbitalParametersDriversForBuilder_ace385640a2723ff], a0));
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff], a0));
        }

        jboolean AbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForwardPropagation_e470b6d9e0d979db]);
        }

        void AbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEvaluationsCounter_33deb2f2de655904], a0.this$);
        }

        void AbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIterationsCounter_33deb2f2de655904], a0.this$);
        }

        ::org::hipparchus::util::Pair AbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f8e49be09d1e1247], a0.this$));
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
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaThreeModel::class$ = NULL;
          jmethodID *ViennaThreeModel::mids$ = NULL;
          bool ViennaThreeModel::live$ = false;

          jclass ViennaThreeModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaThreeModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_3a8146127c0aa9ca] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_c76a0fefc1748455] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_computeZenithDelay_99889d5cecaebf5d] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8146127c0aa9ca, a0.this$, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_c76a0fefc1748455], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_99889d5cecaebf5d], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaThreeModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          JArray< jdouble > ViennaThreeModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement ViennaThreeModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble ViennaThreeModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self);
          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data);
          static PyGetSetDef t_ViennaThreeModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaThreeModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaThreeModel__methods_[] = {
            DECLARE_METHOD(t_ViennaThreeModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaThreeModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaThreeModel)[] = {
            { Py_tp_methods, t_ViennaThreeModel__methods_ },
            { Py_tp_init, (void *) t_ViennaThreeModel_init_ },
            { Py_tp_getset, t_ViennaThreeModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaThreeModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaThreeModel, t_ViennaThreeModel, ViennaThreeModel);

          void t_ViennaThreeModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaThreeModel), &PY_TYPE_DEF(ViennaThreeModel), module, "ViennaThreeModel", 0);
          }

          void t_ViennaThreeModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "class_", make_descriptor(ViennaThreeModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "wrapfn_", make_descriptor(t_ViennaThreeModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaThreeModel::initializeClass, 1)))
              return NULL;
            return t_ViennaThreeModel::wrap_Object(ViennaThreeModel(((t_ViennaThreeModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaThreeModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1));
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
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1, a2));
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

          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args)
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

          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Data::class$ = NULL;
              jmethodID *SsrIgm04Data::mids$ = NULL;
              bool SsrIgm04Data::live$ = false;

              jclass SsrIgm04Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getHighRateClockCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getHighRateClockCorrection", "()D");
                  mids$[mid_setHighRateClockCorrection_77e0f9a1f260e2e5] = env->getMethodID(cls, "setHighRateClockCorrection", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Data::SsrIgm04Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble SsrIgm04Data::getHighRateClockCorrection() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHighRateClockCorrection_456d9a2f64d6b28d]);
              }

              void SsrIgm04Data::setHighRateClockCorrection(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHighRateClockCorrection_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self);
              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg);
              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data);
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm04Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm04Data, highRateClockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, getHighRateClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm04Data, setHighRateClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Data)[] = {
                { Py_tp_methods, t_SsrIgm04Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Data_init_ },
                { Py_tp_getset, t_SsrIgm04Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Data, t_SsrIgm04Data, SsrIgm04Data);

              void t_SsrIgm04Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Data), &PY_TYPE_DEF(SsrIgm04Data), module, "SsrIgm04Data", 0);
              }

              void t_SsrIgm04Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "class_", make_descriptor(SsrIgm04Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "wrapfn_", make_descriptor(t_SsrIgm04Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Data::wrap_Object(SsrIgm04Data(((t_SsrIgm04Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Data object((jobject) NULL);

                INT_CALL(object = SsrIgm04Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHighRateClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHighRateClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHighRateClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "highRateClockCorrection", arg);
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_9aa7950fcf3dec6b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeShiftable::PythonTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeShiftable::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_a27fc9afd27e559d]);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadata::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadata::mids$ = NULL;
              bool OrbitManeuverHistoryMetadata::live$ = false;
              ::org::orekit::files::ccsds::definitions::DutyCycleType *OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE = NULL;

              jclass OrbitManeuverHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getDcBodyFrame_c39ec70cc3f195d1] = env->getMethodID(cls, "getDcBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
                  mids$[mid_getDcBodyTrigger_17a952530a808943] = env->getMethodID(cls, "getDcBodyTrigger", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcExecStart_aaa854c403487cf3] = env->getMethodID(cls, "getDcExecStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcExecStop_aaa854c403487cf3] = env->getMethodID(cls, "getDcExecStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcMaxCycles_f2f64475e4580546] = env->getMethodID(cls, "getDcMaxCycles", "()I");
                  mids$[mid_getDcMinCycles_f2f64475e4580546] = env->getMethodID(cls, "getDcMinCycles", "()I");
                  mids$[mid_getDcPhaseStartAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getDcPhaseStartAngle", "()D");
                  mids$[mid_getDcPhaseStopAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getDcPhaseStopAngle", "()D");
                  mids$[mid_getDcRefDir_17a952530a808943] = env->getMethodID(cls, "getDcRefDir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcRefTime_aaa854c403487cf3] = env->getMethodID(cls, "getDcRefTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcTimePulseDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDcTimePulseDuration", "()D");
                  mids$[mid_getDcTimePulsePeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getDcTimePulsePeriod", "()D");
                  mids$[mid_getDcType_91b602a2b98c841d] = env->getMethodID(cls, "getDcType", "()Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
                  mids$[mid_getDcWindowClose_aaa854c403487cf3] = env->getMethodID(cls, "getDcWindowClose", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcWindowOpen_aaa854c403487cf3] = env->getMethodID(cls, "getDcWindowOpen", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getGravitationalAssist_78375ee64056f203] = env->getMethodID(cls, "getGravitationalAssist", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getManBasis_d862fe28292c9b9b] = env->getMethodID(cls, "getManBasis", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_getManBasisID_0090f7797e403f43] = env->getMethodID(cls, "getManBasisID", "()Ljava/lang/String;");
                  mids$[mid_getManComposition_a6156df500549a58] = env->getMethodID(cls, "getManComposition", "()Ljava/util/List;");
                  mids$[mid_getManDeviceID_0090f7797e403f43] = env->getMethodID(cls, "getManDeviceID", "()Ljava/lang/String;");
                  mids$[mid_getManFrameEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getManFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManID_0090f7797e403f43] = env->getMethodID(cls, "getManID", "()Ljava/lang/String;");
                  mids$[mid_getManNextEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getManNextEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManNextID_0090f7797e403f43] = env->getMethodID(cls, "getManNextID", "()Ljava/lang/String;");
                  mids$[mid_getManPredSource_0090f7797e403f43] = env->getMethodID(cls, "getManPredSource", "()Ljava/lang/String;");
                  mids$[mid_getManPrevEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getManPrevEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManPrevID_0090f7797e403f43] = env->getMethodID(cls, "getManPrevID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_a6156df500549a58] = env->getMethodID(cls, "getManPurpose", "()Ljava/util/List;");
                  mids$[mid_getManReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getManReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getManUnits_a6156df500549a58] = env->getMethodID(cls, "getManUnits", "()Ljava/util/List;");
                  mids$[mid_setDcBodyFrame_9299ac438623e4ce] = env->getMethodID(cls, "setDcBodyFrame", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;)V");
                  mids$[mid_setDcBodyTrigger_a94622407b723689] = env->getMethodID(cls, "setDcBodyTrigger", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcExecStart_e82d68cd9f886886] = env->getMethodID(cls, "setDcExecStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcExecStop_e82d68cd9f886886] = env->getMethodID(cls, "setDcExecStop", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcMaxCycles_0a2a1ac2721c0336] = env->getMethodID(cls, "setDcMaxCycles", "(I)V");
                  mids$[mid_setDcMinCycles_0a2a1ac2721c0336] = env->getMethodID(cls, "setDcMinCycles", "(I)V");
                  mids$[mid_setDcPhaseStartAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDcPhaseStartAngle", "(D)V");
                  mids$[mid_setDcPhaseStopAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDcPhaseStopAngle", "(D)V");
                  mids$[mid_setDcRefDir_a94622407b723689] = env->getMethodID(cls, "setDcRefDir", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcRefTime_e82d68cd9f886886] = env->getMethodID(cls, "setDcRefTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcTimePulseDuration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDcTimePulseDuration", "(D)V");
                  mids$[mid_setDcTimePulsePeriod_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDcTimePulsePeriod", "(D)V");
                  mids$[mid_setDcType_290537ac8c0c16a7] = env->getMethodID(cls, "setDcType", "(Lorg/orekit/files/ccsds/definitions/DutyCycleType;)V");
                  mids$[mid_setDcWindowClose_e82d68cd9f886886] = env->getMethodID(cls, "setDcWindowClose", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcWindowOpen_e82d68cd9f886886] = env->getMethodID(cls, "setDcWindowOpen", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setGravitationalAssist_4937bc9292f008b1] = env->getMethodID(cls, "setGravitationalAssist", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setManBasis_34e00ce846eac6f3] = env->getMethodID(cls, "setManBasis", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;)V");
                  mids$[mid_setManBasisID_e939c6558ae8d313] = env->getMethodID(cls, "setManBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setManComposition_65de9727799c5641] = env->getMethodID(cls, "setManComposition", "(Ljava/util/List;)V");
                  mids$[mid_setManDeviceID_e939c6558ae8d313] = env->getMethodID(cls, "setManDeviceID", "(Ljava/lang/String;)V");
                  mids$[mid_setManFrameEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setManFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManID_e939c6558ae8d313] = env->getMethodID(cls, "setManID", "(Ljava/lang/String;)V");
                  mids$[mid_setManNextEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setManNextEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManNextID_e939c6558ae8d313] = env->getMethodID(cls, "setManNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPredSource_e939c6558ae8d313] = env->getMethodID(cls, "setManPredSource", "(Ljava/lang/String;)V");
                  mids$[mid_setManPrevEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setManPrevEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setManPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_65de9727799c5641] = env->getMethodID(cls, "setManPurpose", "(Ljava/util/List;)V");
                  mids$[mid_setManReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setManReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setManUnits_65de9727799c5641] = env->getMethodID(cls, "setManUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_DC_TYPE = new ::org::orekit::files::ccsds::definitions::DutyCycleType(env->getStaticObjectField(cls, "DEFAULT_DC_TYPE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistoryMetadata::OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

              ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame OrbitManeuverHistoryMetadata::getDcBodyFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_getDcBodyFrame_c39ec70cc3f195d1]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcBodyTrigger() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcBodyTrigger_17a952530a808943]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStop_aaa854c403487cf3]));
              }

              jint OrbitManeuverHistoryMetadata::getDcMaxCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMaxCycles_f2f64475e4580546]);
              }

              jint OrbitManeuverHistoryMetadata::getDcMinCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMinCycles_f2f64475e4580546]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStartAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStartAngle_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStopAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStopAngle_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcRefDir() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcRefDir_17a952530a808943]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcRefTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcRefTime_aaa854c403487cf3]));
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulseDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulseDuration_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulsePeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulsePeriod_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::definitions::DutyCycleType OrbitManeuverHistoryMetadata::getDcType() const
              {
                return ::org::orekit::files::ccsds::definitions::DutyCycleType(env->callObjectMethod(this$, mids$[mid_getDcType_91b602a2b98c841d]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowClose() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowClose_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowOpen() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowOpen_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade OrbitManeuverHistoryMetadata::getGravitationalAssist() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getGravitationalAssist_78375ee64056f203]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis OrbitManeuverHistoryMetadata::getManBasis() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis(env->callObjectMethod(this$, mids$[mid_getManBasis_d862fe28292c9b9b]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManBasisID_0090f7797e403f43]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManComposition() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManComposition_a6156df500549a58]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManDeviceID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManDeviceID_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManFrameEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManID_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManNextEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManNextEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManNextID_0090f7797e403f43]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPredSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPredSource_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManPrevEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManPrevEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPrevID_0090f7797e403f43]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManPurpose() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManPurpose_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitManeuverHistoryMetadata::getManReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getManReferenceFrame_aa70fdb14ae9305f]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManUnits_a6156df500549a58]));
              }

              void OrbitManeuverHistoryMetadata::setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyFrame_9299ac438623e4ce], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyTrigger_a94622407b723689], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStart_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStop(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStop_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcMaxCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMaxCycles_0a2a1ac2721c0336], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcMinCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMinCycles_0a2a1ac2721c0336], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStartAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStartAngle_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStopAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStopAngle_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefDir_a94622407b723689], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcRefTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefTime_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulseDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulseDuration_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulsePeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulsePeriod_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcType_290537ac8c0c16a7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowClose(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowClose_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowOpen(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowOpen_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravitationalAssist_4937bc9292f008b1], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasis_34e00ce846eac6f3], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasisID_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManComposition(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManComposition_65de9727799c5641], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManDeviceID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManDeviceID_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManFrameEpoch_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManID_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextEpoch_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextID_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPredSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPredSource_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevEpoch_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevID_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPurpose(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_65de9727799c5641], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManUnits_65de9727799c5641], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyTrigger),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStart),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStop),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMaxCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMinCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStartAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStopAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefDir),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefTime),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulseDuration),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulsePeriod),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcType),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowClose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowOpen),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, gravitationalAssist),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasis),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasisID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manComposition),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manDeviceID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPredSource),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPurpose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyTrigger, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStart, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMaxCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMinCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStartAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStopAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefDir, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefTime, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulseDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulsePeriod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowClose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowOpen, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getGravitationalAssist, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManComposition, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManDeviceID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPredSource, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyTrigger, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStart, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStop, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMaxCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMinCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStartAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStopAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefDir, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefTime, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulseDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulsePeriod, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcType, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowClose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowOpen, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setGravitationalAssist, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasis, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasisID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManComposition, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManDeviceID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPredSource, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPurpose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManUnits, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadata, t_OrbitManeuverHistoryMetadata, OrbitManeuverHistoryMetadata);

              void t_OrbitManeuverHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadata), &PY_TYPE_DEF(OrbitManeuverHistoryMetadata), module, "OrbitManeuverHistoryMetadata", 0);
              }

              void t_OrbitManeuverHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "class_", make_descriptor(OrbitManeuverHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "DEFAULT_DC_TYPE", make_descriptor(::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(*OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadata::wrap_Object(OrbitManeuverHistoryMetadata(((t_OrbitManeuverHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitManeuverHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitManeuverHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMinCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(ManeuverFieldType));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManDeviceID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPredSource());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyTrigger(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyTrigger", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStart", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStop", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMaxCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMaxCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMinCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMinCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStartAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStartAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStopAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStopAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefDir(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefDir", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefTime", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulseDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulseDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulsePeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulsePeriod", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_DutyCycleType::parameters_))
                {
                  OBJ_CALL(self->object.setDcType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcType", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowClose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowClose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowOpen(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowOpen", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGravitationalAssist(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravitationalAssist", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::parameters_))
                {
                  OBJ_CALL(self->object.setManBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManComposition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManComposition", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManDeviceID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManDeviceID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManNextEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPredSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPredSource", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManPrevEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitManeuverHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyTrigger(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyTrigger", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStart", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStop", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMaxCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMaxCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMinCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMinCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMinCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStartAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStartAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStopAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStopAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefDir(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefDir", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefTime", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulseDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulseDuration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulsePeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulsePeriod", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcType", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowClose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowClose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowOpen(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowOpen", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGravitationalAssist(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gravitationalAssist", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasisID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManComposition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manComposition", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManDeviceID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManDeviceID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manDeviceID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManNextEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPredSource());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPredSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPredSource", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPrevEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manUnits", arg);
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
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Mean::class$ = NULL;
          jmethodID *Mean::mids$ = NULL;
          bool Mean::live$ = false;

          jclass Mean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Mean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8ac58f304db3fcf7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");
              mids$[mid_aggregate_ebcb692cb756ea65] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Mean;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_116c2c8af939e534] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Mean;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_5d62632feda90f27] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Mean::Mean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Mean::Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_8ac58f304db3fcf7, a0.this$)) {}

          void Mean::aggregate(const Mean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_ebcb692cb756ea65], a0.this$);
          }

          void Mean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Mean Mean::copy() const
          {
            return Mean(env->callObjectMethod(this$, mids$[mid_copy_116c2c8af939e534]));
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_5d62632feda90f27], a0.this$, a1.this$, a2, a3);
          }

          jlong Mean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Mean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Mean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg);
          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_get__n(t_Mean *self, void *data);
          static PyObject *t_Mean_get__result(t_Mean *self, void *data);
          static PyGetSetDef t_Mean__fields_[] = {
            DECLARE_GET_FIELD(t_Mean, n),
            DECLARE_GET_FIELD(t_Mean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mean__methods_[] = {
            DECLARE_METHOD(t_Mean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, aggregate, METH_O),
            DECLARE_METHOD(t_Mean, clear, METH_VARARGS),
            DECLARE_METHOD(t_Mean, copy, METH_VARARGS),
            DECLARE_METHOD(t_Mean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getN, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Mean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mean)[] = {
            { Py_tp_methods, t_Mean__methods_ },
            { Py_tp_init, (void *) t_Mean_init_ },
            { Py_tp_getset, t_Mean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Mean, t_Mean, Mean);

          void t_Mean::install(PyObject *module)
          {
            installType(&PY_TYPE(Mean), &PY_TYPE_DEF(Mean), module, "Mean", 0);
          }

          void t_Mean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "class_", make_descriptor(Mean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "wrapfn_", make_descriptor(t_Mean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mean::initializeClass, 1)))
              return NULL;
            return t_Mean::wrap_Object(Mean(((t_Mean *) arg)->object.this$));
          }
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Mean object((jobject) NULL);

                INT_CALL(object = Mean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::FirstMoment a0((jobject) NULL);
                Mean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::FirstMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Mean(a0));
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

          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg)
          {
            Mean a0((jobject) NULL);

            if (!parseArg(arg, "k", Mean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args)
          {
            Mean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Mean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Mean_get__n(t_Mean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Mean_get__result(t_Mean *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
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
          mids$[mid_computeDerivatives_cecb12bc6567c472] = env->getMethodID(cls, "computeDerivatives", "(D[D[D[D)[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_4d2050225033d346] = env->getMethodID(cls, "init", "(D[D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondaryODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_cecb12bc6567c472], a0, a1.this$, a2.this$, a3.this$));
      }

      jint SecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void SecondaryODE::init(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_4d2050225033d346], a0, a1.this$, a2.this$, a3);
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
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *PearsonsCorrelation::class$ = NULL;
        jmethodID *PearsonsCorrelation::mids$ = NULL;
        bool PearsonsCorrelation::live$ = false;

        jclass PearsonsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/PearsonsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_a947224c4f5ea4e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/correlation/Covariance;)V");
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_f0469298b36930cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;I)V");
            mids$[mid_computeCorrelationMatrix_d983e368b64b23a3] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_1ce76fb6ff382da9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_covarianceToCorrelation_e00cd33aedcc5bd0] = env->getMethodID(cls, "covarianceToCorrelation", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationPValues_7116bbecdd8ceb21] = env->getMethodID(cls, "getCorrelationPValues", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationStandardErrors_7116bbecdd8ceb21] = env->getMethodID(cls, "getCorrelationStandardErrors", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PearsonsCorrelation::PearsonsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        PearsonsCorrelation::PearsonsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a947224c4f5ea4e8, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0469298b36930cd, a0.this$, a1)) {}

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_d983e368b64b23a3], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0], a0.this$));
        }

        jdouble PearsonsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_covarianceToCorrelation_e00cd33aedcc5bd0], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationPValues() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationPValues_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationStandardErrors() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationStandardErrors_7116bbecdd8ceb21]));
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
        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data);
        static PyGetSetDef t_PearsonsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationPValues),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationStandardErrors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PearsonsCorrelation__methods_[] = {
          DECLARE_METHOD(t_PearsonsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, covarianceToCorrelation, METH_O),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationPValues, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationStandardErrors, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PearsonsCorrelation)[] = {
          { Py_tp_methods, t_PearsonsCorrelation__methods_ },
          { Py_tp_init, (void *) t_PearsonsCorrelation_init_ },
          { Py_tp_getset, t_PearsonsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PearsonsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PearsonsCorrelation, t_PearsonsCorrelation, PearsonsCorrelation);

        void t_PearsonsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(PearsonsCorrelation), &PY_TYPE_DEF(PearsonsCorrelation), module, "PearsonsCorrelation", 0);
        }

        void t_PearsonsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "class_", make_descriptor(PearsonsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "wrapfn_", make_descriptor(t_PearsonsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PearsonsCorrelation::initializeClass, 1)))
            return NULL;
          return t_PearsonsCorrelation::wrap_Object(PearsonsCorrelation(((t_PearsonsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PearsonsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PearsonsCorrelation object((jobject) NULL);

              INT_CALL(object = PearsonsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::correlation::Covariance a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::correlation::Covariance::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jint a1;
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = PearsonsCorrelation(a0, a1));
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

        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args)
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

        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args)
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

        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.covarianceToCorrelation(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "covarianceToCorrelation", arg);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1Field::mids$ = NULL;
        bool FieldUnivariateDerivative1Field::live$ = false;

        jclass FieldUnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_a84d235aa48b245c] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative1Field_efb96448b31b3d1c] = env->getStaticMethodID(cls, "getUnivariateDerivative1Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getZero_a84d235aa48b245c] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_a84d235aa48b245c]));
        }

        ::java::lang::Class FieldUnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        FieldUnivariateDerivative1Field FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative1Field_efb96448b31b3d1c], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_a84d235aa48b245c]));
        }

        jint FieldUnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getUnivariateDerivative1Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1Field, t_FieldUnivariateDerivative1Field, FieldUnivariateDerivative1Field);
        PyObject *t_FieldUnivariateDerivative1Field::wrap_Object(const FieldUnivariateDerivative1Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1Field), &PY_TYPE_DEF(FieldUnivariateDerivative1Field), module, "FieldUnivariateDerivative1Field", 0);
        }

        void t_FieldUnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "class_", make_descriptor(FieldUnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1Field::wrap_Object(FieldUnivariateDerivative1Field(((t_FieldUnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(a0));
            return t_FieldUnivariateDerivative1Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative1Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer$Optimum::class$ = NULL;
            jmethodID *LeastSquaresOptimizer$Optimum::mids$ = NULL;
            bool LeastSquaresOptimizer$Optimum::live$ = false;

            jclass LeastSquaresOptimizer$Optimum::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
                mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
                mids$[mid_of_6e212a68efb771cd] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LeastSquaresOptimizer$Optimum::getEvaluations() const
            {
              return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
            }

            jint LeastSquaresOptimizer$Optimum::getIterations() const
            {
              return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
            }

            LeastSquaresOptimizer$Optimum LeastSquaresOptimizer$Optimum::of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return LeastSquaresOptimizer$Optimum(env->callStaticObjectMethod(cls, mids$[mid_of_6e212a68efb771cd], a0.this$, a1, a2));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyGetSetDef t_LeastSquaresOptimizer$Optimum__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, evaluations),
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, iterations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresOptimizer$Optimum__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getEvaluations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getIterations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, of, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer$Optimum)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer$Optimum__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresOptimizer$Optimum__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer$Optimum)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer$Optimum, t_LeastSquaresOptimizer$Optimum, LeastSquaresOptimizer$Optimum);

            void t_LeastSquaresOptimizer$Optimum::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer$Optimum), &PY_TYPE_DEF(LeastSquaresOptimizer$Optimum), module, "LeastSquaresOptimizer$Optimum", 0);
            }

            void t_LeastSquaresOptimizer$Optimum::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "class_", make_descriptor(LeastSquaresOptimizer$Optimum::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer$Optimum::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer$Optimum::wrap_Object(LeastSquaresOptimizer$Optimum(((t_LeastSquaresOptimizer$Optimum *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getEvaluations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIterations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              jint a1;
              jint a2;
              LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArgs(args, "kII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum::of(a0, a1, a2));
                return t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "of", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getEvaluations());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIterations());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Euclidean3D::class$ = NULL;
          jmethodID *Euclidean3D::mids$ = NULL;
          bool Euclidean3D::live$ = false;

          jclass Euclidean3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Euclidean3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_96e485bb1f0f9189] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/threed/Euclidean3D;");
              mids$[mid_getSubSpace_715413d689596e63] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean3D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          Euclidean3D Euclidean3D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean3D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_96e485bb1f0f9189]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Euclidean2D Euclidean3D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Euclidean2D(env->callObjectMethod(this$, mids$[mid_getSubSpace_715413d689596e63]));
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
        namespace threed {
          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data);
          static PyGetSetDef t_Euclidean3D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean3D, dimension),
            DECLARE_GET_FIELD(t_Euclidean3D, instance),
            DECLARE_GET_FIELD(t_Euclidean3D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean3D__methods_[] = {
            DECLARE_METHOD(t_Euclidean3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean3D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean3D)[] = {
            { Py_tp_methods, t_Euclidean3D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean3D, t_Euclidean3D, Euclidean3D);

          void t_Euclidean3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean3D), &PY_TYPE_DEF(Euclidean3D), module, "Euclidean3D", 0);
          }

          void t_Euclidean3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "class_", make_descriptor(Euclidean3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "wrapfn_", make_descriptor(t_Euclidean3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean3D::initializeClass, 1)))
              return NULL;
            return t_Euclidean3D::wrap_Object(Euclidean3D(((t_Euclidean3D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type)
          {
            Euclidean3D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Euclidean3D::getInstance());
            return t_Euclidean3D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data)
          {
            Euclidean3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean3D::wrap_Object(value);
          }

          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
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
            mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapArrayToState_4ca0807e8dab0b83] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapArrayToState_934fdcb956880b35] = env->getMethodID(cls, "mapArrayToState", "(D[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapDateToDouble_e912d21057defe63] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_mapDoubleToDate_a76f1ca2cc1b76e5] = env->getMethodID(cls, "mapDoubleToDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapDoubleToDate_cb1bb8e47dbf2caf] = env->getMethodID(cls, "mapDoubleToDate", "(DLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapStateToArray_32d762d958cb6960] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider StateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
        }

        ::org::orekit::frames::Frame StateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        jdouble StateMapper::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::OrbitType StateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::orbits::PositionAngleType StateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_4ca0807e8dab0b83], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_934fdcb956880b35], a0, a1.this$, a2.this$, a3.this$));
        }

        jdouble StateMapper::mapDateToDouble(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mapDateToDouble_e912d21057defe63], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_a76f1ca2cc1b76e5], a0));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_cb1bb8e47dbf2caf], a0, a1.this$));
        }

        void StateMapper::mapStateToArray(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_32d762d958cb6960], a0.this$, a1.this$, a2.this$);
        }

        void StateMapper::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *ShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *ShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool ShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass ShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_9787c4eff1570d3f] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/AbsoluteDate;[D)V");
                mids$[mid_clearHistory_7ae3461a92a43152] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_e586dea4c0bad69b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ShortPeriodicsInterpolatedCoefficient::ShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            void ShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_9787c4eff1570d3f], a0.this$, a1.this$);
            }

            void ShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_7ae3461a92a43152]);
            }

            JArray< jdouble > ShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e586dea4c0bad69b], a0.this$));
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
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);

            static PyMethodDef t_ShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_ShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_ShortPeriodicsInterpolatedCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodicsInterpolatedCoefficient, t_ShortPeriodicsInterpolatedCoefficient, ShortPeriodicsInterpolatedCoefficient);

            void t_ShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient), module, "ShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_ShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(ShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_ShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodicsInterpolatedCoefficient::wrap_Object(ShortPeriodicsInterpolatedCoefficient(((t_ShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = ShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisData::class$ = NULL;
              jmethodID *RtcmEphemerisData::mids$ = NULL;
              bool RtcmEphemerisData::live$ = false;

              jclass RtcmEphemerisData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAccuracyProvider_7c3f76c5d8851c5f] = env->getMethodID(cls, "getAccuracyProvider", "()Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;");
                  mids$[mid_getSatelliteID_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setAccuracyProvider_97ba883ed00d8815] = env->getMethodID(cls, "setAccuracyProvider", "(Lorg/orekit/gnss/metric/messages/common/AccuracyProvider;)V");
                  mids$[mid_setSatelliteID_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisData::RtcmEphemerisData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::gnss::metric::messages::common::AccuracyProvider RtcmEphemerisData::getAccuracyProvider() const
              {
                return ::org::orekit::gnss::metric::messages::common::AccuracyProvider(env->callObjectMethod(this$, mids$[mid_getAccuracyProvider_7c3f76c5d8851c5f]));
              }

              jint RtcmEphemerisData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_f2f64475e4580546]);
              }

              void RtcmEphemerisData::setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccuracyProvider_97ba883ed00d8815], a0.this$);
              }

              void RtcmEphemerisData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_0a2a1ac2721c0336], a0);
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
              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self);
              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg);
              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data);
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmEphemerisData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, accuracyProvider),
                DECLARE_GETSET_FIELD(t_RtcmEphemerisData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisData__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisData, getAccuracyProvider, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmEphemerisData, setAccuracyProvider, METH_O),
                DECLARE_METHOD(t_RtcmEphemerisData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisData)[] = {
                { Py_tp_methods, t_RtcmEphemerisData__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisData_init_ },
                { Py_tp_getset, t_RtcmEphemerisData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisData, t_RtcmEphemerisData, RtcmEphemerisData);

              void t_RtcmEphemerisData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisData), &PY_TYPE_DEF(RtcmEphemerisData), module, "RtcmEphemerisData", 0);
              }

              void t_RtcmEphemerisData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "class_", make_descriptor(RtcmEphemerisData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "wrapfn_", make_descriptor(t_RtcmEphemerisData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisData::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisData::wrap_Object(RtcmEphemerisData(((t_RtcmEphemerisData *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmEphemerisData_init_(t_RtcmEphemerisData *self, PyObject *args, PyObject *kwds)
              {
                RtcmEphemerisData object((jobject) NULL);

                INT_CALL(object = RtcmEphemerisData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmEphemerisData_getAccuracyProvider(t_RtcmEphemerisData *self)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(result);
              }

              static PyObject *t_RtcmEphemerisData_getSatelliteID(t_RtcmEphemerisData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmEphemerisData_setAccuracyProvider(t_RtcmEphemerisData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAccuracyProvider(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccuracyProvider", arg);
                return NULL;
              }

              static PyObject *t_RtcmEphemerisData_setSatelliteID(t_RtcmEphemerisData *self, PyObject *arg)
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

              static PyObject *t_RtcmEphemerisData_get__accuracyProvider(t_RtcmEphemerisData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccuracyProvider());
                return ::org::orekit::gnss::metric::messages::common::t_AccuracyProvider::wrap_Object(value);
              }
              static int t_RtcmEphemerisData_set__accuracyProvider(t_RtcmEphemerisData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::AccuracyProvider value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::AccuracyProvider::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccuracyProvider(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accuracyProvider", arg);
                return -1;
              }

              static PyObject *t_RtcmEphemerisData_get__satelliteID(t_RtcmEphemerisData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmEphemerisData_set__satelliteID(t_RtcmEphemerisData *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractConstituentParser::class$ = NULL;
            jmethodID *PythonAbstractConstituentParser::mids$ = NULL;
            bool PythonAbstractConstituentParser::live$ = false;

            jclass PythonAbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_3d5ffc54bfa065da] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_2764986a35b07524] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractConstituentParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractConstituentParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractConstituentParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args);
            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self);
            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data);
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data);
            static PyGetSetDef t_PythonAbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstituentParser)[] = {
              { Py_tp_methods, t_PythonAbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractConstituentParser, t_PythonAbstractConstituentParser, PythonAbstractConstituentParser);
            PyObject *t_PythonAbstractConstituentParser::wrap_Object(const PythonAbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractConstituentParser), &PY_TYPE_DEF(PythonAbstractConstituentParser), module, "PythonAbstractConstituentParser", 1);
            }

            void t_PythonAbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "class_", make_descriptor(PythonAbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "wrapfn_", make_descriptor(t_PythonAbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractConstituentParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAbstractConstituentParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonAbstractConstituentParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAbstractConstituentParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAbstractConstituentParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAbstractConstituentParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAbstractConstituentParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractConstituentParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractConstituentParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractConstituentParser::wrap_Object(PythonAbstractConstituentParser(((t_PythonAbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data)
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
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmHeader::class$ = NULL;
              jmethodID *SsrIgmHeader::mids$ = NULL;
              bool SsrIgmHeader::live$ = false;

              jclass SsrIgmHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfSatellites_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_setNumberOfSatellites_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmHeader::SsrIgmHeader() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIgmHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_f2f64475e4580546]);
              }

              void SsrIgmHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_0a2a1ac2721c0336], a0);
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
              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self);
              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg);
              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data);
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmHeader, numberOfSatellites),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmHeader__methods_[] = {
                DECLARE_METHOD(t_SsrIgmHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmHeader, setNumberOfSatellites, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmHeader)[] = {
                { Py_tp_methods, t_SsrIgmHeader__methods_ },
                { Py_tp_init, (void *) t_SsrIgmHeader_init_ },
                { Py_tp_getset, t_SsrIgmHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgmHeader, t_SsrIgmHeader, SsrIgmHeader);

              void t_SsrIgmHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmHeader), &PY_TYPE_DEF(SsrIgmHeader), module, "SsrIgmHeader", 0);
              }

              void t_SsrIgmHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "class_", make_descriptor(SsrIgmHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "wrapfn_", make_descriptor(t_SsrIgmHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmHeader::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmHeader::wrap_Object(SsrIgmHeader(((t_SsrIgmHeader *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmHeader object((jobject) NULL);

                INT_CALL(object = SsrIgmHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
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
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader$Parser::mids$ = NULL;
      bool UTCTAIOffsetsLoader$Parser::live$ = false;

      jclass UTCTAIOffsetsLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_90de289641581563], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIOffsetsLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader$Parser, t_UTCTAIOffsetsLoader$Parser, UTCTAIOffsetsLoader$Parser);

      void t_UTCTAIOffsetsLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader$Parser), &PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser), module, "UTCTAIOffsetsLoader$Parser", 0);
      }

      void t_UTCTAIOffsetsLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "class_", make_descriptor(UTCTAIOffsetsLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader$Parser::wrap_Object(UTCTAIOffsetsLoader$Parser(((t_UTCTAIOffsetsLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *RoughVisibilityEstimator::class$ = NULL;
        jmethodID *RoughVisibilityEstimator::mids$ = NULL;
        bool RoughVisibilityEstimator::live$ = false;

        jclass RoughVisibilityEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/RoughVisibilityEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_67e26f2e324b1ad6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/frames/Frame;Ljava/util/List;)V");
            mids$[mid_estimateVisibility_3f825e89ff7df91f] = env->getMethodID(cls, "estimateVisibility", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RoughVisibilityEstimator::RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::frames::Frame & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67e26f2e324b1ad6, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::time::AbsoluteDate RoughVisibilityEstimator::estimateVisibility(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_estimateVisibility_3f825e89ff7df91f], a0.this$));
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
      namespace utils {
        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg);

        static PyMethodDef t_RoughVisibilityEstimator__methods_[] = {
          DECLARE_METHOD(t_RoughVisibilityEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, estimateVisibility, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RoughVisibilityEstimator)[] = {
          { Py_tp_methods, t_RoughVisibilityEstimator__methods_ },
          { Py_tp_init, (void *) t_RoughVisibilityEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RoughVisibilityEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RoughVisibilityEstimator, t_RoughVisibilityEstimator, RoughVisibilityEstimator);

        void t_RoughVisibilityEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(RoughVisibilityEstimator), &PY_TYPE_DEF(RoughVisibilityEstimator), module, "RoughVisibilityEstimator", 0);
        }

        void t_RoughVisibilityEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "class_", make_descriptor(RoughVisibilityEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "wrapfn_", make_descriptor(t_RoughVisibilityEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RoughVisibilityEstimator::initializeClass, 1)))
            return NULL;
          return t_RoughVisibilityEstimator::wrap_Object(RoughVisibilityEstimator(((t_RoughVisibilityEstimator *) arg)->object.this$));
        }
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RoughVisibilityEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          RoughVisibilityEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkK", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = RoughVisibilityEstimator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimateVisibility(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateVisibility", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_a0202e99d0775bad] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_build_e3d61a41bb3656f1] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator;");
            mids$[mid_decomposer_e8882f7224afb4ba] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_f23737f930d5c195] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimatorBuilder::SemiAnalyticalKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_a0202e99d0775bad], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator SemiAnalyticalKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_e3d61a41bb3656f1]));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_e8882f7224afb4ba], a0.this$));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_f23737f930d5c195], a0.this$, a1.this$));
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
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLaguerreRuleFactory::class$ = NULL;
          jmethodID *FieldLaguerreRuleFactory::mids$ = NULL;
          bool FieldLaguerreRuleFactory::live$ = false;

          jclass FieldLaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLaguerreRuleFactory::FieldLaguerreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLaguerreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_086dd68d091255ed], a0));
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
          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args);
          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLaguerreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLaguerreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLaguerreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLaguerreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLaguerreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLaguerreRuleFactory, t_FieldLaguerreRuleFactory, FieldLaguerreRuleFactory);
          PyObject *t_FieldLaguerreRuleFactory::wrap_Object(const FieldLaguerreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLaguerreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLaguerreRuleFactory), &PY_TYPE_DEF(FieldLaguerreRuleFactory), module, "FieldLaguerreRuleFactory", 0);
          }

          void t_FieldLaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "class_", make_descriptor(FieldLaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "wrapfn_", make_descriptor(t_FieldLaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLaguerreRuleFactory::wrap_Object(FieldLaguerreRuleFactory(((t_FieldLaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLaguerreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLaguerreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
