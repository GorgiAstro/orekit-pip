#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ScaledConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *ScaledConstantThrustPropulsionModel::mids$ = NULL;
          bool ScaledConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR = NULL;

          jclass ScaledConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_06e1ed88b8b36bf6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_f2dc4f0d2f87d390] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_bf1d7732f1acb697] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_36619a55dd67cb97] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3cf6594f36d3d60d] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              THRUSTX_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTX_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTY_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTY_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTZ_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTZ_SCALE_FACTOR", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaledConstantThrustPropulsionModel::ScaledConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_06e1ed88b8b36bf6, a0, a1, a2.this$, a3.this$)) {}

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_dff5885c2c873297]);
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9dc1ec0bcc0a9a29], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f2dc4f0d2f87d390], a0.this$));
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_bf1d7732f1acb697], a0.this$);
          }

          ::java::util::List ScaledConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_36619a55dd67cb97], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3cf6594f36d3d60d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_24461752d0eea1e3], a0.this$));
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
          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ScaledConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaledConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaledConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ScaledConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ScaledConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ScaledConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaledConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(ScaledConstantThrustPropulsionModel, t_ScaledConstantThrustPropulsionModel, ScaledConstantThrustPropulsionModel);

          void t_ScaledConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaledConstantThrustPropulsionModel), &PY_TYPE_DEF(ScaledConstantThrustPropulsionModel), module, "ScaledConstantThrustPropulsionModel", 0);
          }

          void t_ScaledConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "class_", make_descriptor(ScaledConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_ScaledConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(ScaledConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTX_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTY_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTZ_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR)));
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ScaledConstantThrustPropulsionModel::wrap_Object(ScaledConstantThrustPropulsionModel(((t_ScaledConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ScaledConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ScaledConstantThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenZonalLinear::class$ = NULL;
              jmethodID *FieldHansenZonalLinear::mids$ = NULL;
              bool FieldHansenZonalLinear::live$ = false;

              jclass FieldHansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4b0ddad3195faf0c] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_072c8635f2164db9] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_e2b464e41c9ba627] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_e2b464e41c9ba627] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenZonalLinear::FieldHansenZonalLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b0ddad3195faf0c, a0, a1, a2.this$)) {}

              void FieldHansenZonalLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_072c8635f2164db9], a0.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_e2b464e41c9ba627], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e2b464e41c9ba627], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args);
              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data);
              static PyGetSetDef t_FieldHansenZonalLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenZonalLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenZonalLinear)[] = {
                { Py_tp_methods, t_FieldHansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenZonalLinear_init_ },
                { Py_tp_getset, t_FieldHansenZonalLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenZonalLinear, t_FieldHansenZonalLinear, FieldHansenZonalLinear);
              PyObject *t_FieldHansenZonalLinear::wrap_Object(const FieldHansenZonalLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenZonalLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenZonalLinear), &PY_TYPE_DEF(FieldHansenZonalLinear), module, "FieldHansenZonalLinear", 0);
              }

              void t_FieldHansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "class_", make_descriptor(FieldHansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "wrapfn_", make_descriptor(t_FieldHansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenZonalLinear::wrap_Object(FieldHansenZonalLinear(((t_FieldHansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenZonalLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractWindUp::class$ = NULL;
          jmethodID *PythonAbstractWindUp::mids$ = NULL;
          bool PythonAbstractWindUp::live$ = false;

          jclass PythonAbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_31441980502696f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/estimation/measurements/gnss/Dipole;)V");
              mids$[mid_emitterToInert_e7f87679ee42d076] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_receiverToInert_e7f87679ee42d076] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWindUp::PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole & a0, const ::org::orekit::estimation::measurements::gnss::Dipole & a1) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(env->newObject(initializeClass, &mids$, mid_init$_31441980502696f4, a0.this$, a1.this$)) {}

          void PythonAbstractWindUp::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractWindUp::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractWindUp::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args);
          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self);
          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data);
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data);
          static PyGetSetDef t_PythonAbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, self),
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWindUp)[] = {
            { Py_tp_methods, t_PythonAbstractWindUp__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWindUp_init_ },
            { Py_tp_getset, t_PythonAbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWindUp, t_PythonAbstractWindUp, PythonAbstractWindUp);
          PyObject *t_PythonAbstractWindUp::wrap_Object(const PythonAbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWindUp), &PY_TYPE_DEF(PythonAbstractWindUp), module, "PythonAbstractWindUp", 1);
          }

          void t_PythonAbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "class_", make_descriptor(PythonAbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "wrapfn_", make_descriptor(t_PythonAbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWindUp::initializeClass);
            JNINativeMethod methods[] = {
              { "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_emitterToInert0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWindUp_pythonDecRef1 },
              { "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_receiverToInert2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWindUp::wrap_Object(PythonAbstractWindUp(((t_PythonAbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::Dipole a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::Dipole a1((jobject) NULL);
            PythonAbstractWindUp object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWindUp(a0, a1));
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

          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "emitterToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("emitterToInert", result);
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

          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "receiverToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("receiverToInert", result);
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

          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data)
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
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data)
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile::live$ = false;

        jclass OrekitAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_94c5e4e03d5c25b2] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile::OrekitAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris OrekitAttitudeEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_94c5e4e03d5c25b2], a0.this$));
        }

        ::java::util::Map OrekitAttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self);
        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile, t_OrekitAttitudeEphemerisFile, OrekitAttitudeEphemerisFile);

        void t_OrekitAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile), module, "OrekitAttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitSatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitAttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)));
        }

        void t_OrekitAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "class_", make_descriptor(OrekitAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile::wrap_Object(OrekitAttitudeEphemerisFile(((t_OrekitAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitAttitudeEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTHarvester::class$ = NULL;
          jmethodID *DSSTHarvester::mids$ = NULL;
          bool DSSTHarvester::live$ = false;

          jclass DSSTHarvester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTHarvester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_freezeColumnsNames_0fa09c18fee449d5] = env->getMethodID(cls, "freezeColumnsNames", "()V");
              mids$[mid_getB1_688b496048ff947b] = env->getMethodID(cls, "getB1", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB2_9483b2ac438718ce] = env->getMethodID(cls, "getB2", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB3_9483b2ac438718ce] = env->getMethodID(cls, "getB3", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB4_688b496048ff947b] = env->getMethodID(cls, "getB4", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getParametersJacobian_9483b2ac438718ce] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_initializeFieldShortPeriodTerms_0ee5c56004643a2e] = env->getMethodID(cls, "initializeFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setReferenceState_0ee5c56004643a2e] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_updateFieldShortPeriodTerms_0ee5c56004643a2e] = env->getMethodID(cls, "updateFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTHarvester::freezeColumnsNames() const
          {
            env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0fa09c18fee449d5]);
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB1() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB1_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB2(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB2_9483b2ac438718ce], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB3(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB3_9483b2ac438718ce], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB4() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB4_688b496048ff947b]));
          }

          ::java::util::List DSSTHarvester::getJacobiansColumnsNames() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_2afa36052df4765d]));
          }

          ::org::orekit::orbits::OrbitType DSSTHarvester::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_9483b2ac438718ce], a0.this$));
          }

          ::org::orekit::orbits::PositionAngleType DSSTHarvester::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_9483b2ac438718ce], a0.this$));
          }

          void DSSTHarvester::initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_initializeFieldShortPeriodTerms_0ee5c56004643a2e], a0.this$);
          }

          void DSSTHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceState_0ee5c56004643a2e], a0.this$);
          }

          void DSSTHarvester::updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updateFieldShortPeriodTerms_0ee5c56004643a2e], a0.this$);
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
          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data);
          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTHarvester__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTHarvester, b1),
            DECLARE_GET_FIELD(t_DSSTHarvester, b4),
            DECLARE_GET_FIELD(t_DSSTHarvester, jacobiansColumnsNames),
            DECLARE_GET_FIELD(t_DSSTHarvester, orbitType),
            DECLARE_GET_FIELD(t_DSSTHarvester, positionAngleType),
            DECLARE_SET_FIELD(t_DSSTHarvester, referenceState),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTHarvester__methods_[] = {
            DECLARE_METHOD(t_DSSTHarvester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, freezeColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB1, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB2, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB3, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB4, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getJacobiansColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getOrbitType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getParametersJacobian, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getPositionAngleType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getStateTransitionMatrix, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, initializeFieldShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, setReferenceState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, updateFieldShortPeriodTerms, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTHarvester)[] = {
            { Py_tp_methods, t_DSSTHarvester__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DSSTHarvester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTHarvester)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
            NULL
          };

          DEFINE_TYPE(DSSTHarvester, t_DSSTHarvester, DSSTHarvester);

          void t_DSSTHarvester::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTHarvester), &PY_TYPE_DEF(DSSTHarvester), module, "DSSTHarvester", 0);
          }

          void t_DSSTHarvester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "class_", make_descriptor(DSSTHarvester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "wrapfn_", make_descriptor(t_DSSTHarvester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTHarvester::initializeClass, 1)))
              return NULL;
            return t_DSSTHarvester::wrap_Object(DSSTHarvester(((t_DSSTHarvester *) arg)->object.this$));
          }
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTHarvester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.freezeColumnsNames());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB2(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB2", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB3(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB3", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getJacobiansColumnsNames());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOrbitType());
              return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getOrbitType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParametersJacobian(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
          }

          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getPositionAngleType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
          }

          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.initializeFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "initializeFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "setReferenceState", args, 2);
          }

          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.updateFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updateFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Class.h"
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
            mids$[mid_evaluationPerformed_d76c6ca9a1d073d2] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanObserver::evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_d76c6ca9a1d073d2], a0.this$);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
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
                mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
                mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
                mids$[mid_of_797df3682bfee0e5] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LeastSquaresOptimizer$Optimum::getEvaluations() const
            {
              return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
            }

            jint LeastSquaresOptimizer$Optimum::getIterations() const
            {
              return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
            }

            LeastSquaresOptimizer$Optimum LeastSquaresOptimizer$Optimum::of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return LeastSquaresOptimizer$Optimum(env->callStaticObjectMethod(cls, mids$[mid_of_797df3682bfee0e5], a0.this$, a1, a2));
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
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap::class$ = NULL;
      jmethodID *TimeSpanMap::mids$ = NULL;
      bool TimeSpanMap::live$ = false;

      jclass TimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2990946c992aafed] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
          mids$[mid_addValidAfter_578e66beacb8428a] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBefore_578e66beacb8428a] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBetween_0c095adb91e280c3] = env->getMethodID(cls, "addValidBetween", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_extractRange_56889532bb31616d] = env->getMethodID(cls, "extractRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_get_5b827b6e0497f87e] = env->getMethodID(cls, "get", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getFirstSpan_971209c2bf2033e7] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getFirstTransition_75c9888155918ff9] = env->getMethodID(cls, "getFirstTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getLastSpan_971209c2bf2033e7] = env->getMethodID(cls, "getLastSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getLastTransition_75c9888155918ff9] = env->getMethodID(cls, "getLastTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getSpan_561a18a65c5f000d] = env->getMethodID(cls, "getSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpansNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSpansNumber", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeSpanMap::TimeSpanMap(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2990946c992aafed, a0.this$)) {}

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidAfter_578e66beacb8428a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBefore_578e66beacb8428a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBetween(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBetween_0c095adb91e280c3], a0.this$, a1.this$, a2.this$));
      }

      TimeSpanMap TimeSpanMap::extractRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractRange_56889532bb31616d], a0.this$, a1.this$));
      }

      ::java::lang::Object TimeSpanMap::get$(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5b827b6e0497f87e], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getFirstSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_971209c2bf2033e7]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getFirstTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getFirstTransition_75c9888155918ff9]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getLastSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getLastSpan_971209c2bf2033e7]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getLastTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getLastTransition_75c9888155918ff9]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpan_561a18a65c5f000d], a0.this$));
      }

      jint TimeSpanMap::getSpansNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getSpansNumber_570ce0828f81a2c1]);
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
      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args);
      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data);
      static PyGetSetDef t_TimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap, firstSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, firstTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, spansNumber),
        DECLARE_GET_FIELD(t_TimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBetween, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, extractRange, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getFirstSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getFirstTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getSpan, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getSpansNumber, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap)[] = {
        { Py_tp_methods, t_TimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_TimeSpanMap_init_ },
        { Py_tp_getset, t_TimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap, t_TimeSpanMap, TimeSpanMap);
      PyObject *t_TimeSpanMap::wrap_Object(const TimeSpanMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap), &PY_TYPE_DEF(TimeSpanMap), module, "TimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Span", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Span)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Transition)));
      }

      void t_TimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "class_", make_descriptor(TimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "wrapfn_", make_descriptor(t_TimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap::wrap_Object(TimeSpanMap(((t_TimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        TimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "o", &a0))
        {
          INT_CALL(object = TimeSpanMap(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidAfter(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBefore(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "Okk", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBetween(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBetween", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeSpanMap result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractRange(a0, a1));
          return t_TimeSpanMap::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "extractRange", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSpan(a0));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSpan", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSpansNumber());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSpansNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmWriter::class$ = NULL;
              jmethodID *ApmWriter::mids$ = NULL;
              bool ApmWriter::live$ = false;
              jdouble ApmWriter::CCSDS_APM_VERS = (jdouble) 0;
              jint ApmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass ApmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f30abb95e05bcdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_APM_VERS = env->getStaticDoubleField(cls, "CCSDS_APM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmWriter::ApmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6f30abb95e05bcdd, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args);
              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data);
              static PyGetSetDef t_ApmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_ApmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmWriter__methods_[] = {
                DECLARE_METHOD(t_ApmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmWriter)[] = {
                { Py_tp_methods, t_ApmWriter__methods_ },
                { Py_tp_init, (void *) t_ApmWriter_init_ },
                { Py_tp_getset, t_ApmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(ApmWriter, t_ApmWriter, ApmWriter);
              PyObject *t_ApmWriter::wrap_Object(const ApmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_ApmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_ApmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmWriter), &PY_TYPE_DEF(ApmWriter), module, "ApmWriter", 0);
              }

              void t_ApmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "class_", make_descriptor(ApmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "wrapfn_", make_descriptor(t_ApmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "CCSDS_APM_VERS", make_descriptor(ApmWriter::CCSDS_APM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "KVN_PADDING_WIDTH", make_descriptor(ApmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmWriter::initializeClass, 1)))
                  return NULL;
                return t_ApmWriter::wrap_Object(ApmWriter(((t_ApmWriter *) arg)->object.this$));
              }
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ApmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = ApmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Apm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCycleSlipDetector::class$ = NULL;
          jmethodID *GeometryFreeCycleSlipDetector::mids$ = NULL;
          bool GeometryFreeCycleSlipDetector::live$ = false;

          jclass GeometryFreeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
              mids$[mid_manageData_5e249044f63168db] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometryFreeCycleSlipDetector::GeometryFreeCycleSlipDetector(jdouble a0, jdouble a1, jint a2) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}
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
          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_GeometryFreeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCycleSlipDetector)[] = {
            { Py_tp_methods, t_GeometryFreeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_GeometryFreeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCycleSlipDetector, t_GeometryFreeCycleSlipDetector, GeometryFreeCycleSlipDetector);

          void t_GeometryFreeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCycleSlipDetector), &PY_TYPE_DEF(GeometryFreeCycleSlipDetector), module, "GeometryFreeCycleSlipDetector", 0);
          }

          void t_GeometryFreeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "class_", make_descriptor(GeometryFreeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "wrapfn_", make_descriptor(t_GeometryFreeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCycleSlipDetector::wrap_Object(GeometryFreeCycleSlipDetector(((t_GeometryFreeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            GeometryFreeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = GeometryFreeCycleSlipDetector(a0, a1, a2));
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
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesWave::class$ = NULL;
          jmethodID *OceanTidesWave::mids$ = NULL;
          bool OceanTidesWave::live$ = false;

          jclass OceanTidesWave::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesWave");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_518038235ea0862f] = env->getMethodID(cls, "<init>", "(III[[[D)V");
              mids$[mid_addContribution_80e6f30d2d5a3965] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/data/BodiesElements;[[D[[D)V");
              mids$[mid_getDoodson_570ce0828f81a2c1] = env->getMethodID(cls, "getDoodson", "()I");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesWave::OceanTidesWave(jint a0, jint a1, jint a2, const JArray< JArray< JArray< jdouble > > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_518038235ea0862f, a0, a1, a2, a3.this$)) {}

          void OceanTidesWave::addContribution(const ::org::orekit::data::BodiesElements & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addContribution_80e6f30d2d5a3965], a0.this$, a1.this$, a2.this$);
          }

          jint OceanTidesWave::getDoodson() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodson_570ce0828f81a2c1]);
          }

          jint OceanTidesWave::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_570ce0828f81a2c1]);
          }

          jint OceanTidesWave::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_570ce0828f81a2c1]);
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
          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args);
          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data);
          static PyGetSetDef t_OceanTidesWave__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesWave, doodson),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxDegree),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxOrder),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesWave__methods_[] = {
            DECLARE_METHOD(t_OceanTidesWave, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, addContribution, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesWave, getDoodson, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxOrder, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesWave)[] = {
            { Py_tp_methods, t_OceanTidesWave__methods_ },
            { Py_tp_init, (void *) t_OceanTidesWave_init_ },
            { Py_tp_getset, t_OceanTidesWave__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesWave)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesWave, t_OceanTidesWave, OceanTidesWave);

          void t_OceanTidesWave::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesWave), &PY_TYPE_DEF(OceanTidesWave), module, "OceanTidesWave", 0);
          }

          void t_OceanTidesWave::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "class_", make_descriptor(OceanTidesWave::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "wrapfn_", make_descriptor(t_OceanTidesWave::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesWave::initializeClass, 1)))
              return NULL;
            return t_OceanTidesWave::wrap_Object(OceanTidesWave(((t_OceanTidesWave *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesWave::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
            OceanTidesWave object((jobject) NULL);

            if (!parseArgs(args, "III[[[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OceanTidesWave(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "k[[D[[D", ::org::orekit::data::BodiesElements::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addContribution(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addContribution", args);
            return NULL;
          }

          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodson());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodson());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/EventObject.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventObject::class$ = NULL;
    jmethodID *EventObject::mids$ = NULL;
    bool EventObject::live$ = false;

    jclass EventObject::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventObject");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_2990946c992aafed] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
        mids$[mid_getSource_4d26fd885228c716] = env->getMethodID(cls, "getSource", "()Ljava/lang/Object;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    EventObject::EventObject(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2990946c992aafed, a0.this$)) {}

    ::java::lang::Object EventObject::getSource() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSource_4d26fd885228c716]));
    }

    ::java::lang::String EventObject::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg);
    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds);
    static PyObject *t_EventObject_getSource(t_EventObject *self);
    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args);
    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data);
    static PyGetSetDef t_EventObject__fields_[] = {
      DECLARE_GET_FIELD(t_EventObject, source),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_EventObject__methods_[] = {
      DECLARE_METHOD(t_EventObject, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, getSource, METH_NOARGS),
      DECLARE_METHOD(t_EventObject, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventObject)[] = {
      { Py_tp_methods, t_EventObject__methods_ },
      { Py_tp_init, (void *) t_EventObject_init_ },
      { Py_tp_getset, t_EventObject__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventObject)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventObject, t_EventObject, EventObject);

    void t_EventObject::install(PyObject *module)
    {
      installType(&PY_TYPE(EventObject), &PY_TYPE_DEF(EventObject), module, "EventObject", 0);
    }

    void t_EventObject::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "class_", make_descriptor(EventObject::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "wrapfn_", make_descriptor(t_EventObject::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventObject::initializeClass, 1)))
        return NULL;
      return t_EventObject::wrap_Object(EventObject(((t_EventObject *) arg)->object.this$));
    }
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventObject::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::Object a0((jobject) NULL);
      EventObject object((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        INT_CALL(object = EventObject(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_EventObject_getSource(t_EventObject *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(EventObject), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor$MaxCountExceededCallback::class$ = NULL;
      jmethodID *Incrementor$MaxCountExceededCallback::mids$ = NULL;
      bool Incrementor$MaxCountExceededCallback::live$ = false;

      jclass Incrementor$MaxCountExceededCallback::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor$MaxCountExceededCallback");

          mids$ = new jmethodID[max_mid];
          mids$[mid_trigger_99803b0791f320ff] = env->getMethodID(cls, "trigger", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Incrementor$MaxCountExceededCallback::trigger(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_trigger_99803b0791f320ff], a0);
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
      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg);

      static PyMethodDef t_Incrementor$MaxCountExceededCallback__methods_[] = {
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, trigger, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor$MaxCountExceededCallback)[] = {
        { Py_tp_methods, t_Incrementor$MaxCountExceededCallback__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor$MaxCountExceededCallback)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor$MaxCountExceededCallback, t_Incrementor$MaxCountExceededCallback, Incrementor$MaxCountExceededCallback);

      void t_Incrementor$MaxCountExceededCallback::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor$MaxCountExceededCallback), &PY_TYPE_DEF(Incrementor$MaxCountExceededCallback), module, "Incrementor$MaxCountExceededCallback", 0);
      }

      void t_Incrementor$MaxCountExceededCallback::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "class_", make_descriptor(Incrementor$MaxCountExceededCallback::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "wrapfn_", make_descriptor(t_Incrementor$MaxCountExceededCallback::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 1)))
          return NULL;
        return t_Incrementor$MaxCountExceededCallback::wrap_Object(Incrementor$MaxCountExceededCallback(((t_Incrementor$MaxCountExceededCallback *) arg)->object.this$));
      }
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.trigger(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "trigger", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame::class$ = NULL;
          jmethodID *SubFrame::mids$ = NULL;
          bool SubFrame::live$ = false;
          jint SubFrame::PREAMBLE_VALUE = (jint) 0;

          jclass SubFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkParity_4bcf680fb63dc524] = env->getStaticMethodID(cls, "checkParity", "(II)Z");
              mids$[mid_getAlert_570ce0828f81a2c1] = env->getMethodID(cls, "getAlert", "()I");
              mids$[mid_getAntiSpoofing_570ce0828f81a2c1] = env->getMethodID(cls, "getAntiSpoofing", "()I");
              mids$[mid_getId_570ce0828f81a2c1] = env->getMethodID(cls, "getId", "()I");
              mids$[mid_getIntegrityStatus_570ce0828f81a2c1] = env->getMethodID(cls, "getIntegrityStatus", "()I");
              mids$[mid_getMessage_570ce0828f81a2c1] = env->getMethodID(cls, "getMessage", "()I");
              mids$[mid_getPreamble_570ce0828f81a2c1] = env->getMethodID(cls, "getPreamble", "()I");
              mids$[mid_getTow_570ce0828f81a2c1] = env->getMethodID(cls, "getTow", "()I");
              mids$[mid_hasParityErrors_b108b35ef48e27bd] = env->getMethodID(cls, "hasParityErrors", "()Z");
              mids$[mid_parse_47ae5458c8202d96] = env->getStaticMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Lorg/orekit/gnss/rflink/gps/SubFrame;");
              mids$[mid_setField_ea6ddf4b94154dc7] = env->getMethodID(cls, "setField", "(IIII[I)V");
              mids$[mid_setField_6296971d230a4e5f] = env->getMethodID(cls, "setField", "(IIIIIII[I)V");
              mids$[mid_getField_2235cd056f5a882b] = env->getMethodID(cls, "getField", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREAMBLE_VALUE = env->getStaticIntField(cls, "PREAMBLE_VALUE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SubFrame::checkParity(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_checkParity_4bcf680fb63dc524], a0, a1);
          }

          jint SubFrame::getAlert() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlert_570ce0828f81a2c1]);
          }

          jint SubFrame::getAntiSpoofing() const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_570ce0828f81a2c1]);
          }

          jint SubFrame::getId() const
          {
            return env->callIntMethod(this$, mids$[mid_getId_570ce0828f81a2c1]);
          }

          jint SubFrame::getIntegrityStatus() const
          {
            return env->callIntMethod(this$, mids$[mid_getIntegrityStatus_570ce0828f81a2c1]);
          }

          jint SubFrame::getMessage() const
          {
            return env->callIntMethod(this$, mids$[mid_getMessage_570ce0828f81a2c1]);
          }

          jint SubFrame::getPreamble() const
          {
            return env->callIntMethod(this$, mids$[mid_getPreamble_570ce0828f81a2c1]);
          }

          jint SubFrame::getTow() const
          {
            return env->callIntMethod(this$, mids$[mid_getTow_570ce0828f81a2c1]);
          }

          jboolean SubFrame::hasParityErrors() const
          {
            return env->callBooleanMethod(this$, mids$[mid_hasParityErrors_b108b35ef48e27bd]);
          }

          SubFrame SubFrame::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SubFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_47ae5458c8202d96], a0.this$));
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args);
          static PyObject *t_SubFrame_getAlert(t_SubFrame *self);
          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self);
          static PyObject *t_SubFrame_getId(t_SubFrame *self);
          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self);
          static PyObject *t_SubFrame_getMessage(t_SubFrame *self);
          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self);
          static PyObject *t_SubFrame_getTow(t_SubFrame *self);
          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self);
          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data);
          static PyGetSetDef t_SubFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame, alert),
            DECLARE_GET_FIELD(t_SubFrame, antiSpoofing),
            DECLARE_GET_FIELD(t_SubFrame, id),
            DECLARE_GET_FIELD(t_SubFrame, integrityStatus),
            DECLARE_GET_FIELD(t_SubFrame, message),
            DECLARE_GET_FIELD(t_SubFrame, preamble),
            DECLARE_GET_FIELD(t_SubFrame, tow),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame__methods_[] = {
            DECLARE_METHOD(t_SubFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, checkParity, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, getAlert, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getAntiSpoofing, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getIntegrityStatus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getMessage, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getPreamble, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getTow, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, hasParityErrors, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame)[] = {
            { Py_tp_methods, t_SubFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubFrame, t_SubFrame, SubFrame);

          void t_SubFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame), &PY_TYPE_DEF(SubFrame), module, "SubFrame", 0);
          }

          void t_SubFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "class_", make_descriptor(SubFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "wrapfn_", make_descriptor(t_SubFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "PREAMBLE_VALUE", make_descriptor(SubFrame::PREAMBLE_VALUE));
          }

          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame::initializeClass, 1)))
              return NULL;
            return t_SubFrame::wrap_Object(SubFrame(((t_SubFrame *) arg)->object.this$));
          }
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::checkParity(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "checkParity", args);
            return NULL;
          }

          static PyObject *t_SubFrame_getAlert(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlert());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getId(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getMessage(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMessage());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPreamble());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getTow(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTow());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.hasParityErrors());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            SubFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::parse(a0));
              return t_SubFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlert());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMessage());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPreamble());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTow());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOATroposphericDelayModifier::class$ = NULL;
          jmethodID *TDOATroposphericDelayModifier::mids$ = NULL;
          bool TDOATroposphericDelayModifier::live$ = false;

          jclass TDOATroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOATroposphericDelayModifier::TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          ::java::util::List TDOATroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void TDOATroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void TDOATroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self);
          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOATroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOATroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOATroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOATroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOATroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOATroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOATroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOATroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOATroposphericDelayModifier, t_TDOATroposphericDelayModifier, TDOATroposphericDelayModifier);

          void t_TDOATroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOATroposphericDelayModifier), &PY_TYPE_DEF(TDOATroposphericDelayModifier), module, "TDOATroposphericDelayModifier", 0);
          }

          void t_TDOATroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "class_", make_descriptor(TDOATroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "wrapfn_", make_descriptor(t_TDOATroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOATroposphericDelayModifier::wrap_Object(TDOATroposphericDelayModifier(((t_TDOATroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TDOATroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TDOATroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMessageWriter::class$ = NULL;
            jmethodID *CdmMessageWriter::mids$ = NULL;
            bool CdmMessageWriter::live$ = false;
            ::java::lang::String *CdmMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass CdmMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2a0a7c2e7c34a644] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_c779ff7fea6f1993] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_dff5885c2c873297] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_11b109bd155ca898] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_1a568e4d577ff0e8] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_dff5885c2c873297] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_279465702b09ae7f] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_ba37286de093655b] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)V");
                mids$[mid_writeRelativeMetadataContent_6461388fb85a241b] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegment_5f897441d3eadcab] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmSegment;)V");
                mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMessageWriter::CdmMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a0a7c2e7c34a644, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding CdmMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_c779ff7fea6f1993]));
            }

            jdouble CdmMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_dff5885c2c873297]);
            }

            ::java::lang::String CdmMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_11b109bd155ca898]));
            }

            ::java::lang::String CdmMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter CdmMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_1a568e4d577ff0e8]));
            }

            jdouble CdmMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_dff5885c2c873297]);
            }

            void CdmMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_279465702b09ae7f], a0.this$);
            }

            void CdmMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_6d745cf7b26e9f5d], a0.this$);
            }

            void CdmMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_ba37286de093655b], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_6461388fb85a241b], a0.this$, a1, a2.this$);
            }

            void CdmMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_5f897441d3eadcab], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_a4679b5cde76d825], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data);
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data);
            static PyGetSetDef t_CdmMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMessageWriter, context),
              DECLARE_GET_FIELD(t_CdmMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_CdmMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_CdmMessageWriter, root),
              DECLARE_GET_FIELD(t_CdmMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_CdmMessageWriter, version),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMessageWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegment, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMessageWriter)[] = {
              { Py_tp_methods, t_CdmMessageWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMessageWriter_init_ },
              { Py_tp_getset, t_CdmMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmMessageWriter, t_CdmMessageWriter, CdmMessageWriter);

            void t_CdmMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMessageWriter), &PY_TYPE_DEF(CdmMessageWriter), module, "CdmMessageWriter", 0);
            }

            void t_CdmMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "class_", make_descriptor(CdmMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "wrapfn_", make_descriptor(t_CdmMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*CdmMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMessageWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMessageWriter::wrap_Object(CdmMessageWriter(((t_CdmMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              CdmMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CdmMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeRelativeMetadataContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmSegment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmSegment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegmentContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSAlmanac::class$ = NULL;
            jmethodID *QZSSAlmanac::mids$ = NULL;
            bool QZSSAlmanac::live$ = false;

            jclass QZSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSource_11b109bd155ca898] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_setHealth_99803b0791f320ff] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSAlmanac::QZSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint QZSSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_570ce0828f81a2c1]);
            }

            ::java::lang::String QZSSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_11b109bd155ca898]));
            }

            void QZSSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_99803b0791f320ff], a0);
            }

            void QZSSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_d0bc48d5b00dc40c], a0.this$);
            }

            void QZSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_17db3a65980d3441], a0);
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
            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_QZSSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, health),
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, source),
              DECLARE_SET_FIELD(t_QZSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_QZSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_QZSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSAlmanac)[] = {
              { Py_tp_methods, t_QZSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_QZSSAlmanac_init_ },
              { Py_tp_getset, t_QZSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(QZSSAlmanac, t_QZSSAlmanac, QZSSAlmanac);

            void t_QZSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSAlmanac), &PY_TYPE_DEF(QZSSAlmanac), module, "QZSSAlmanac", 0);
            }

            void t_QZSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "class_", make_descriptor(QZSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "wrapfn_", make_descriptor(t_QZSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_QZSSAlmanac::wrap_Object(QZSSAlmanac(((t_QZSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              QZSSAlmanac object((jobject) NULL);

              INT_CALL(object = QZSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg)
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

            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmData::class$ = NULL;
              jmethodID *ApmData::mids$ = NULL;
              bool ApmData::live$ = false;

              jclass ApmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a2df71d5b124c9b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)V");
                  mids$[mid_addManeuver_ff54c6b9e53ef2cf] = env->getMethodID(cls, "addManeuver", "(Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)V");
                  mids$[mid_getAngularVelocityBlock_9d728f0071a6aee8] = env->getMethodID(cls, "getAngularVelocityBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;");
                  mids$[mid_getAttitude_d44cfca563ece87b] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                  mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEulerBlock_15e988127d1d4e98] = env->getMethodID(cls, "getEulerBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;");
                  mids$[mid_getInertiaBlock_4f694b9dd2b080cf] = env->getMethodID(cls, "getInertiaBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;");
                  mids$[mid_getManeuver_e35b80d65cc7de9d] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;");
                  mids$[mid_getManeuvers_2afa36052df4765d] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getNbManeuvers_570ce0828f81a2c1] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getQuaternionBlock_7ac169a957cf30f9] = env->getMethodID(cls, "getQuaternionBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;");
                  mids$[mid_getSpinStabilizedBlock_6f5c74988a32b146] = env->getMethodID(cls, "getSpinStabilizedBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;");
                  mids$[mid_hasManeuvers_b108b35ef48e27bd] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmData::ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a3, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a4, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a5, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2df71d5b124c9b9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              void ApmData::addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addManeuver_ff54c6b9e53ef2cf], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity ApmData::getAngularVelocityBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity(env->callObjectMethod(this$, mids$[mid_getAngularVelocityBlock_9d728f0071a6aee8]));
              }

              ::org::orekit::attitudes::Attitude ApmData::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d44cfca563ece87b], a0.this$, a1.this$));
              }

              ::java::util::List ApmData::getComments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate ApmData::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Euler ApmData::getEulerBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Euler(env->callObjectMethod(this$, mids$[mid_getEulerBlock_15e988127d1d4e98]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Inertia ApmData::getInertiaBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Inertia(env->callObjectMethod(this$, mids$[mid_getInertiaBlock_4f694b9dd2b080cf]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver ApmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_e35b80d65cc7de9d], a0));
              }

              ::java::util::List ApmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_2afa36052df4765d]));
              }

              jint ApmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion ApmData::getQuaternionBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionBlock_7ac169a957cf30f9]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized ApmData::getSpinStabilizedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized(env->callObjectMethod(this$, mids$[mid_getSpinStabilizedBlock_6f5c74988a32b146]));
              }

              jboolean ApmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_b108b35ef48e27bd]);
              }

              void ApmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self);
              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args);
              static PyObject *t_ApmData_getComments(t_ApmData *self);
              static PyObject *t_ApmData_getEpoch(t_ApmData *self);
              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self);
              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self);
              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self);
              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self);
              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data);
              static PyGetSetDef t_ApmData__fields_[] = {
                DECLARE_GET_FIELD(t_ApmData, angularVelocityBlock),
                DECLARE_GET_FIELD(t_ApmData, comments),
                DECLARE_GET_FIELD(t_ApmData, epoch),
                DECLARE_GET_FIELD(t_ApmData, eulerBlock),
                DECLARE_GET_FIELD(t_ApmData, inertiaBlock),
                DECLARE_GET_FIELD(t_ApmData, maneuvers),
                DECLARE_GET_FIELD(t_ApmData, nbManeuvers),
                DECLARE_GET_FIELD(t_ApmData, quaternionBlock),
                DECLARE_GET_FIELD(t_ApmData, spinStabilizedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmData__methods_[] = {
                DECLARE_METHOD(t_ApmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, addManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getAngularVelocityBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_ApmData, getComments, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEulerBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getInertiaBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getQuaternionBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getSpinStabilizedBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmData)[] = {
                { Py_tp_methods, t_ApmData__methods_ },
                { Py_tp_init, (void *) t_ApmData_init_ },
                { Py_tp_getset, t_ApmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ApmData, t_ApmData, ApmData);

              void t_ApmData::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmData), &PY_TYPE_DEF(ApmData), module, "ApmData", 0);
              }

              void t_ApmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "class_", make_descriptor(ApmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "wrapfn_", make_descriptor(t_ApmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmData::initializeClass, 1)))
                  return NULL;
                return t_ApmData::wrap_Object(ApmData(((t_ApmData *) arg)->object.this$));
              }
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a6((jobject) NULL);
                ApmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = ApmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addManeuver(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(result);
              }

              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_ApmData_getComments(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getComments());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_ApmData_getEpoch(t_ApmData *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(result);
              }

              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(result);
              }

              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getManeuvers(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Maneuver));
              }

              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(result);
              }

              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(result);
              }

              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getComments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(value);
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
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *BrouwerLyddanePropagatorBuilder::class$ = NULL;
        jmethodID *BrouwerLyddanePropagatorBuilder::mids$ = NULL;
        bool BrouwerLyddanePropagatorBuilder::live$ = false;

        jclass BrouwerLyddanePropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9f127c615ff2fc4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_init$_628d3b35511bcea6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_ef197d62fd525fc4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_514ffedd6248f0b6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/BrouwerLyddanePropagator;");
            mids$[mid_copy_20a4ebdd36e580a5] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, jdouble a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_9f127c615ff2fc4d, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, jdouble a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_628d3b35511bcea6, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, const ::org::orekit::orbits::OrbitType & a8, const ::org::orekit::orbits::PositionAngleType & a9, jdouble a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_ef197d62fd525fc4, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8.this$, a9.this$, a10, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel BrouwerLyddanePropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::BrouwerLyddanePropagator BrouwerLyddanePropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::BrouwerLyddanePropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_514ffedd6248f0b6], a0.this$));
        }

        BrouwerLyddanePropagatorBuilder BrouwerLyddanePropagatorBuilder::copy() const
        {
          return BrouwerLyddanePropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_20a4ebdd36e580a5]));
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
        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_BrouwerLyddanePropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagatorBuilder)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagatorBuilder, t_BrouwerLyddanePropagatorBuilder, BrouwerLyddanePropagatorBuilder);

        void t_BrouwerLyddanePropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagatorBuilder), &PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder), module, "BrouwerLyddanePropagatorBuilder", 0);
        }

        void t_BrouwerLyddanePropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "class_", make_descriptor(BrouwerLyddanePropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagatorBuilder::wrap_Object(BrouwerLyddanePropagatorBuilder(((t_BrouwerLyddanePropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              ::org::orekit::orbits::OrbitType a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::orbits::PositionAngleType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDKKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::orbits::t_OrbitType::parameters_, &a9, &p9, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a10, &a11))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::t_BrouwerLyddanePropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          BrouwerLyddanePropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_BrouwerLyddanePropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProvider::class$ = NULL;
      jmethodID *AttitudeProvider::mids$ = NULL;
      bool AttitudeProvider::live$ = false;

      jclass AttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args);
      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args);

      static PyMethodDef t_AttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProvider)[] = {
        { Py_tp_methods, t_AttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeProvider, t_AttitudeProvider, AttitudeProvider);

      void t_AttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProvider), &PY_TYPE_DEF(AttitudeProvider), module, "AttitudeProvider", 0);
      }

      void t_AttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "class_", make_descriptor(AttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "wrapfn_", make_descriptor(t_AttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AttitudeProvider::wrap_Object(AttitudeProvider(((t_AttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args)
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

      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
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
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractSelfFeedingLoader::PythonAbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}
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
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillIntegrator::class$ = NULL;
        jmethodID *GillIntegrator::mids$ = NULL;
        bool GillIntegrator::live$ = false;

        jclass GillIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_29326af8fa3d587e] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegrator::GillIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > GillIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > GillIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > GillIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
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
        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args);
        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data);
        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data);
        static PyGetSetDef t_GillIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillIntegrator, a),
          DECLARE_GET_FIELD(t_GillIntegrator, b),
          DECLARE_GET_FIELD(t_GillIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegrator)[] = {
          { Py_tp_methods, t_GillIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillIntegrator_init_ },
          { Py_tp_getset, t_GillIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(GillIntegrator, t_GillIntegrator, GillIntegrator);

        void t_GillIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegrator), &PY_TYPE_DEF(GillIntegrator), module, "GillIntegrator", 0);
        }

        void t_GillIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "class_", make_descriptor(GillIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "wrapfn_", make_descriptor(t_GillIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillIntegrator::wrap_Object(GillIntegrator(((t_GillIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegrator_init_(t_GillIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegrator_getA(t_GillIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillIntegrator_getB(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillIntegrator_getC(t_GillIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(GillIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_GillIntegrator_get__a(t_GillIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillIntegrator_get__b(t_GillIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_GillIntegrator_get__c(t_GillIntegrator *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere::class$ = NULL;
        jmethodID *InterpolatingMicrosphere::mids$ = NULL;
        bool InterpolatingMicrosphere::live$ = false;

        jclass InterpolatingMicrosphere::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fdaa6566f103e9da] = env->getMethodID(cls, "<init>", "(IIDDDLorg/hipparchus/random/UnitSphereRandomVectorGenerator;)V");
            mids$[mid_copy_bc50b566c273722a] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_value_8337bea1db3c18f3] = env->getMethodID(cls, "value", "([D[[D[DDD)D");
            mids$[mid_add_a47a33f7938e1575] = env->getMethodID(cls, "add", "([DZ)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere::InterpolatingMicrosphere(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdaa6566f103e9da, a0, a1, a2, a3, a4, a5.this$)) {}

        InterpolatingMicrosphere InterpolatingMicrosphere::copy() const
        {
          return InterpolatingMicrosphere(env->callObjectMethod(this$, mids$[mid_copy_bc50b566c273722a]));
        }

        jint InterpolatingMicrosphere::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        jint InterpolatingMicrosphere::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_570ce0828f81a2c1]);
        }

        jdouble InterpolatingMicrosphere::value(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< jdouble > & a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8337bea1db3c18f3], a0.this$, a1.this$, a2.this$, a3, a4);
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
        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args);
        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data);
        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data);
        static PyGetSetDef t_InterpolatingMicrosphere__fields_[] = {
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, dimension),
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterpolatingMicrosphere__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, copy, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getSize, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere_init_ },
          { Py_tp_getset, t_InterpolatingMicrosphere__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere, t_InterpolatingMicrosphere, InterpolatingMicrosphere);

        void t_InterpolatingMicrosphere::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere), &PY_TYPE_DEF(InterpolatingMicrosphere), module, "InterpolatingMicrosphere", 0);
        }

        void t_InterpolatingMicrosphere::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "class_", make_descriptor(InterpolatingMicrosphere::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere::wrap_Object(InterpolatingMicrosphere(((t_InterpolatingMicrosphere *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::random::UnitSphereRandomVectorGenerator a5((jobject) NULL);
          InterpolatingMicrosphere object((jobject) NULL);

          if (!parseArgs(args, "IIDDDk", ::org::hipparchus::random::UnitSphereRandomVectorGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = InterpolatingMicrosphere(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self)
        {
          InterpolatingMicrosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_InterpolatingMicrosphere::wrap_Object(result);
        }

        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble result;

          if (!parseArgs(args, "[D[[D[DDD", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6638e756ca12feb3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_7affef18db7eac0d] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_0798d15d0f4aa457] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6638e756ca12feb3, a0, a1.this$)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7affef18db7eac0d, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedFieldAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_3d53ef1ca7ad5f8c]));
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
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator), module, "TimeStampedFieldAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldAngularCoordinatesHermiteInterpolator(((t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PointingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
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
          mids$[mid_init$_d3816c2d7c0801cf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DDDDD)V");
          mids$[mid_getNormal_e6f00ace1decd27c] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_abc43395638fd218] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointingPanel::PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_d3816c2d7c0801cf, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PointingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_e6f00ace1decd27c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PointingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
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
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TurnAroundRange::class$ = NULL;
        jmethodID *TurnAroundRange::mids$ = NULL;
        bool TurnAroundRange::live$ = false;
        ::java::lang::String *TurnAroundRange::MEASUREMENT_TYPE = NULL;

        jclass TurnAroundRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TurnAroundRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3001df949fd9e0a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimaryStation_58e3efb0e9576916] = env->getMethodID(cls, "getPrimaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondaryStation_58e3efb0e9576916] = env->getMethodID(cls, "getSecondaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TurnAroundRange::TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3001df949fd9e0a4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getPrimaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimaryStation_58e3efb0e9576916]));
        }

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getSecondaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondaryStation_58e3efb0e9576916]));
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
        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args);
        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data);
        static PyGetSetDef t_TurnAroundRange__fields_[] = {
          DECLARE_GET_FIELD(t_TurnAroundRange, primaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, secondaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TurnAroundRange__methods_[] = {
          DECLARE_METHOD(t_TurnAroundRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_TurnAroundRange, getPrimaryStation, METH_NOARGS),
          DECLARE_METHOD(t_TurnAroundRange, getSecondaryStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TurnAroundRange)[] = {
          { Py_tp_methods, t_TurnAroundRange__methods_ },
          { Py_tp_init, (void *) t_TurnAroundRange_init_ },
          { Py_tp_getset, t_TurnAroundRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TurnAroundRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TurnAroundRange, t_TurnAroundRange, TurnAroundRange);
        PyObject *t_TurnAroundRange::wrap_Object(const TurnAroundRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TurnAroundRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TurnAroundRange::install(PyObject *module)
        {
          installType(&PY_TYPE(TurnAroundRange), &PY_TYPE_DEF(TurnAroundRange), module, "TurnAroundRange", 0);
        }

        void t_TurnAroundRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "class_", make_descriptor(TurnAroundRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "wrapfn_", make_descriptor(t_TurnAroundRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(TurnAroundRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*TurnAroundRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TurnAroundRange::initializeClass, 1)))
            return NULL;
          return t_TurnAroundRange::wrap_Object(TurnAroundRange(((t_TurnAroundRange *) arg)->object.this$));
        }
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TurnAroundRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TurnAroundRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TurnAroundRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterListConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterListConsumer::mids$ = NULL;
            bool ParseToken$CenterListConsumer::live$ = false;

            jclass ParseToken$CenterListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_de3e021e7266b71e] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_de3e021e7266b71e], a0.this$);
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
            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterListConsumer, t_ParseToken$CenterListConsumer, ParseToken$CenterListConsumer);

            void t_ParseToken$CenterListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterListConsumer), &PY_TYPE_DEF(ParseToken$CenterListConsumer), module, "ParseToken$CenterListConsumer", 0);
            }

            void t_ParseToken$CenterListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "class_", make_descriptor(ParseToken$CenterListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterListConsumer::wrap_Object(ParseToken$CenterListConsumer(((t_ParseToken$CenterListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
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
#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *DiskGenerator::class$ = NULL;
          jmethodID *DiskGenerator::mids$ = NULL;
          bool DiskGenerator::live$ = false;

          jclass DiskGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/DiskGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_8eaea97b2dcfeb64] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DiskGenerator::DiskGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall DiskGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_8eaea97b2dcfeb64], a0.this$));
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
          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg);

          static PyMethodDef t_DiskGenerator__methods_[] = {
            DECLARE_METHOD(t_DiskGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiskGenerator)[] = {
            { Py_tp_methods, t_DiskGenerator__methods_ },
            { Py_tp_init, (void *) t_DiskGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiskGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DiskGenerator, t_DiskGenerator, DiskGenerator);

          void t_DiskGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(DiskGenerator), &PY_TYPE_DEF(DiskGenerator), module, "DiskGenerator", 0);
          }

          void t_DiskGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "class_", make_descriptor(DiskGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "wrapfn_", make_descriptor(t_DiskGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiskGenerator::initializeClass, 1)))
              return NULL;
            return t_DiskGenerator::wrap_Object(DiskGenerator(((t_DiskGenerator *) arg)->object.this$));
          }
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiskGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds)
          {
            DiskGenerator object((jobject) NULL);

            INT_CALL(object = DiskGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmWriter::class$ = NULL;
              jmethodID *OpmWriter::mids$ = NULL;
              bool OpmWriter::live$ = false;
              jdouble OpmWriter::CCSDS_OPM_VERS = (jdouble) 0;
              jint OpmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OpmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f30abb95e05bcdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OPM_VERS = env->getStaticDoubleField(cls, "CCSDS_OPM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmWriter::OpmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6f30abb95e05bcdd, a0.this$, a1.this$, a2.this$)) {}
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
            namespace opm {
              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args);
              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data);
              static PyGetSetDef t_OpmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OpmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmWriter__methods_[] = {
                DECLARE_METHOD(t_OpmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmWriter)[] = {
                { Py_tp_methods, t_OpmWriter__methods_ },
                { Py_tp_init, (void *) t_OpmWriter_init_ },
                { Py_tp_getset, t_OpmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OpmWriter, t_OpmWriter, OpmWriter);
              PyObject *t_OpmWriter::wrap_Object(const OpmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OpmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OpmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmWriter), &PY_TYPE_DEF(OpmWriter), module, "OpmWriter", 0);
              }

              void t_OpmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "class_", make_descriptor(OpmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "wrapfn_", make_descriptor(t_OpmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "CCSDS_OPM_VERS", make_descriptor(OpmWriter::CCSDS_OPM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "KVN_PADDING_WIDTH", make_descriptor(OpmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmWriter::initializeClass, 1)))
                  return NULL;
                return t_OpmWriter::wrap_Object(OpmWriter(((t_OpmWriter *) arg)->object.this$));
              }
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OpmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OpmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Opm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data)
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
