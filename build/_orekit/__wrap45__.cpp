#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A1::class$ = NULL;
          jmethodID *SubFrame4A1::mids$ = NULL;
          bool SubFrame4A1::live$ = false;

          jclass SubFrame4A1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A1");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A1__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A1, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A1)[] = {
            { Py_tp_methods, t_SubFrame4A1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A1, t_SubFrame4A1, SubFrame4A1);

          void t_SubFrame4A1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A1), &PY_TYPE_DEF(SubFrame4A1), module, "SubFrame4A1", 0);
          }

          void t_SubFrame4A1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "class_", make_descriptor(SubFrame4A1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "wrapfn_", make_descriptor(t_SubFrame4A1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A1::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A1::wrap_Object(SubFrame4A1(((t_SubFrame4A1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A1::initializeClass, 0))
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
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *DefaultEncounterLOF::class$ = NULL;
        jmethodID *DefaultEncounterLOF::mids$ = NULL;
        bool DefaultEncounterLOF::live$ = false;

        jclass DefaultEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/DefaultEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb3f88d6e1120c95] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_0cd9ca2f4cf79e0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_d59b144da7c7851f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_2ba248090f65b129] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_bb3f88d6e1120c95, a0.this$)) {}

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_0cd9ca2f4cf79e0a, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc], a0.this$));
        }

        ::java::lang::String DefaultEncounterLOF::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation DefaultEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_d59b144da7c7851f], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation DefaultEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_2ba248090f65b129], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data);
        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data);
        static PyGetSetDef t_DefaultEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DefaultEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_DefaultEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getName, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DefaultEncounterLOF)[] = {
          { Py_tp_methods, t_DefaultEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_DefaultEncounterLOF_init_ },
          { Py_tp_getset, t_DefaultEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DefaultEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(DefaultEncounterLOF, t_DefaultEncounterLOF, DefaultEncounterLOF);

        void t_DefaultEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(DefaultEncounterLOF), &PY_TYPE_DEF(DefaultEncounterLOF), module, "DefaultEncounterLOF", 0);
        }

        void t_DefaultEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "class_", make_descriptor(DefaultEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "wrapfn_", make_descriptor(t_DefaultEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DefaultEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_DefaultEncounterLOF::wrap_Object(DefaultEncounterLOF(((t_DefaultEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DefaultEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
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

        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data)
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
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_3a0f577f9dfae88f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractRadiationForceModel::PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_3a0f577f9dfae88f, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::java::util::List PythonAbstractRadiationForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void PythonAbstractRadiationForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadata::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadata::live$ = false;

              jclass AttitudeCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCovBasis_11b109bd155ca898] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_11b109bd155ca898] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovID_11b109bd155ca898] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovPrevID_11b109bd155ca898] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovType_dbbc6c3c22ca640c] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_setCovBasis_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovType_c9a39b1c926f77b0] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistoryMetadata::AttitudeCovarianceHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_5d5dd95b04037824]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovType_dbbc6c3c22ca640c]));
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_c9a39b1c926f77b0], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::validate(jdouble a0) const
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
            namespace acm {
              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadata, t_AttitudeCovarianceHistoryMetadata, AttitudeCovarianceHistoryMetadata);

              void t_AttitudeCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadata), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata), module, "AttitudeCovarianceHistoryMetadata", 0);
              }

              void t_AttitudeCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "class_", make_descriptor(AttitudeCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadata::wrap_Object(AttitudeCovarianceHistoryMetadata(((t_AttitudeCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeCovarianceHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeCovarianceHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
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
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractFrames::class$ = NULL;
      jmethodID *PythonAbstractFrames::mids$ = NULL;
      bool PythonAbstractFrames::live$ = false;

      jclass PythonAbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_404846c6e43ec406] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractFrames::PythonAbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_404846c6e43ec406, a0.this$, a1.this$)) {}

      void PythonAbstractFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self);
      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data);
      static PyGetSetDef t_PythonAbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractFrames__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFrames)[] = {
        { Py_tp_methods, t_PythonAbstractFrames__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractFrames_init_ },
        { Py_tp_getset, t_PythonAbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(PythonAbstractFrames, t_PythonAbstractFrames, PythonAbstractFrames);

      void t_PythonAbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractFrames), &PY_TYPE_DEF(PythonAbstractFrames), module, "PythonAbstractFrames", 1);
      }

      void t_PythonAbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "class_", make_descriptor(PythonAbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "wrapfn_", make_descriptor(t_PythonAbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractFrames_getEOPHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractFrames_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractFrames::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractFrames::wrap_Object(PythonAbstractFrames(((t_PythonAbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        PythonAbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = PythonAbstractFrames(a0, a1));
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

      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data)
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
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator::live$ = false;

        jclass FieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_aee4c637cf10d4b6] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/FieldAdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_570ce0828f81a2c1] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_11b109bd155ca898] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_eba8e72a22c984ac] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPropagationType_b2e499d9c793fc25] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_b108b35ef48e27bd] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_072c8635f2164db9] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setResetAtEnd_bd04c9335fb9e4cf] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_setUpEventDetector_847da6d9d3822865] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_initMapper_484998d88974267b] = env->getMethodID(cls, "initMapper", "(Lorg/hipparchus/Field;)V");
            mids$[mid_setOrbitType_48a062bf972c4ab5] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_4ca1644ed7c72fe3] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_isMeanOrbit_b2e499d9c793fc25] = env->getMethodID(cls, "isMeanOrbit", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getIntegrator_64366de6ee97364a] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
            mids$[mid_beforeIntegration_8e8de2be1664674a] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_afterIntegration_0fa09c18fee449d5] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_02cea343d9f71933] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_createMapper_16c8184497a1d794] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_75bae68924620d17] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpUserEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_aee4c637cf10d4b6], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_f929ebd2a84dbfe7], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
        }

        ::java::util::List FieldAbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_2afa36052df4765d]));
        }

        jint FieldAbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_570ce0828f81a2c1]);
        }

        jint FieldAbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_570ce0828f81a2c1]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_54ac43f1e933cf20]));
        }

        ::java::util::Collection FieldAbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
        }

        ::java::lang::String FieldAbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_11b109bd155ca898]));
        }

        JArray< ::java::lang::String > FieldAbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractIntegratedPropagator::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_eba8e72a22c984ac]));
        }

        ::org::orekit::propagation::PropagationType FieldAbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_b2e499d9c793fc25]));
        }

        jboolean FieldAbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_b108b35ef48e27bd]);
        }

        jboolean FieldAbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_f6f1ea8aef3019eb], a0.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fc770c29e3468de8], a0.this$, a1.this$));
        }

        void FieldAbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_072c8635f2164db9], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_bd04c9335fb9e4cf], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_FieldAbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, resetAtEnd),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator, t_FieldAbstractIntegratedPropagator, FieldAbstractIntegratedPropagator);
        PyObject *t_FieldAbstractIntegratedPropagator::wrap_Object(const FieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator), module, "FieldAbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_FieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "class_", make_descriptor(FieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator::wrap_Object(FieldAbstractIntegratedPropagator(((t_FieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::integration::t_FieldAdditionalDerivativesProvider::parameters_))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *EnumeratedDistribution::class$ = NULL;
      jmethodID *EnumeratedDistribution::mids$ = NULL;
      bool EnumeratedDistribution::live$ = false;

      jclass EnumeratedDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/EnumeratedDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_checkAndNormalize_ac3d742ccc742f22] = env->getStaticMethodID(cls, "checkAndNormalize", "([D)[D");
          mids$[mid_getPmf_2afa36052df4765d] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
          mids$[mid_probability_ca14d4d45e84aa16] = env->getMethodID(cls, "probability", "(Ljava/lang/Object;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EnumeratedDistribution::EnumeratedDistribution(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

      JArray< jdouble > EnumeratedDistribution::checkAndNormalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_checkAndNormalize_ac3d742ccc742f22], a0.this$));
      }

      ::java::util::List EnumeratedDistribution::getPmf() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_2afa36052df4765d]));
      }

      jdouble EnumeratedDistribution::probability(const ::java::lang::Object & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_ca14d4d45e84aa16], a0.this$);
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
      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args);
      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self);
      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data);
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data);
      static PyGetSetDef t_EnumeratedDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_EnumeratedDistribution, pmf),
        DECLARE_GET_FIELD(t_EnumeratedDistribution, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EnumeratedDistribution__methods_[] = {
        DECLARE_METHOD(t_EnumeratedDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, of_, METH_VARARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, checkAndNormalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, getPmf, METH_NOARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, probability, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EnumeratedDistribution)[] = {
        { Py_tp_methods, t_EnumeratedDistribution__methods_ },
        { Py_tp_init, (void *) t_EnumeratedDistribution_init_ },
        { Py_tp_getset, t_EnumeratedDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EnumeratedDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EnumeratedDistribution, t_EnumeratedDistribution, EnumeratedDistribution);
      PyObject *t_EnumeratedDistribution::wrap_Object(const EnumeratedDistribution& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_EnumeratedDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_EnumeratedDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(EnumeratedDistribution), &PY_TYPE_DEF(EnumeratedDistribution), module, "EnumeratedDistribution", 0);
      }

      void t_EnumeratedDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "class_", make_descriptor(EnumeratedDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "wrapfn_", make_descriptor(t_EnumeratedDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EnumeratedDistribution::initializeClass, 1)))
          return NULL;
        return t_EnumeratedDistribution::wrap_Object(EnumeratedDistribution(((t_EnumeratedDistribution *) arg)->object.this$));
      }
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EnumeratedDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        EnumeratedDistribution object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = EnumeratedDistribution(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::distribution::EnumeratedDistribution::checkAndNormalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "checkAndNormalize", arg);
        return NULL;
      }

      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(result = self->object.probability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", arg);
        return NULL;
      }
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/util/Pair.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonAbstractBatchLSModel::class$ = NULL;
        jmethodID *PythonAbstractBatchLSModel::mids$ = NULL;
        bool PythonAbstractBatchLSModel::live$ = false;

        jclass PythonAbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_013b9b75e2d29096] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_e80966db3f120c01] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_e5faaf40266e83a3] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createPropagators_eb824313fdad97ad] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;");
            mids$[mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEvaluationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedPropagationDriversForBuilder_e970077e9411a499] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_b108b35ef48e27bd] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEvaluationsCounter_97761a13d2e9faa2] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_97761a13d2e9faa2] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f3b8dd3e226035d1] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractBatchLSModel::PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_013b9b75e2d29096, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > PythonAbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator >(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_createPropagators_47cc2992b4c6c152], a0.this$));
        }

        void PythonAbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7], a0, a1.this$);
        }

        void PythonAbstractBatchLSModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jint PythonAbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getEvaluationsCount_570ce0828f81a2c1]);
        }

        jint PythonAbstractBatchLSModel::getIterationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getIterationsCount_570ce0828f81a2c1]);
        }

        ::org::orekit::utils::ParameterDriversList PythonAbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getSelectedPropagationDriversForBuilder_e970077e9411a499], a0));
        }

        jboolean PythonAbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callNonvirtualBooleanMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_isForwardPropagation_b108b35ef48e27bd]);
        }

        jlong PythonAbstractBatchLSModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractBatchLSModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
        }

        void PythonAbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setEvaluationsCounter_97761a13d2e9faa2], a0.this$);
        }

        void PythonAbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setIterationsCounter_97761a13d2e9faa2], a0.this$);
        }

        ::org::hipparchus::util::Pair PythonAbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_value_f3b8dd3e226035d1], a0.this$));
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
        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self);
        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0);
        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data);
        static PyGetSetDef t_PythonAbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractBatchLSModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, createPropagators, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getEvaluationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getIterationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, isForwardPropagation, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, pythonExtension, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setEvaluationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setIterationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBatchLSModel)[] = {
          { Py_tp_methods, t_PythonAbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractBatchLSModel_init_ },
          { Py_tp_getset, t_PythonAbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractBatchLSModel, t_PythonAbstractBatchLSModel, PythonAbstractBatchLSModel);

        void t_PythonAbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractBatchLSModel), &PY_TYPE_DEF(PythonAbstractBatchLSModel), module, "PythonAbstractBatchLSModel", 1);
        }

        void t_PythonAbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "class_", make_descriptor(PythonAbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "wrapfn_", make_descriptor(t_PythonAbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractBatchLSModel::initializeClass);
          JNINativeMethod methods[] = {
            { "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonAbstractBatchLSModel_configureHarvester0 },
            { "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractBatchLSModel_configureOrbits1 },
            { "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;", (void *) t_PythonAbstractBatchLSModel_createPropagators2 },
            { "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3 },
            { "getEvaluationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getEvaluationsCount4 },
            { "getIterationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getIterationsCount5 },
            { "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6 },
            { "isForwardPropagation", "()Z", (void *) t_PythonAbstractBatchLSModel_isForwardPropagation7 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractBatchLSModel_pythonDecRef8 },
            { "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setEvaluationsCounter9 },
            { "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setIterationsCounter10 },
            { "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;", (void *) t_PythonAbstractBatchLSModel_value11 },
          };
          env->registerNatives(cls, methods, 12);
        }

        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractBatchLSModel::wrap_Object(PythonAbstractBatchLSModel(((t_PythonAbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          PythonAbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractBatchLSModel(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::integration::t_AbstractIntegratedPropagator::wrap_jobject);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "createPropagators", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "fetchEvaluatedMeasurement", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getEvaluationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getIterationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getIterationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getSelectedPropagationDriversForBuilder", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isForwardPropagation());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "isForwardPropagation", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args)
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

        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setEvaluationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setIterationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "value", args, 2);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *result = PyObject_CallMethod(obj, "configureHarvester", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
          {
            throwTypeError("configureHarvester", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(::org::orekit::propagation::MatricesHarvester(a0));
          PyObject *o1 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a1));
          PyObject *result = PyObject_CallMethod(obj, "configureOrbits", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("configureOrbits", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "createPropagators", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator::initializeClass, &value))
          {
            throwTypeError("createPropagators", result);
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

        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o1 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a1));
          PyObject *result = PyObject_CallMethod(obj, "fetchEvaluatedMeasurement", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getEvaluationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getEvaluationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getIterationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getIterationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedPropagationDriversForBuilder", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getSelectedPropagationDriversForBuilder", result);
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

        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForwardPropagation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForwardPropagation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setEvaluationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setIterationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::util::Pair value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::util::Pair::initializeClass, &value))
          {
            throwTypeError("value", result);
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

        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data)
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
#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractFieldMatrix::class$ = NULL;
      jmethodID *AbstractFieldMatrix::mids$ = NULL;
      bool AbstractFieldMatrix::live$ = false;

      jclass AbstractFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_1409f31dc074a11f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_d302e4fbc652587d] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_c992983685c753c5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_7a58809e5177d242] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_66401962bb2535a8] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_5d35d650870a3dcb] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_b21ddf58698298c0] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_819edc89e6437565] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_75f68840bec35355] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_ef29faa67be274b8] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_b21ddf58698298c0] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_819edc89e6437565] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_ccd02e1d2a8268ce] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_1033b0d2443c0299] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_99097cb60cf2d774] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_b108b35ef48e27bd] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_1409f31dc074a11f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_d302e4fbc652587d] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_operate_91d3c6b4d1752243] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_a657ce460dba8c79] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_d85895e9fba6ff1d] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_91d3c6b4d1752243] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_1409f31dc074a11f] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_a657ce460dba8c79] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_57b87e024c8cac75] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_57b87e024c8cac75] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_baf264dbcc1722ae] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_d302e4fbc652587d] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_baf264dbcc1722ae] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_e8cdaf624d2bb79a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_1409f31dc074a11f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_c992983685c753c5] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_624c889f4088e148] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_624c889f4088e148] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_624c889f4088e148] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkAdditionCompatible_3c6edf548344b9f0] = env->getMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkMultiplicationCompatible_3c6edf548344b9f0] = env->getMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkRowIndex_99803b0791f320ff] = env->getMethodID(cls, "checkRowIndex", "(I)V");
          mids$[mid_checkColumnIndex_99803b0791f320ff] = env->getMethodID(cls, "checkColumnIndex", "(I)V");
          mids$[mid_checkSubtractionCompatible_3c6edf548344b9f0] = env->getMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubMatrixIndex_b091d33670ea17ab] = env->getMethodID(cls, "checkSubMatrixIndex", "([I[I)V");
          mids$[mid_checkSubMatrixIndex_f7a99d2369864910] = env->getMethodID(cls, "checkSubMatrixIndex", "(IIII)V");
          mids$[mid_extractField_863b98f1c9cc720d] = env->getStaticMethodID(cls, "extractField", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");
          mids$[mid_extractField_4c041f550098e429] = env->getStaticMethodID(cls, "extractField", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_1409f31dc074a11f], a0.this$));
      }

      void AbstractFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_c992983685c753c5]));
      }

      void AbstractFieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_7a58809e5177d242], a0.this$, a1.this$, a2.this$);
      }

      void AbstractFieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_66401962bb2535a8], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5d35d650870a3dcb], a0, a1));
      }

      jboolean AbstractFieldMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_b21ddf58698298c0], a0));
      }

      jint AbstractFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_819edc89e6437565], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > AbstractFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_75f68840bec35355]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ef29faa67be274b8], a0, a1));
      }

      ::org::hipparchus::Field AbstractFieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_b21ddf58698298c0], a0));
      }

      jint AbstractFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_819edc89e6437565], a0));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_ccd02e1d2a8268ce], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1033b0d2443c0299], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_99097cb60cf2d774]));
      }

      jint AbstractFieldMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean AbstractFieldMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_1409f31dc074a11f], a0.this$));
      }

      void AbstractFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_91d3c6b4d1752243], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_d85895e9fba6ff1d], a0));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_91d3c6b4d1752243], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_1409f31dc074a11f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_57b87e024c8cac75], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_57b87e024c8cac75], a0.this$));
      }

      void AbstractFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_baf264dbcc1722ae], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void AbstractFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      void AbstractFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_baf264dbcc1722ae], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void AbstractFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_e8cdaf624d2bb79a], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_1409f31dc074a11f], a0.this$));
      }

      ::java::lang::String AbstractFieldMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_c992983685c753c5]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data);
      static PyGetSetDef t_AbstractFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, data),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, field),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, square),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, trace),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldMatrix)[] = {
        { Py_tp_methods, t_AbstractFieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldMatrix, t_AbstractFieldMatrix, AbstractFieldMatrix);
      PyObject *t_AbstractFieldMatrix::wrap_Object(const AbstractFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldMatrix), &PY_TYPE_DEF(AbstractFieldMatrix), module, "AbstractFieldMatrix", 0);
      }

      void t_AbstractFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "class_", make_descriptor(AbstractFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "wrapfn_", make_descriptor(t_AbstractFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldMatrix::wrap_Object(AbstractFieldMatrix(((t_AbstractFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5da06482a46416aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_closestPoint_cdaae38017a00464] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_contains_ab4ed00ccf0defd6] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_e41f841ed79f933c] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)D");
              mids$[mid_distance_bf473e7c74e5ce2b] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_fromDirection_b436cebd67c93f56] = env->getStaticMethodID(cls, "fromDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getAbscissa_bf473e7c74e5ce2b] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDirection_d52645e0d4c07563] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOrigin_d52645e0d4c07563] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_cdaae38017a00464] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_6639e54dacc07051] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Z");
              mids$[mid_pointAt_9137bba253a33d9c] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_reset_8f7d2a24ef2ff591] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revert_9fb9cdc35bfe2f74] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_toSpace_25054c2060d7aee4] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_84b1343e67eeaa7b] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_d43a3b6426dc1754] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_b46f57fa6217d00f] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_wholeLine_a538b105c8caf09b] = env->getMethodID(cls, "wholeLine", "()Lorg/hipparchus/geometry/euclidean/threed/SubLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5da06482a46416aa, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::closestPoint(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_cdaae38017a00464], a0.this$));
          }

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_ab4ed00ccf0defd6], a0.this$);
          }

          jdouble Line::distance(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_e41f841ed79f933c], a0.this$);
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_bf473e7c74e5ce2b], a0.this$);
          }

          Line Line::fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return Line(env->callStaticObjectMethod(cls, mids$[mid_fromDirection_b436cebd67c93f56], a0.this$, a1.this$, a2));
          }

          jdouble Line::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAbscissa_bf473e7c74e5ce2b], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_d52645e0d4c07563]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_cdaae38017a00464], a0.this$));
          }

          jboolean Line::isSimilarTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_6639e54dacc07051], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_9137bba253a33d9c], a0));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_8f7d2a24ef2ff591], a0.this$, a1.this$);
          }

          Line Line::revert() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_revert_9fb9cdc35bfe2f74]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_25054c2060d7aee4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_84b1343e67eeaa7b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_d43a3b6426dc1754], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b46f57fa6217d00f], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubLine Line::wholeLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubLine(env->callObjectMethod(this$, mids$[mid_wholeLine_a538b105c8caf09b]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_distance(t_Line *self, PyObject *args);
          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg);
          static PyObject *t_Line_getDirection(t_Line *self);
          static PyObject *t_Line_getOrigin(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revert(t_Line *self);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_wholeLine(t_Line *self);
          static PyObject *t_Line_get__direction(t_Line *self, void *data);
          static PyObject *t_Line_get__origin(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GET_FIELD(t_Line, direction),
            DECLARE_GET_FIELD(t_Line, origin),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, closestPoint, METH_O),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, distance, METH_VARARGS),
            DECLARE_METHOD(t_Line, fromDirection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, getAbscissa, METH_O),
            DECLARE_METHOD(t_Line, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Line, pointAt, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revert, METH_NOARGS),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, wholeLine, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Line(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Line::fromDirection(a0, a1, a2));
              return t_Line::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "fromDirection", args);
            return NULL;
          }

          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAbscissa(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", arg);
            return NULL;
          }

          static PyObject *t_Line_getDirection(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getOrigin(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg)
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

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revert(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_wholeLine(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_get__direction(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__origin(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
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
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/InputStream.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/io/OutputStream.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addLineSensor_d46e5d4c4ec262ff] = env->getMethodID(cls, "addLineSensor", "(Lorg/orekit/rugged/linesensor/LineSensor;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_build_a3579a23a3f3f05f] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_clearLineSensors_c1850c6a9b11703c] = env->getMethodID(cls, "clearLineSensors", "()Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_getAFilter_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getAInterpolationNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getAInterpolationNumber", "()I");
            mids$[mid_getAberrationOfLightCorrection_b108b35ef48e27bd] = env->getMethodID(cls, "getAberrationOfLightCorrection", "()Z");
            mids$[mid_getAlgorithm_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getConstantElevation_dff5885c2c873297] = env->getMethodID(cls, "getConstantElevation", "()D");
            mids$[mid_getEllipsoid_0cd7cb35607f9c90] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getLightTimeCorrection_b108b35ef48e27bd] = env->getMethodID(cls, "getLightTimeCorrection", "()Z");
            mids$[mid_getLineSensors_2afa36052df4765d] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/List;");
            mids$[mid_getMaxCachedTiles_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxCachedTiles", "()I");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOvershootTolerance_dff5885c2c873297] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getPVFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getPVFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getPVInterpolationNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getPVInterpolationNumber", "()I");
            mids$[mid_getPositionsVelocities_2afa36052df4765d] = env->getMethodID(cls, "getPositionsVelocities", "()Ljava/util/List;");
            mids$[mid_getQuaternions_2afa36052df4765d] = env->getMethodID(cls, "getQuaternions", "()Ljava/util/List;");
            mids$[mid_getRefractionCorrection_8a9b3bb0455f2a2d] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getTStep_dff5885c2c873297] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_getTileUpdater_6b8556435f5a4994] = env->getMethodID(cls, "getTileUpdater", "()Lorg/orekit/rugged/raster/TileUpdater;");
            mids$[mid_setAberrationOfLightCorrection_e8c0e4822609da67] = env->getMethodID(cls, "setAberrationOfLightCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setAlgorithm_9c10cc76da81de16] = env->getMethodID(cls, "setAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setConstantElevation_ba7a898f5e37d3f3] = env->getMethodID(cls, "setConstantElevation", "(D)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setDigitalElevationModel_10e209a6feba6833] = env->getMethodID(cls, "setDigitalElevationModel", "(Lorg/orekit/rugged/raster/TileUpdater;I)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_7a6317d70e281d65] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_516a7e7aea2a14bd] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/rugged/api/EllipsoidId;Lorg/orekit/rugged/api/BodyRotatingFrameId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setLightTimeCorrection_e8c0e4822609da67] = env->getMethodID(cls, "setLightTimeCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setRefractionCorrection_79942275284be399] = env->getMethodID(cls, "setRefractionCorrection", "(Lorg/orekit/rugged/refraction/AtmosphericRefraction;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTimeSpan_26c0baa1e059a0c8] = env->getMethodID(cls, "setTimeSpan", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_f72ae43d21f8c96d] = env->getMethodID(cls, "setTrajectory", "(DILorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/propagation/Propagator;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_62378cbd85368de2] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/rugged/api/InertialFrameId;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_6b1ad96c5d4f0da8] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectoryAndTimeSpan_49755b1a1d43b661] = env->getMethodID(cls, "setTrajectoryAndTimeSpan", "(Ljava/io/InputStream;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_storeInterpolator_fd7cb6689cfa6eeb] = env->getMethodID(cls, "storeInterpolator", "(Ljava/io/OutputStream;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedBuilder::RuggedBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        RuggedBuilder RuggedBuilder::addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_addLineSensor_d46e5d4c4ec262ff], a0.this$));
        }

        ::org::orekit::rugged::api::Rugged RuggedBuilder::build() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_build_a3579a23a3f3f05f]));
        }

        RuggedBuilder RuggedBuilder::clearLineSensors() const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_clearLineSensors_c1850c6a9b11703c]));
        }

        ::org::orekit::utils::AngularDerivativesFilter RuggedBuilder::getAFilter() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAFilter_3d53ef1ca7ad5f8c]));
        }

        jint RuggedBuilder::getAInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getAInterpolationNumber_570ce0828f81a2c1]);
        }

        jboolean RuggedBuilder::getAberrationOfLightCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getAberrationOfLightCorrection_b108b35ef48e27bd]);
        }

        ::org::orekit::rugged::api::AlgorithmId RuggedBuilder::getAlgorithm() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithm_da9f33328b8f3962]));
        }

        jdouble RuggedBuilder::getConstantElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantElevation_dff5885c2c873297]);
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid RuggedBuilder::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_0cd7cb35607f9c90]));
        }

        ::org::orekit::frames::Frame RuggedBuilder::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
        }

        jboolean RuggedBuilder::getLightTimeCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getLightTimeCorrection_b108b35ef48e27bd]);
        }

        ::java::util::List RuggedBuilder::getLineSensors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLineSensors_2afa36052df4765d]));
        }

        jint RuggedBuilder::getMaxCachedTiles() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxCachedTiles_570ce0828f81a2c1]);
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        ::java::lang::String RuggedBuilder::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        jdouble RuggedBuilder::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_dff5885c2c873297]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter RuggedBuilder::getPVFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVFilter_16e9a7b5414faf2d]));
        }

        jint RuggedBuilder::getPVInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPVInterpolationNumber_570ce0828f81a2c1]);
        }

        ::java::util::List RuggedBuilder::getPositionsVelocities() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPositionsVelocities_2afa36052df4765d]));
        }

        ::java::util::List RuggedBuilder::getQuaternions() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQuaternions_2afa36052df4765d]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction RuggedBuilder::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8a9b3bb0455f2a2d]));
        }

        jdouble RuggedBuilder::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_dff5885c2c873297]);
        }

        ::org::orekit::rugged::raster::TileUpdater RuggedBuilder::getTileUpdater() const
        {
          return ::org::orekit::rugged::raster::TileUpdater(env->callObjectMethod(this$, mids$[mid_getTileUpdater_6b8556435f5a4994]));
        }

        RuggedBuilder RuggedBuilder::setAberrationOfLightCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAberrationOfLightCorrection_e8c0e4822609da67], a0));
        }

        RuggedBuilder RuggedBuilder::setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAlgorithm_9c10cc76da81de16], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setConstantElevation(jdouble a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setConstantElevation_ba7a898f5e37d3f3], a0));
        }

        RuggedBuilder RuggedBuilder::setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setDigitalElevationModel_10e209a6feba6833], a0.this$, a1));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_7a6317d70e281d65], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId & a0, const ::org::orekit::rugged::api::BodyRotatingFrameId & a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_516a7e7aea2a14bd], a0.this$, a1.this$));
        }

        RuggedBuilder RuggedBuilder::setLightTimeCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setLightTimeCorrection_e8c0e4822609da67], a0));
        }

        void RuggedBuilder::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_d0bc48d5b00dc40c], a0.this$);
        }

        RuggedBuilder RuggedBuilder::setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setRefractionCorrection_79942275284be399], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setTimeSpan(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTimeSpan_26c0baa1e059a0c8], a0.this$, a1.this$, a2, a3));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(jdouble a0, jint a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::utils::AngularDerivativesFilter & a3, const ::org::orekit::propagation::Propagator & a4) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_f72ae43d21f8c96d], a0, a1, a2.this$, a3.this$, a4.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::rugged::api::InertialFrameId & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_62378cbd85368de2], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_6b1ad96c5d4f0da8], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectoryAndTimeSpan(const ::java::io::InputStream & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectoryAndTimeSpan_49755b1a1d43b661], a0.this$));
        }

        void RuggedBuilder::storeInterpolator(const ::java::io::OutputStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_storeInterpolator_fd7cb6689cfa6eeb], a0.this$);
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
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldDenseOutputModel::class$ = NULL;
      jmethodID *FieldDenseOutputModel::mids$ = NULL;
      bool FieldDenseOutputModel::live$ = false;

      jclass FieldDenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldDenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_711273d34eb486fb] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/FieldDenseOutputModel;)V");
          mids$[mid_finish_22d6c75b64070b54] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_eba8e72a22c984ac] = env->getMethodID(cls, "getFinalTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInitialTime_eba8e72a22c984ac] = env->getMethodID(cls, "getInitialTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInterpolatedState_ad18f3cde52c81b9] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_handleStep_f31e7e3a46e05334] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
          mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDenseOutputModel::FieldDenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void FieldDenseOutputModel::append(const FieldDenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_711273d34eb486fb], a0.this$);
      }

      void FieldDenseOutputModel::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_22d6c75b64070b54], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getFinalTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFinalTime_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getInitialTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getInitialTime_eba8e72a22c984ac]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldDenseOutputModel::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_ad18f3cde52c81b9], a0.this$));
      }

      void FieldDenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_f31e7e3a46e05334], a0.this$);
      }

      void FieldDenseOutputModel::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
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
      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args);
      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args);
      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data);
      static PyGetSetDef t_FieldDenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, initialTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_FieldDenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDenseOutputModel)[] = {
        { Py_tp_methods, t_FieldDenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_FieldDenseOutputModel_init_ },
        { Py_tp_getset, t_FieldDenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDenseOutputModel, t_FieldDenseOutputModel, FieldDenseOutputModel);
      PyObject *t_FieldDenseOutputModel::wrap_Object(const FieldDenseOutputModel& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDenseOutputModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDenseOutputModel), &PY_TYPE_DEF(FieldDenseOutputModel), module, "FieldDenseOutputModel", 0);
      }

      void t_FieldDenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "class_", make_descriptor(FieldDenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "wrapfn_", make_descriptor(t_FieldDenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_FieldDenseOutputModel::wrap_Object(FieldDenseOutputModel(((t_FieldDenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        FieldDenseOutputModel object((jobject) NULL);

        INT_CALL(object = FieldDenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        FieldDenseOutputModel a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldDenseOutputModel::initializeClass, &a0, &p0, t_FieldDenseOutputModel::parameters_))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
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
            mids$[mid_toSpace_c48805c2dda937c6] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_toSubSpace_c48805c2dda937c6] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Embedding::toSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSpace_c48805c2dda937c6], a0.this$));
        }

        ::org::hipparchus::geometry::Point Embedding::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_c48805c2dda937c6], a0.this$));
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool PythonAbstractAnalyticalMatricesHarvester::live$ = false;

        jclass PythonAbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eddc569406c6c254] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getGradientConverter_1bd2b3ae52af5114] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalMatricesHarvester::PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, const ::java::lang::String & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_eddc569406c6c254, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractAnalyticalMatricesHarvester::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractAnalyticalMatricesHarvester::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractAnalyticalMatricesHarvester::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalMatricesHarvester, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalMatricesHarvester_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalMatricesHarvester, t_PythonAbstractAnalyticalMatricesHarvester, PythonAbstractAnalyticalMatricesHarvester);

        void t_PythonAbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(PythonAbstractAnalyticalMatricesHarvester), module, "PythonAbstractAnalyticalMatricesHarvester", 1);
        }

        void t_PythonAbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "class_", make_descriptor(PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalMatricesHarvester::initializeClass);
          JNINativeMethod methods[] = {
            { "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;", (void *) t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalMatricesHarvester::wrap_Object(PythonAbstractAnalyticalMatricesHarvester(((t_PythonAbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
          PythonAbstractAnalyticalMatricesHarvester object((jobject) NULL);

          if (!parseArgs(args, "kskk", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractAnalyticalMatricesHarvester(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getGradientConverter", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter::initializeClass, &value))
          {
            throwTypeError("getGradientConverter", result);
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

        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data)
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
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction::class$ = NULL;
      jmethodID *Fraction::mids$ = NULL;
      bool Fraction::live$ = false;
      Fraction *Fraction::FOUR_FIFTHS = NULL;
      Fraction *Fraction::MINUS_ONE = NULL;
      Fraction *Fraction::ONE = NULL;
      Fraction *Fraction::ONE_FIFTH = NULL;
      Fraction *Fraction::ONE_HALF = NULL;
      Fraction *Fraction::ONE_QUARTER = NULL;
      Fraction *Fraction::ONE_THIRD = NULL;
      Fraction *Fraction::THREE_FIFTHS = NULL;
      Fraction *Fraction::THREE_QUARTERS = NULL;
      Fraction *Fraction::TWO = NULL;
      Fraction *Fraction::TWO_FIFTHS = NULL;
      Fraction *Fraction::TWO_QUARTERS = NULL;
      Fraction *Fraction::TWO_THIRDS = NULL;
      Fraction *Fraction::ZERO = NULL;

      jclass Fraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_883007575ab78b44] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_f8ad4f296d9e6e5a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_c1a3055d403e155b] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_compareTo_593972f776ed929e] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/Fraction;)I");
          mids$[mid_convergent_48c5e5d18a18a1f7] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/Fraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_6e644ae679b81b73] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_f8ad4f296d9e6e5a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_divide_c1a3055d403e155b] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominator_570ce0828f81a2c1] = env->getMethodID(cls, "getDenominator", "()I");
          mids$[mid_getField_c92e44cc353119ce] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getNumerator_570ce0828f81a2c1] = env->getMethodID(cls, "getNumerator", "()I");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_354275059e0b39d8] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_b108b35ef48e27bd] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_f8ad4f296d9e6e5a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_multiply_c1a3055d403e155b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_negate_883007575ab78b44] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_percentageValue_dff5885c2c873297] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_reciprocal_883007575ab78b44] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_signum_570ce0828f81a2c1] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_f8ad4f296d9e6e5a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_subtract_c1a3055d403e155b] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new Fraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          MINUS_ONE = new Fraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE = new Fraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_FIFTH = new Fraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_HALF = new Fraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_QUARTER = new Fraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_THIRD = new Fraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_FIFTHS = new Fraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_QUARTERS = new Fraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO = new Fraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_FIFTHS = new Fraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_QUARTERS = new Fraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_THIRDS = new Fraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/Fraction;"));
          ZERO = new Fraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/Fraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Fraction::Fraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      Fraction::Fraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Fraction::Fraction(jdouble a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

      Fraction::Fraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      Fraction::Fraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

      Fraction Fraction::abs() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_abs_883007575ab78b44]));
      }

      Fraction Fraction::add(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_f8ad4f296d9e6e5a], a0.this$));
      }

      Fraction Fraction::add(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_c1a3055d403e155b], a0));
      }

      jint Fraction::compareTo(const Fraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_593972f776ed929e], a0.this$);
      }

      ::org::hipparchus::util::Pair Fraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::Fraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_48c5e5d18a18a1f7], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream Fraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_6e644ae679b81b73], a0, a1));
      }

      Fraction Fraction::divide(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_f8ad4f296d9e6e5a], a0.this$));
      }

      Fraction Fraction::divide(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_c1a3055d403e155b], a0));
      }

      jdouble Fraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
      }

      jboolean Fraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jfloat Fraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
      }

      jint Fraction::getDenominator() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominator_570ce0828f81a2c1]);
      }

      ::org::hipparchus::fraction::FractionField Fraction::getField() const
      {
        return ::org::hipparchus::fraction::FractionField(env->callObjectMethod(this$, mids$[mid_getField_c92e44cc353119ce]));
      }

      jint Fraction::getNumerator() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumerator_570ce0828f81a2c1]);
      }

      jdouble Fraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      Fraction Fraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Fraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_354275059e0b39d8], a0, a1));
      }

      jint Fraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jint Fraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
      }

      jboolean Fraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_b108b35ef48e27bd]);
      }

      jlong Fraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
      }

      Fraction Fraction::multiply(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_f8ad4f296d9e6e5a], a0.this$));
      }

      Fraction Fraction::multiply(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_c1a3055d403e155b], a0));
      }

      Fraction Fraction::negate() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_negate_883007575ab78b44]));
      }

      jdouble Fraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_dff5885c2c873297]);
      }

      Fraction Fraction::reciprocal() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_reciprocal_883007575ab78b44]));
      }

      jint Fraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_570ce0828f81a2c1]);
      }

      Fraction Fraction::subtract(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_f8ad4f296d9e6e5a], a0.this$));
      }

      Fraction Fraction::subtract(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_c1a3055d403e155b], a0));
      }

      ::java::lang::String Fraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Fraction_abs(t_Fraction *self);
      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg);
      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_getDenominator(t_Fraction *self);
      static PyObject *t_Fraction_getField(t_Fraction *self);
      static PyObject *t_Fraction_getNumerator(t_Fraction *self);
      static PyObject *t_Fraction_getReal(t_Fraction *self);
      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_isInteger(t_Fraction *self);
      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_negate(t_Fraction *self);
      static PyObject *t_Fraction_percentageValue(t_Fraction *self);
      static PyObject *t_Fraction_reciprocal(t_Fraction *self);
      static PyObject *t_Fraction_signum(t_Fraction *self);
      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data);
      static PyGetSetDef t_Fraction__fields_[] = {
        DECLARE_GET_FIELD(t_Fraction, denominator),
        DECLARE_GET_FIELD(t_Fraction, field),
        DECLARE_GET_FIELD(t_Fraction, integer),
        DECLARE_GET_FIELD(t_Fraction, numerator),
        DECLARE_GET_FIELD(t_Fraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Fraction__methods_[] = {
        DECLARE_METHOD(t_Fraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, add, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, compareTo, METH_O),
        DECLARE_METHOD(t_Fraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, getDenominator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getNumerator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction)[] = {
        { Py_tp_methods, t_Fraction__methods_ },
        { Py_tp_init, (void *) t_Fraction_init_ },
        { Py_tp_getset, t_Fraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Fraction, t_Fraction, Fraction);

      void t_Fraction::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction), &PY_TYPE_DEF(Fraction), module, "Fraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(Fraction$ConvergenceTest)));
      }

      void t_Fraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "class_", make_descriptor(Fraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "wrapfn_", make_descriptor(t_Fraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(Fraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "FOUR_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "MINUS_ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_FIFTH", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_HALF", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_QUARTER", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_THIRD", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_THIRDS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ZERO", make_descriptor(t_Fraction::wrap_Object(*Fraction::ZERO)));
      }

      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction::initializeClass, 1)))
          return NULL;
        return t_Fraction::wrap_Object(Fraction(((t_Fraction *) arg)->object.this$));
      }
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = Fraction(a0, a1, a2));
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

      static PyObject *t_Fraction_abs(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg)
      {
        Fraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::Fraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::Fraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Fraction_getDenominator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getField(t_Fraction *self)
      {
        ::org::hipparchus::fraction::FractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(result);
      }

      static PyObject *t_Fraction_getNumerator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumerator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getReal(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        Fraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::getReducedFraction(a0, a1));
          return t_Fraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Fraction_isInteger(t_Fraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Fraction_negate(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_percentageValue(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_reciprocal(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_signum(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data)
      {
        ::org::hipparchus::fraction::FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(value);
      }

      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumerator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data)
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
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *OutputStream::class$ = NULL;
    jmethodID *OutputStream::mids$ = NULL;
    bool OutputStream::live$ = false;

    jclass OutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/OutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullOutputStream_59cd2bc5cbe06e4d] = env->getStaticMethodID(cls, "nullOutputStream", "()Ljava/io/OutputStream;");
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OutputStream::OutputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    void OutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void OutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    OutputStream OutputStream::nullOutputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return OutputStream(env->callStaticObjectMethod(cls, mids$[mid_nullOutputStream_59cd2bc5cbe06e4d]));
    }

    void OutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void OutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void OutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_OutputStream_close(t_OutputStream *self);
    static PyObject *t_OutputStream_flush(t_OutputStream *self);
    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type);
    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args);

    static PyMethodDef t_OutputStream__methods_[] = {
      DECLARE_METHOD(t_OutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, flush, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, nullOutputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OutputStream)[] = {
      { Py_tp_methods, t_OutputStream__methods_ },
      { Py_tp_init, (void *) t_OutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OutputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OutputStream, t_OutputStream, OutputStream);

    void t_OutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(OutputStream), &PY_TYPE_DEF(OutputStream), module, "OutputStream", 0);
    }

    void t_OutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "class_", make_descriptor(OutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "wrapfn_", make_descriptor(t_OutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OutputStream::initializeClass, 1)))
        return NULL;
      return t_OutputStream::wrap_Object(OutputStream(((t_OutputStream *) arg)->object.this$));
    }
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds)
    {
      OutputStream object((jobject) NULL);

      INT_CALL(object = OutputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_OutputStream_close(t_OutputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_flush(t_OutputStream *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type)
    {
      OutputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::OutputStream::nullOutputStream());
      return t_OutputStream::wrap_Object(result);
    }

    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
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
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericRefraction::class$ = NULL;
        jmethodID *AtmosphericRefraction::mids$ = NULL;
        bool AtmosphericRefraction::live$ = false;

        jclass AtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyCorrection_a813ead3ffa4bffb] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_computeGridCorrectionFunctions_2d22bd225207563d] = env->getMethodID(cls, "computeGridCorrectionFunctions", "([[Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_configureCorrectionGrid_5bf94bc89b069b4b] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_deactivateComputation_0fa09c18fee449d5] = env->getMethodID(cls, "deactivateComputation", "()V");
            mids$[mid_getBifLine_bc9d2a40b3c347ee] = env->getMethodID(cls, "getBifLine", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getBifPixel_bc9d2a40b3c347ee] = env->getMethodID(cls, "getBifPixel", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getComputationParameters_cf83411fa86caecb] = env->getMethodID(cls, "getComputationParameters", "()Lorg/orekit/rugged/refraction/AtmosphericComputationParameters;");
            mids$[mid_isSameContext_20cc85eae3931b01] = env->getMethodID(cls, "isSameContext", "(Ljava/lang/String;II)Ljava/lang/Boolean;");
            mids$[mid_mustBeComputed_b108b35ef48e27bd] = env->getMethodID(cls, "mustBeComputed", "()Z");
            mids$[mid_reactivateComputation_0fa09c18fee449d5] = env->getMethodID(cls, "reactivateComputation", "()V");
            mids$[mid_setGridSteps_6f37635c3285dbdf] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_17db3a65980d3441] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint AtmosphericRefraction::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_a813ead3ffa4bffb], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        void AtmosphericRefraction::computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_computeGridCorrectionFunctions_2d22bd225207563d], a0.this$);
        }

        void AtmosphericRefraction::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_5bf94bc89b069b4b], a0.this$, a1, a2);
        }

        void AtmosphericRefraction::deactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_deactivateComputation_0fa09c18fee449d5]);
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifLine() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifLine_bc9d2a40b3c347ee]));
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifPixel() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifPixel_bc9d2a40b3c347ee]));
        }

        ::org::orekit::rugged::refraction::AtmosphericComputationParameters AtmosphericRefraction::getComputationParameters() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericComputationParameters(env->callObjectMethod(this$, mids$[mid_getComputationParameters_cf83411fa86caecb]));
        }

        ::java::lang::Boolean AtmosphericRefraction::isSameContext(const ::java::lang::String & a0, jint a1, jint a2) const
        {
          return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isSameContext_20cc85eae3931b01], a0.this$, a1, a2));
        }

        jboolean AtmosphericRefraction::mustBeComputed() const
        {
          return env->callBooleanMethod(this$, mids$[mid_mustBeComputed_b108b35ef48e27bd]);
        }

        void AtmosphericRefraction::reactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_reactivateComputation_0fa09c18fee449d5]);
        }

        void AtmosphericRefraction::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_6f37635c3285dbdf], a0, a1);
        }

        void AtmosphericRefraction::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_17db3a65980d3441], a0);
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
        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data);
        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_AtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifLine),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifPixel),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, computationParameters),
          DECLARE_SET_FIELD(t_AtmosphericRefraction, inverseLocMargin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_AtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, applyCorrection, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, computeGridCorrectionFunctions, METH_O),
          DECLARE_METHOD(t_AtmosphericRefraction, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, deactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifLine, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifPixel, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getComputationParameters, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, isSameContext, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, mustBeComputed, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, reactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefraction)[] = {
          { Py_tp_methods, t_AtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericRefraction, t_AtmosphericRefraction, AtmosphericRefraction);

        void t_AtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericRefraction), &PY_TYPE_DEF(AtmosphericRefraction), module, "AtmosphericRefraction", 0);
        }

        void t_AtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "class_", make_descriptor(AtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "wrapfn_", make_descriptor(t_AtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_AtmosphericRefraction::wrap_Object(AtmosphericRefraction(((t_AtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "applyCorrection", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg)
        {
          JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > a0((jobject) NULL);

          if (!parseArg(arg, "[[k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.computeGridCorrectionFunctions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "computeGridCorrectionFunctions", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.deactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters result((jobject) NULL);
          OBJ_CALL(result = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Boolean result((jobject) NULL);

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isSameContext(a0, a1, a2));
            return ::java::lang::t_Boolean::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isSameContext", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.mustBeComputed());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.reactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters value((jobject) NULL);
          OBJ_CALL(value = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(value);
        }

        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearProcess::class$ = NULL;
          jmethodID *LinearProcess::mids$ = NULL;
          bool LinearProcess::live$ = false;

          jclass LinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_fdbcea0b93e6664c] = env->getMethodID(cls, "getEvolution", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/linear/LinearEvolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::linear::LinearEvolution LinearProcess::getEvolution(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::linear::LinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_fdbcea0b93e6664c], a0.this$));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args);
          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg);
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data);
          static PyGetSetDef t_LinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_LinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearProcess__methods_[] = {
            DECLARE_METHOD(t_LinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearProcess, getEvolution, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearProcess)[] = {
            { Py_tp_methods, t_LinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearProcess, t_LinearProcess, LinearProcess);
          PyObject *t_LinearProcess::wrap_Object(const LinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearProcess *self = (t_LinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearProcess), &PY_TYPE_DEF(LinearProcess), module, "LinearProcess", 0);
          }

          void t_LinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "class_", make_descriptor(LinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "wrapfn_", make_descriptor(t_LinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearProcess::initializeClass, 1)))
              return NULL;
            return t_LinearProcess::wrap_Object(LinearProcess(((t_LinearProcess *) arg)->object.this$));
          }
          static PyObject *t_LinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearProcess_of_(t_LinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LinearProcess_getEvolution(t_LinearProcess *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearEvolution result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEvolution(a0));
              return ::org::hipparchus::filtering::kalman::linear::t_LinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", arg);
            return NULL;
          }
          static PyObject *t_LinearProcess_get__parameters_(t_LinearProcess *self, void *data)
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
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit::class$ = NULL;
        jmethodID *Logit::mids$ = NULL;
        bool Logit::live$ = false;

        jclass Logit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit::Logit() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        Logit::Logit(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble Logit::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logit::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit_value(t_Logit *self, PyObject *args);

        static PyMethodDef t_Logit__methods_[] = {
          DECLARE_METHOD(t_Logit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit)[] = {
          { Py_tp_methods, t_Logit__methods_ },
          { Py_tp_init, (void *) t_Logit_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit, t_Logit, Logit);

        void t_Logit::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit), &PY_TYPE_DEF(Logit), module, "Logit", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "Parametric", make_descriptor(&PY_TYPE_DEF(Logit$Parametric)));
        }

        void t_Logit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "class_", make_descriptor(Logit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "wrapfn_", make_descriptor(t_Logit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit::initializeClass, 1)))
            return NULL;
          return t_Logit::wrap_Object(Logit(((t_Logit *) arg)->object.this$));
        }
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Logit object((jobject) NULL);

              INT_CALL(object = Logit());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Logit object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Logit(a0, a1));
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

        static PyObject *t_Logit_value(t_Logit *self, PyObject *args)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$QuadraticSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$QuadraticSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$QuadraticSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_8c19bdea212fe058] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8c19bdea212fe058], a0, a1, a2);
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction, t_SmoothStepFactory$QuadraticSmoothStepFunction, SmoothStepFactory$QuadraticSmoothStepFunction);

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction), module, "SmoothStepFactory$QuadraticSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_Object(SmoothStepFactory$QuadraticSmoothStepFunction(((t_SmoothStepFactory$QuadraticSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame5B::class$ = NULL;
          jmethodID *SubFrame5B::mids$ = NULL;
          bool SubFrame5B::live$ = false;

          jclass SubFrame5B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame5B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReservedA10_570ce0828f81a2c1] = env->getMethodID(cls, "getReservedA10", "()I");
              mids$[mid_getReservedB10_570ce0828f81a2c1] = env->getMethodID(cls, "getReservedB10", "()I");
              mids$[mid_getSvHealth_2235cd056f5a882b] = env->getMethodID(cls, "getSvHealth", "(I)I");
              mids$[mid_getTOA_570ce0828f81a2c1] = env->getMethodID(cls, "getTOA", "()I");
              mids$[mid_getWeekNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame5B::getReservedA10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA10_570ce0828f81a2c1]);
          }

          jint SubFrame5B::getReservedB10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB10_570ce0828f81a2c1]);
          }

          jint SubFrame5B::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_2235cd056f5a882b], a0);
          }

          jint SubFrame5B::getTOA() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOA_570ce0828f81a2c1]);
          }

          jint SubFrame5B::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_570ce0828f81a2c1]);
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
          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg);
          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data);
          static PyGetSetDef t_SubFrame5B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame5B, reservedA10),
            DECLARE_GET_FIELD(t_SubFrame5B, reservedB10),
            DECLARE_GET_FIELD(t_SubFrame5B, tOA),
            DECLARE_GET_FIELD(t_SubFrame5B, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame5B__methods_[] = {
            DECLARE_METHOD(t_SubFrame5B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, getReservedA10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getReservedB10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getSvHealth, METH_O),
            DECLARE_METHOD(t_SubFrame5B, getTOA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame5B)[] = {
            { Py_tp_methods, t_SubFrame5B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame5B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame5B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame5B, t_SubFrame5B, SubFrame5B);

          void t_SubFrame5B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame5B), &PY_TYPE_DEF(SubFrame5B), module, "SubFrame5B", 0);
          }

          void t_SubFrame5B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "class_", make_descriptor(SubFrame5B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "wrapfn_", make_descriptor(t_SubFrame5B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame5B::initializeClass, 1)))
              return NULL;
            return t_SubFrame5B::wrap_Object(SubFrame5B(((t_SubFrame5B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame5B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/hipparchus/Field.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap::class$ = NULL;
      jmethodID *FieldTimeSpanMap::mids$ = NULL;
      bool FieldTimeSpanMap::live$ = false;

      jclass FieldTimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5436e976103f5935] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Lorg/hipparchus/Field;)V");
          mids$[mid_addValidAfter_9609c002ae1fab35] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_addValidBefore_9609c002ae1fab35] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_get_ba0f15400f4e0189] = env->getMethodID(cls, "get", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getTransitions_917725130bbb61f1] = env->getMethodID(cls, "getTransitions", "()Ljava/util/SortedSet;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeSpanMap::FieldTimeSpanMap(const ::java::lang::Object & a0, const ::org::hipparchus::Field & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5436e976103f5935, a0.this$, a1.this$)) {}

      void FieldTimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidAfter_9609c002ae1fab35], a0.this$, a1.this$);
      }

      void FieldTimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidBefore_9609c002ae1fab35], a0.this$, a1.this$);
      }

      ::java::lang::Object FieldTimeSpanMap::get$(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ba0f15400f4e0189], a0.this$));
      }

      ::java::util::SortedSet FieldTimeSpanMap::getTransitions() const
      {
        return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getTransitions_917725130bbb61f1]));
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
      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args);
      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self);
      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data);
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, transitions),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_FieldTimeSpanMap, getTransitions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_FieldTimeSpanMap_init_ },
        { Py_tp_getset, t_FieldTimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap, t_FieldTimeSpanMap, FieldTimeSpanMap);
      PyObject *t_FieldTimeSpanMap::wrap_Object(const FieldTimeSpanMap& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap), &PY_TYPE_DEF(FieldTimeSpanMap), module, "FieldTimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(FieldTimeSpanMap$Transition)));
      }

      void t_FieldTimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "class_", make_descriptor(FieldTimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "wrapfn_", make_descriptor(t_FieldTimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap::wrap_Object(FieldTimeSpanMap(((t_FieldTimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::Field a1((jobject) NULL);
        PyTypeObject **p1;
        FieldTimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "oK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = FieldTimeSpanMap(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidAfter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidBefore(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self)
      {
        ::java::util::SortedSet result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data)
      {
        ::java::util::SortedSet value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *BodyRotatingFrameId::class$ = NULL;
        jmethodID *BodyRotatingFrameId::mids$ = NULL;
        bool BodyRotatingFrameId::live$ = false;
        BodyRotatingFrameId *BodyRotatingFrameId::GTOD = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF_EQUINOX = NULL;

        jclass BodyRotatingFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/BodyRotatingFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_70179aa1e1b1a8c5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/BodyRotatingFrameId;");
            mids$[mid_values_1d2ab5e5b9c6a1e0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/BodyRotatingFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GTOD = new BodyRotatingFrameId(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF_EQUINOX = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF_EQUINOX", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BodyRotatingFrameId BodyRotatingFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BodyRotatingFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_70179aa1e1b1a8c5], a0.this$));
        }

        JArray< BodyRotatingFrameId > BodyRotatingFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BodyRotatingFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_1d2ab5e5b9c6a1e0]));
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
        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type);
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data);
        static PyGetSetDef t_BodyRotatingFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_BodyRotatingFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BodyRotatingFrameId__methods_[] = {
          DECLARE_METHOD(t_BodyRotatingFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_BodyRotatingFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BodyRotatingFrameId)[] = {
          { Py_tp_methods, t_BodyRotatingFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BodyRotatingFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BodyRotatingFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BodyRotatingFrameId, t_BodyRotatingFrameId, BodyRotatingFrameId);
        PyObject *t_BodyRotatingFrameId::wrap_Object(const BodyRotatingFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BodyRotatingFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BodyRotatingFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(BodyRotatingFrameId), &PY_TYPE_DEF(BodyRotatingFrameId), module, "BodyRotatingFrameId", 0);
        }

        void t_BodyRotatingFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "class_", make_descriptor(BodyRotatingFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "wrapfn_", make_descriptor(t_BodyRotatingFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(BodyRotatingFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "GTOD", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::GTOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF_EQUINOX", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF_EQUINOX)));
        }

        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BodyRotatingFrameId::initializeClass, 1)))
            return NULL;
          return t_BodyRotatingFrameId::wrap_Object(BodyRotatingFrameId(((t_BodyRotatingFrameId *) arg)->object.this$));
        }
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BodyRotatingFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BodyRotatingFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::valueOf(a0));
            return t_BodyRotatingFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type)
        {
          JArray< BodyRotatingFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_BodyRotatingFrameId::wrap_jobject);
        }
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationModifier::class$ = NULL;
        jmethodID *EstimationModifier::mids$ = NULL;
        bool EstimationModifier::live$ = false;

        jclass EstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EstimationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
        }

        void EstimationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args);
        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data);
        static PyGetSetDef t_EstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationModifier__methods_[] = {
          DECLARE_METHOD(t_EstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimationModifier, modify, METH_O),
          DECLARE_METHOD(t_EstimationModifier, modifyWithoutDerivatives, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationModifier)[] = {
          { Py_tp_methods, t_EstimationModifier__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationModifier)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(EstimationModifier, t_EstimationModifier, EstimationModifier);
        PyObject *t_EstimationModifier::wrap_Object(const EstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationModifier), &PY_TYPE_DEF(EstimationModifier), module, "EstimationModifier", 0);
        }

        void t_EstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "class_", make_descriptor(EstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "wrapfn_", make_descriptor(t_EstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationModifier::initializeClass, 1)))
            return NULL;
          return t_EstimationModifier::wrap_Object(EstimationModifier(((t_EstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg)
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

        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg)
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
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractMatricesHarvester::class$ = NULL;
      jmethodID *AbstractMatricesHarvester::mids$ = NULL;
      bool AbstractMatricesHarvester::live$ = false;
      jint AbstractMatricesHarvester::STATE_DIMENSION = (jint) 0;

      jclass AbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_freezeColumnsNames_0fa09c18fee449d5] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getInitialJacobianColumn_f87e5f45128c2827] = env->getMethodID(cls, "getInitialJacobianColumn", "(Ljava/lang/String;)[D");
          mids$[mid_getInitialStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getInitialStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getParametersJacobian_9483b2ac438718ce] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStmName_11b109bd155ca898] = env->getMethodID(cls, "getStmName", "()Ljava/lang/String;");
          mids$[mid_setReferenceState_0ee5c56004643a2e] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getConversionJacobian_f910011805e7fdeb] = env->getMethodID(cls, "getConversionJacobian", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMatricesHarvester::freezeColumnsNames() const
      {
        env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0fa09c18fee449d5]);
      }

      JArray< jdouble > AbstractMatricesHarvester::getInitialJacobianColumn(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialJacobianColumn_f87e5f45128c2827], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getInitialStateTransitionMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialStateTransitionMatrix_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_9483b2ac438718ce], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_9483b2ac438718ce], a0.this$));
      }

      ::java::lang::String AbstractMatricesHarvester::getStmName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStmName_11b109bd155ca898]));
      }

      void AbstractMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_0ee5c56004643a2e], a0.this$);
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
      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data);
      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data);
      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_AbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, initialStateTransitionMatrix),
        DECLARE_SET_FIELD(t_AbstractMatricesHarvester, referenceState),
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, stmName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_AbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, freezeColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialJacobianColumn, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialStateTransitionMatrix, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStmName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_AbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMatricesHarvester, t_AbstractMatricesHarvester, AbstractMatricesHarvester);

      void t_AbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMatricesHarvester), &PY_TYPE_DEF(AbstractMatricesHarvester), module, "AbstractMatricesHarvester", 0);
      }

      void t_AbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "class_", make_descriptor(AbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractMatricesHarvester::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "STATE_DIMENSION", make_descriptor(AbstractMatricesHarvester::STATE_DIMENSION));
      }

      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_AbstractMatricesHarvester::wrap_Object(AbstractMatricesHarvester(((t_AbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.freezeColumnsNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getInitialJacobianColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getInitialJacobianColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg)
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

      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg)
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

      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getStmName());
        return j2p(result);
      }

      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg)
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

      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getStmName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
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
          mids$[mid_getLeap_bf1d7732f1acb697] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_2a5f05be83ff251d] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_db6d81809797ddaa] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_6d572d97c8b0ec11] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_17efd3c2ea0eaff7] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_1e7a6890919ea8bb] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String TimeScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_db6d81809797ddaa], a0.this$);
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_6d572d97c8b0ec11], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_17efd3c2ea0eaff7], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_1e7a6890919ea8bb], a0.this$);
      }

      jdouble TimeScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble TimeScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
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
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonBoundedAttitudeProvider::class$ = NULL;
      jmethodID *PythonBoundedAttitudeProvider::mids$ = NULL;
      bool PythonBoundedAttitudeProvider::live$ = false;

      jclass PythonBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedAttitudeProvider::PythonBoundedAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonBoundedAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonBoundedAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonBoundedAttitudeProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self);
      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedAttitudeProvider, t_PythonBoundedAttitudeProvider, PythonBoundedAttitudeProvider);

      void t_PythonBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedAttitudeProvider), &PY_TYPE_DEF(PythonBoundedAttitudeProvider), module, "PythonBoundedAttitudeProvider", 1);
      }

      void t_PythonBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "class_", make_descriptor(PythonBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_PythonBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude1 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMaxDate2 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMinDate3 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedAttitudeProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedAttitudeProvider::wrap_Object(PythonBoundedAttitudeProvider(((t_PythonBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonBoundedAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SsrUpdateInterval::class$ = NULL;
            jmethodID *SsrUpdateInterval::mids$ = NULL;
            bool SsrUpdateInterval::live$ = false;

            jclass SsrUpdateInterval::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SsrUpdateInterval");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getUpdateInterval_dff5885c2c873297] = env->getMethodID(cls, "getUpdateInterval", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrUpdateInterval::SsrUpdateInterval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jdouble SsrUpdateInterval::getUpdateInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getUpdateInterval_dff5885c2c873297]);
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
          namespace common {
            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self);
            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data);
            static PyGetSetDef t_SsrUpdateInterval__fields_[] = {
              DECLARE_GET_FIELD(t_SsrUpdateInterval, updateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrUpdateInterval__methods_[] = {
              DECLARE_METHOD(t_SsrUpdateInterval, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, getUpdateInterval, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrUpdateInterval)[] = {
              { Py_tp_methods, t_SsrUpdateInterval__methods_ },
              { Py_tp_init, (void *) t_SsrUpdateInterval_init_ },
              { Py_tp_getset, t_SsrUpdateInterval__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrUpdateInterval)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrUpdateInterval, t_SsrUpdateInterval, SsrUpdateInterval);

            void t_SsrUpdateInterval::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrUpdateInterval), &PY_TYPE_DEF(SsrUpdateInterval), module, "SsrUpdateInterval", 0);
            }

            void t_SsrUpdateInterval::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "class_", make_descriptor(SsrUpdateInterval::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "wrapfn_", make_descriptor(t_SsrUpdateInterval::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrUpdateInterval::initializeClass, 1)))
                return NULL;
              return t_SsrUpdateInterval::wrap_Object(SsrUpdateInterval(((t_SsrUpdateInterval *) arg)->object.this$));
            }
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrUpdateInterval::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SsrUpdateInterval object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SsrUpdateInterval(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getUpdateInterval());
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
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *HaloXZPlaneCrossingDetector::class$ = NULL;
        jmethodID *HaloXZPlaneCrossingDetector::mids$ = NULL;
        bool HaloXZPlaneCrossingDetector::live$ = false;

        jclass HaloXZPlaneCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/HaloXZPlaneCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_fc8c214d51a3dffb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/HaloXZPlaneCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HaloXZPlaneCrossingDetector::HaloXZPlaneCrossingDetector(jdouble a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble HaloXZPlaneCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
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
        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data);
        static PyGetSetDef t_HaloXZPlaneCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_HaloXZPlaneCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HaloXZPlaneCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HaloXZPlaneCrossingDetector)[] = {
          { Py_tp_methods, t_HaloXZPlaneCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_HaloXZPlaneCrossingDetector_init_ },
          { Py_tp_getset, t_HaloXZPlaneCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HaloXZPlaneCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(HaloXZPlaneCrossingDetector, t_HaloXZPlaneCrossingDetector, HaloXZPlaneCrossingDetector);
        PyObject *t_HaloXZPlaneCrossingDetector::wrap_Object(const HaloXZPlaneCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HaloXZPlaneCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HaloXZPlaneCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(HaloXZPlaneCrossingDetector), &PY_TYPE_DEF(HaloXZPlaneCrossingDetector), module, "HaloXZPlaneCrossingDetector", 0);
        }

        void t_HaloXZPlaneCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "class_", make_descriptor(HaloXZPlaneCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "wrapfn_", make_descriptor(t_HaloXZPlaneCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_HaloXZPlaneCrossingDetector::wrap_Object(HaloXZPlaneCrossingDetector(((t_HaloXZPlaneCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          HaloXZPlaneCrossingDetector object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = HaloXZPlaneCrossingDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(HaloXZPlaneCrossingDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HaloXZPlaneCrossingDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
