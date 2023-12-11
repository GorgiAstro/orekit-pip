#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *Observables::class$ = NULL;
          jmethodID *Observables::mids$ = NULL;
          bool Observables::live$ = false;

          jclass Observables::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/Observables");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_addGroundMapping_20b2c0aea4daece7] = env->getMethodID(cls, "addGroundMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;)V");
              mids$[mid_addInterMapping_7e4266e4836752ff] = env->getMethodID(cls, "addInterMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;)V");
              mids$[mid_getGroundMapping_276bf3c3705258c9] = env->getMethodID(cls, "getGroundMapping", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;");
              mids$[mid_getGroundMappings_12ee61573a18f417] = env->getMethodID(cls, "getGroundMappings", "()Ljava/util/Collection;");
              mids$[mid_getInterMapping_67d9a3f0c5fca42f] = env->getMethodID(cls, "getInterMapping", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;");
              mids$[mid_getInterMappings_12ee61573a18f417] = env->getMethodID(cls, "getInterMappings", "()Ljava/util/Collection;");
              mids$[mid_getNbModels_412668abc8d889e9] = env->getMethodID(cls, "getNbModels", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Observables::Observables(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

          void Observables::addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGroundMapping_20b2c0aea4daece7], a0.this$);
          }

          void Observables::addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addInterMapping_7e4266e4836752ff], a0.this$);
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping Observables::getGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping(env->callObjectMethod(this$, mids$[mid_getGroundMapping_276bf3c3705258c9], a0.this$, a1.this$));
          }

          ::java::util::Collection Observables::getGroundMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getGroundMappings_12ee61573a18f417]));
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping Observables::getInterMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping(env->callObjectMethod(this$, mids$[mid_getInterMapping_67d9a3f0c5fca42f], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::Collection Observables::getInterMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getInterMappings_12ee61573a18f417]));
          }

          jint Observables::getNbModels() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbModels_412668abc8d889e9]);
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getGroundMappings(t_Observables *self);
          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getInterMappings(t_Observables *self);
          static PyObject *t_Observables_getNbModels(t_Observables *self);
          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data);
          static PyGetSetDef t_Observables__fields_[] = {
            DECLARE_GET_FIELD(t_Observables, groundMappings),
            DECLARE_GET_FIELD(t_Observables, interMappings),
            DECLARE_GET_FIELD(t_Observables, nbModels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Observables__methods_[] = {
            DECLARE_METHOD(t_Observables, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, addGroundMapping, METH_O),
            DECLARE_METHOD(t_Observables, addInterMapping, METH_O),
            DECLARE_METHOD(t_Observables, getGroundMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getGroundMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getInterMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getInterMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getNbModels, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Observables)[] = {
            { Py_tp_methods, t_Observables__methods_ },
            { Py_tp_init, (void *) t_Observables_init_ },
            { Py_tp_getset, t_Observables__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Observables)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Observables, t_Observables, Observables);

          void t_Observables::install(PyObject *module)
          {
            installType(&PY_TYPE(Observables), &PY_TYPE_DEF(Observables), module, "Observables", 0);
          }

          void t_Observables::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "class_", make_descriptor(Observables::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "wrapfn_", make_descriptor(t_Observables::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Observables::initializeClass, 1)))
              return NULL;
            return t_Observables::wrap_Object(Observables(((t_Observables *) arg)->object.this$));
          }
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Observables::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            Observables object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Observables(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGroundMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGroundMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addInterMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addInterMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping result((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGroundMapping(a0, a1));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToGroundMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getGroundMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToGroundMapping));
          }

          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping result((jobject) NULL);

            if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInterMapping(a0, a1, a2, a3));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToSensorMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getInterMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToSensorMapping));
          }

          static PyObject *t_Observables_getNbModels(t_Observables *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbModels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbModels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOF::class$ = NULL;
      jmethodID *LOF::mids$ = NULL;
      bool LOF::live$ = false;

      jclass LOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isQuasiInertial_89b302893bdbe1f1] = env->getMethodID(cls, "isQuasiInertial", "()Z");
          mids$[mid_rotationFromInertial_9b71bf39454b4a07] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_1022f468fb3d1015] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_4589fd7f02974794] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_3d58d3c4fbbdd666] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOFInToLOFOut_9a9c25ec3dddff77] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOFInToLOFOut_dc0beda38c449646] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_transformFromInertial_2a23f2d721e3dbf7] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromInertial_770b64ef6abe3e27] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_c10a26e3ee070a26] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_434b8bd008c153c5] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_0b931f6337724e6c] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_fbf49304709710af] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOF::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jboolean LOF::isQuasiInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_89b302893bdbe1f1]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9b71bf39454b4a07], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_1022f468fb3d1015], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_4589fd7f02974794], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_3d58d3c4fbbdd666], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_9a9c25ec3dddff77], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOFInToLOFOut(const ::org::hipparchus::Field & a0, const LOF & a1, const LOF & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::orekit::utils::FieldPVCoordinates & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_dc0beda38c449646], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_2a23f2d721e3dbf7], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_770b64ef6abe3e27], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_c10a26e3ee070a26], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_434b8bd008c153c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_0b931f6337724e6c], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_fbf49304709710af], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_getName(t_LOF *self);
      static PyObject *t_LOF_isQuasiInertial(t_LOF *self);
      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_get__name(t_LOF *self, void *data);
      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data);
      static PyGetSetDef t_LOF__fields_[] = {
        DECLARE_GET_FIELD(t_LOF, name),
        DECLARE_GET_FIELD(t_LOF, quasiInertial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOF__methods_[] = {
        DECLARE_METHOD(t_LOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOF, isQuasiInertial, METH_NOARGS),
        DECLARE_METHOD(t_LOF, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOF, transformFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOF)[] = {
        { Py_tp_methods, t_LOF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LOF, t_LOF, LOF);

      void t_LOF::install(PyObject *module)
      {
        installType(&PY_TYPE(LOF), &PY_TYPE_DEF(LOF), module, "LOF", 0);
      }

      void t_LOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "class_", make_descriptor(LOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "wrapfn_", make_descriptor(t_LOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOF::initializeClass, 1)))
          return NULL;
        return t_LOF::wrap_Object(LOF(((t_LOF *) arg)->object.this$));
      }
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOF_getName(t_LOF *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOF_isQuasiInertial(t_LOF *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isQuasiInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
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
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            LOF a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3, a4));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rotationFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kKK", LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkKK", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "transformFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_get__name(t_LOF *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isQuasiInertial());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DateDriver::class$ = NULL;
      jmethodID *DateDriver::mids$ = NULL;
      bool DateDriver::live$ = false;

      jclass DateDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DateDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_521d2640b298dfcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;Z)V");
          mids$[mid_getBaseDate_7a97f7e149e79afb] = env->getMethodID(cls, "getBaseDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_isStart_89b302893bdbe1f1] = env->getMethodID(cls, "isStart", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateDriver::DateDriver(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jboolean a2) : ::org::orekit::utils::ParameterDriver(env->newObject(initializeClass, &mids$, mid_init$_521d2640b298dfcf, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::AbsoluteDate DateDriver::getBaseDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBaseDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate DateDriver::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jboolean DateDriver::isStart() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isStart_89b302893bdbe1f1]);
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
      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self);
      static PyObject *t_DateDriver_getDate(t_DateDriver *self);
      static PyObject *t_DateDriver_isStart(t_DateDriver *self);
      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data);
      static PyGetSetDef t_DateDriver__fields_[] = {
        DECLARE_GET_FIELD(t_DateDriver, baseDate),
        DECLARE_GET_FIELD(t_DateDriver, date),
        DECLARE_GET_FIELD(t_DateDriver, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateDriver__methods_[] = {
        DECLARE_METHOD(t_DateDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, getBaseDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, isStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateDriver)[] = {
        { Py_tp_methods, t_DateDriver__methods_ },
        { Py_tp_init, (void *) t_DateDriver_init_ },
        { Py_tp_getset, t_DateDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(DateDriver, t_DateDriver, DateDriver);

      void t_DateDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(DateDriver), &PY_TYPE_DEF(DateDriver), module, "DateDriver", 0);
      }

      void t_DateDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "class_", make_descriptor(DateDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "wrapfn_", make_descriptor(t_DateDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateDriver::initializeClass, 1)))
          return NULL;
        return t_DateDriver::wrap_Object(DateDriver(((t_DateDriver *) arg)->object.this$));
      }
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        jboolean a2;
        DateDriver object((jobject) NULL);

        if (!parseArgs(args, "ksZ", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = DateDriver(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_getDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_isStart(t_DateDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isStart());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isStart());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *MaxGapInterpolationGrid::class$ = NULL;
            jmethodID *MaxGapInterpolationGrid::mids$ = NULL;
            bool MaxGapInterpolationGrid::live$ = false;

            jclass MaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getGridPoints_0699cadabd57760f] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MaxGapInterpolationGrid::MaxGapInterpolationGrid(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

            JArray< jdouble > MaxGapInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0699cadabd57760f], a0, a1));
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
            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_MaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_MaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_MaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_MaxGapInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MaxGapInterpolationGrid, t_MaxGapInterpolationGrid, MaxGapInterpolationGrid);

            void t_MaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(MaxGapInterpolationGrid), &PY_TYPE_DEF(MaxGapInterpolationGrid), module, "MaxGapInterpolationGrid", 0);
            }

            void t_MaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "class_", make_descriptor(MaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_MaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_MaxGapInterpolationGrid::wrap_Object(MaxGapInterpolationGrid(((t_MaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              MaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MaxGapInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *TimeSystem::class$ = NULL;
      jmethodID *TimeSystem::mids$ = NULL;
      bool TimeSystem::live$ = false;
      TimeSystem *TimeSystem::BEIDOU = NULL;
      TimeSystem *TimeSystem::GALILEO = NULL;
      TimeSystem *TimeSystem::GLONASS = NULL;
      TimeSystem *TimeSystem::GMT = NULL;
      TimeSystem *TimeSystem::GPS = NULL;
      TimeSystem *TimeSystem::IRNSS = NULL;
      TimeSystem *TimeSystem::QZSS = NULL;
      TimeSystem *TimeSystem::SBAS = NULL;
      TimeSystem *TimeSystem::TAI = NULL;
      TimeSystem *TimeSystem::UNKNOWN = NULL;
      TimeSystem *TimeSystem::UTC = NULL;

      jclass TimeSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/TimeSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getTimeScale_dd32dd7783926716] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_parseOneLetterCode_1259673d1cb4346c] = env->getStaticMethodID(cls, "parseOneLetterCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTimeSystem_1259673d1cb4346c] = env->getStaticMethodID(cls, "parseTimeSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTwoLettersCode_1259673d1cb4346c] = env->getStaticMethodID(cls, "parseTwoLettersCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_valueOf_1259673d1cb4346c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_values_4d6e6a242884854e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/TimeSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new TimeSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/TimeSystem;"));
          GALILEO = new TimeSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/TimeSystem;"));
          GLONASS = new TimeSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/TimeSystem;"));
          GMT = new TimeSystem(env->getStaticObjectField(cls, "GMT", "Lorg/orekit/gnss/TimeSystem;"));
          GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/TimeSystem;"));
          IRNSS = new TimeSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/TimeSystem;"));
          QZSS = new TimeSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/TimeSystem;"));
          SBAS = new TimeSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/TimeSystem;"));
          TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/gnss/TimeSystem;"));
          UNKNOWN = new TimeSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/gnss/TimeSystem;"));
          UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/gnss/TimeSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TimeSystem::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
      }

      ::org::orekit::time::TimeScale TimeSystem::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_dd32dd7783926716], a0.this$));
      }

      TimeSystem TimeSystem::parseOneLetterCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseOneLetterCode_1259673d1cb4346c], a0.this$));
      }

      TimeSystem TimeSystem::parseTimeSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTimeSystem_1259673d1cb4346c], a0.this$));
      }

      TimeSystem TimeSystem::parseTwoLettersCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTwoLettersCode_1259673d1cb4346c], a0.this$));
      }

      TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1259673d1cb4346c], a0.this$));
      }

      JArray< TimeSystem > TimeSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_4d6e6a242884854e]));
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
      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self);
      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg);
      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeSystem_values(PyTypeObject *type);
      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data);
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
      static PyGetSetDef t_TimeSystem__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSystem, key),
        DECLARE_GET_FIELD(t_TimeSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSystem__methods_[] = {
        DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_TimeSystem, getTimeScale, METH_O),
        DECLARE_METHOD(t_TimeSystem, parseOneLetterCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTimeSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTwoLettersCode, METH_O | METH_CLASS),
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
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "BEIDOU", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GALILEO", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GLONASS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "IRNSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "QZSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SBAS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UNKNOWN", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UNKNOWN)));
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

      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseOneLetterCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseOneLetterCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTimeSystem(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTimeSystem", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTwoLettersCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTwoLettersCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::valueOf(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_TimeSystem_values(PyTypeObject *type)
      {
        JArray< TimeSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::values());
        return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
      }
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *MeasurementType::class$ = NULL;
      jmethodID *MeasurementType::mids$ = NULL;
      bool MeasurementType::live$ = false;
      MeasurementType *MeasurementType::CARRIER_PHASE = NULL;
      MeasurementType *MeasurementType::COMBINED_RANGE_PHASE = NULL;
      MeasurementType *MeasurementType::DOPPLER = NULL;
      MeasurementType *MeasurementType::PSEUDO_RANGE = NULL;
      MeasurementType *MeasurementType::SIGNAL_STRENGTH = NULL;

      jclass MeasurementType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/MeasurementType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_1d7c25a01ab77957] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_values_5b6bc0bb7233141b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/MeasurementType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CARRIER_PHASE = new MeasurementType(env->getStaticObjectField(cls, "CARRIER_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          COMBINED_RANGE_PHASE = new MeasurementType(env->getStaticObjectField(cls, "COMBINED_RANGE_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          DOPPLER = new MeasurementType(env->getStaticObjectField(cls, "DOPPLER", "Lorg/orekit/gnss/MeasurementType;"));
          PSEUDO_RANGE = new MeasurementType(env->getStaticObjectField(cls, "PSEUDO_RANGE", "Lorg/orekit/gnss/MeasurementType;"));
          SIGNAL_STRENGTH = new MeasurementType(env->getStaticObjectField(cls, "SIGNAL_STRENGTH", "Lorg/orekit/gnss/MeasurementType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MeasurementType MeasurementType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MeasurementType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1d7c25a01ab77957], a0.this$));
      }

      JArray< MeasurementType > MeasurementType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MeasurementType >(env->callStaticObjectMethod(cls, mids$[mid_values_5b6bc0bb7233141b]));
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
      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args);
      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MeasurementType_values(PyTypeObject *type);
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data);
      static PyGetSetDef t_MeasurementType__fields_[] = {
        DECLARE_GET_FIELD(t_MeasurementType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MeasurementType__methods_[] = {
        DECLARE_METHOD(t_MeasurementType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, of_, METH_VARARGS),
        DECLARE_METHOD(t_MeasurementType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MeasurementType)[] = {
        { Py_tp_methods, t_MeasurementType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MeasurementType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MeasurementType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MeasurementType, t_MeasurementType, MeasurementType);
      PyObject *t_MeasurementType::wrap_Object(const MeasurementType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MeasurementType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MeasurementType::install(PyObject *module)
      {
        installType(&PY_TYPE(MeasurementType), &PY_TYPE_DEF(MeasurementType), module, "MeasurementType", 0);
      }

      void t_MeasurementType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "class_", make_descriptor(MeasurementType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "wrapfn_", make_descriptor(t_MeasurementType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "boxfn_", make_descriptor(boxObject));
        env->getClass(MeasurementType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "CARRIER_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::CARRIER_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "COMBINED_RANGE_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::COMBINED_RANGE_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "DOPPLER", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::DOPPLER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "PSEUDO_RANGE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::PSEUDO_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "SIGNAL_STRENGTH", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::SIGNAL_STRENGTH)));
      }

      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MeasurementType::initializeClass, 1)))
          return NULL;
        return t_MeasurementType::wrap_Object(MeasurementType(((t_MeasurementType *) arg)->object.this$));
      }
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MeasurementType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MeasurementType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::valueOf(a0));
          return t_MeasurementType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MeasurementType_values(PyTypeObject *type)
      {
        JArray< MeasurementType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::values());
        return JArray<jobject>(result.this$).wrap(t_MeasurementType::wrap_jobject);
      }
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4B::class$ = NULL;
          jmethodID *SubFrame4B::mids$ = NULL;
          bool SubFrame4B::live$ = false;

          jclass SubFrame4B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_412668abc8d889e9] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_412668abc8d889e9] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_412668abc8d889e9] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_412668abc8d889e9] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_412668abc8d889e9] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_412668abc8d889e9] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved09_412668abc8d889e9] = env->getMethodID(cls, "getReserved09", "()I");
              mids$[mid_getReserved10_412668abc8d889e9] = env->getMethodID(cls, "getReserved10", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4B::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved09_412668abc8d889e9]);
          }

          jint SubFrame4B::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_412668abc8d889e9]);
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
          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data);
          static PyGetSetDef t_SubFrame4B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4B, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved09),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved10),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4B__methods_[] = {
            DECLARE_METHOD(t_SubFrame4B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved10, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4B)[] = {
            { Py_tp_methods, t_SubFrame4B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4B, t_SubFrame4B, SubFrame4B);

          void t_SubFrame4B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4B), &PY_TYPE_DEF(SubFrame4B), module, "SubFrame4B", 0);
          }

          void t_SubFrame4B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "class_", make_descriptor(SubFrame4B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "wrapfn_", make_descriptor(t_SubFrame4B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4B::initializeClass, 1)))
              return NULL;
            return t_SubFrame4B::wrap_Object(SubFrame4B(((t_SubFrame4B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureKey::class$ = NULL;
          jmethodID *KvnStructureKey::mids$ = NULL;
          bool KvnStructureKey::live$ = false;
          KvnStructureKey *KvnStructureKey::DATA = NULL;
          KvnStructureKey *KvnStructureKey::META = NULL;

          jclass KvnStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_3a6d8178bc93b34b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_756d0362e1ad9687] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/KvnStructureKey;");
              mids$[mid_values_5daa5563cb6d4486] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/KvnStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATA = new KvnStructureKey(env->getStaticObjectField(cls, "DATA", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              META = new KvnStructureKey(env->getStaticObjectField(cls, "META", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean KvnStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_3a6d8178bc93b34b], a0.this$, a1.this$);
          }

          KvnStructureKey KvnStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return KvnStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_756d0362e1ad9687], a0.this$));
          }

          JArray< KvnStructureKey > KvnStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< KvnStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5daa5563cb6d4486]));
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
        namespace section {
          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_KvnStructureKey_values(PyTypeObject *type);
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data);
          static PyGetSetDef t_KvnStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_KvnStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KvnStructureKey__methods_[] = {
            DECLARE_METHOD(t_KvnStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureKey)[] = {
            { Py_tp_methods, t_KvnStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_KvnStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(KvnStructureKey, t_KvnStructureKey, KvnStructureKey);
          PyObject *t_KvnStructureKey::wrap_Object(const KvnStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_KvnStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_KvnStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureKey), &PY_TYPE_DEF(KvnStructureKey), module, "KvnStructureKey", 0);
          }

          void t_KvnStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "class_", make_descriptor(KvnStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "wrapfn_", make_descriptor(t_KvnStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(KvnStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "DATA", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::DATA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "META", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::META)));
          }

          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureKey::initializeClass, 1)))
              return NULL;
            return t_KvnStructureKey::wrap_Object(KvnStructureKey(((t_KvnStructureKey *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            KvnStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::valueOf(a0));
              return t_KvnStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_KvnStructureKey_values(PyTypeObject *type)
          {
            JArray< KvnStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_KvnStructureKey::wrap_jobject);
          }
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "java/lang/Runnable.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamMonitor::class$ = NULL;
          jmethodID *StreamMonitor::mids$ = NULL;
          bool StreamMonitor::live$ = false;

          jclass StreamMonitor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamMonitor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1b25a01a27e47695] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/ntrip/NtripClient;Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZDDI)V");
              mids$[mid_addObserver_2fd2308d42ce0a43] = env->getMethodID(cls, "addObserver", "(ILorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_getException_5062f2ffb53bc0b4] = env->getMethodID(cls, "getException", "()Lorg/orekit/errors/OrekitException;");
              mids$[mid_run_0640e6acf969ed28] = env->getMethodID(cls, "run", "()V");
              mids$[mid_stopMonitoring_0640e6acf969ed28] = env->getMethodID(cls, "stopMonitoring", "()V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StreamMonitor::StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient & a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::Type & a2, jboolean a3, jboolean a4, jdouble a5, jdouble a6, jint a7) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_1b25a01a27e47695, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

          void StreamMonitor::addObserver(jint a0, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_2fd2308d42ce0a43], a0, a1.this$);
          }

          ::org::orekit::errors::OrekitException StreamMonitor::getException() const
          {
            return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_getException_5062f2ffb53bc0b4]));
          }

          void StreamMonitor::run() const
          {
            env->callVoidMethod(this$, mids$[mid_run_0640e6acf969ed28]);
          }

          void StreamMonitor::stopMonitoring() const
          {
            env->callVoidMethod(this$, mids$[mid_stopMonitoring_0640e6acf969ed28]);
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
          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args);
          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data);
          static PyGetSetDef t_StreamMonitor__fields_[] = {
            DECLARE_GET_FIELD(t_StreamMonitor, exception),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamMonitor__methods_[] = {
            DECLARE_METHOD(t_StreamMonitor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_StreamMonitor, getException, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, run, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, stopMonitoring, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamMonitor)[] = {
            { Py_tp_methods, t_StreamMonitor__methods_ },
            { Py_tp_init, (void *) t_StreamMonitor_init_ },
            { Py_tp_getset, t_StreamMonitor__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamMonitor)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(StreamMonitor, t_StreamMonitor, StreamMonitor);

          void t_StreamMonitor::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamMonitor), &PY_TYPE_DEF(StreamMonitor), module, "StreamMonitor", 0);
          }

          void t_StreamMonitor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "class_", make_descriptor(StreamMonitor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "wrapfn_", make_descriptor(t_StreamMonitor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamMonitor::initializeClass, 1)))
              return NULL;
            return t_StreamMonitor::wrap_Object(StreamMonitor(((t_StreamMonitor *) arg)->object.this$));
          }
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamMonitor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::ntrip::NtripClient a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            jboolean a4;
            jdouble a5;
            jdouble a6;
            jint a7;
            StreamMonitor object((jobject) NULL);

            if (!parseArgs(args, "ksKZZDDI", ::org::orekit::gnss::metric::ntrip::NtripClient::initializeClass, ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = StreamMonitor(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::metric::ntrip::MessageObserver a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addObserver(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self)
          {
            ::org::orekit::errors::OrekitException result((jobject) NULL);
            OBJ_CALL(result = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
          }

          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.run());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.stopMonitoring());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data)
          {
            ::org::orekit::errors::OrekitException value((jobject) NULL);
            OBJ_CALL(value = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *ConstantProcessNoise::class$ = NULL;
        jmethodID *ConstantProcessNoise::mids$ = NULL;
        bool ConstantProcessNoise::live$ = false;

        jclass ConstantProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/ConstantProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_14ed96341358adcb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getProcessNoiseMatrix_158686209bf6089c] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_14ed96341358adcb, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix ConstantProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_158686209bf6089c], a0.this$, a1.this$));
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
        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args);

        static PyMethodDef t_ConstantProcessNoise__methods_[] = {
          DECLARE_METHOD(t_ConstantProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantProcessNoise)[] = {
          { Py_tp_methods, t_ConstantProcessNoise__methods_ },
          { Py_tp_init, (void *) t_ConstantProcessNoise_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(ConstantProcessNoise, t_ConstantProcessNoise, ConstantProcessNoise);

        void t_ConstantProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantProcessNoise), &PY_TYPE_DEF(ConstantProcessNoise), module, "ConstantProcessNoise", 0);
        }

        void t_ConstantProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "class_", make_descriptor(ConstantProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "wrapfn_", make_descriptor(t_ConstantProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantProcessNoise::initializeClass, 1)))
            return NULL;
          return t_ConstantProcessNoise::wrap_Object(ConstantProcessNoise(((t_ConstantProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = ConstantProcessNoise(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConstantProcessNoise(a0, a1));
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

        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(ConstantProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "java/io/IOException.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCHatEpsilonReader::class$ = NULL;
          jmethodID *FESCHatEpsilonReader::mids$ = NULL;
          bool FESCHatEpsilonReader::live$ = false;

          jclass FESCHatEpsilonReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCHatEpsilonReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b152455cbfaa85e0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;Ljava/util/Map;)V");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCHatEpsilonReader::FESCHatEpsilonReader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a3, const ::java::util::Map & a4) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_b152455cbfaa85e0, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          void FESCHatEpsilonReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args);

          static PyMethodDef t_FESCHatEpsilonReader__methods_[] = {
            DECLARE_METHOD(t_FESCHatEpsilonReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCHatEpsilonReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCHatEpsilonReader)[] = {
            { Py_tp_methods, t_FESCHatEpsilonReader__methods_ },
            { Py_tp_init, (void *) t_FESCHatEpsilonReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCHatEpsilonReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCHatEpsilonReader, t_FESCHatEpsilonReader, FESCHatEpsilonReader);

          void t_FESCHatEpsilonReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCHatEpsilonReader), &PY_TYPE_DEF(FESCHatEpsilonReader), module, "FESCHatEpsilonReader", 0);
          }

          void t_FESCHatEpsilonReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "class_", make_descriptor(FESCHatEpsilonReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "wrapfn_", make_descriptor(t_FESCHatEpsilonReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCHatEpsilonReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCHatEpsilonReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCHatEpsilonReader::initializeClass, 1)))
              return NULL;
            return t_FESCHatEpsilonReader::wrap_Object(FESCHatEpsilonReader(((t_FESCHatEpsilonReader *) arg)->object.this$));
          }
          static PyObject *t_FESCHatEpsilonReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCHatEpsilonReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCHatEpsilonReader_init_(t_FESCHatEpsilonReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::Map a4((jobject) NULL);
            PyTypeObject **p4;
            FESCHatEpsilonReader object((jobject) NULL);

            if (!parseArgs(args, "sDDKK", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_, &a4, &p4, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FESCHatEpsilonReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCHatEpsilonReader_loadData(t_FESCHatEpsilonReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCHatEpsilonReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldUnivariateMatrixFunction::live$ = false;

      jclass CalculusFieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_37731553c578c485] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_37731553c578c485], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateMatrixFunction, t_CalculusFieldUnivariateMatrixFunction, CalculusFieldUnivariateMatrixFunction);
      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_Object(const CalculusFieldUnivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldUnivariateMatrixFunction), module, "CalculusFieldUnivariateMatrixFunction", 0);
      }

      void t_CalculusFieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "class_", make_descriptor(CalculusFieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateMatrixFunction::wrap_Object(CalculusFieldUnivariateMatrixFunction(((t_CalculusFieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Laas2015::class$ = NULL;
              jmethodID *Laas2015::mids$ = NULL;
              bool Laas2015::live$ = false;
              jdouble Laas2015::DEFAULT_SCALING_THRESHOLD = (jdouble) 0;

              jclass Laas2015::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCALING_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_SCALING_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Laas2015::Laas2015() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              Laas2015::Laas2015(jdouble a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Laas2015::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Laas2015::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Laas2015::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
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
              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data);
              static PyGetSetDef t_Laas2015__fields_[] = {
                DECLARE_GET_FIELD(t_Laas2015, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Laas2015__methods_[] = {
                DECLARE_METHOD(t_Laas2015, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, compute, METH_VARARGS),
                DECLARE_METHOD(t_Laas2015, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Laas2015)[] = {
                { Py_tp_methods, t_Laas2015__methods_ },
                { Py_tp_init, (void *) t_Laas2015_init_ },
                { Py_tp_getset, t_Laas2015__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Laas2015)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Laas2015, t_Laas2015, Laas2015);

              void t_Laas2015::install(PyObject *module)
              {
                installType(&PY_TYPE(Laas2015), &PY_TYPE_DEF(Laas2015), module, "Laas2015", 0);
              }

              void t_Laas2015::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "class_", make_descriptor(Laas2015::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "wrapfn_", make_descriptor(t_Laas2015::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "boxfn_", make_descriptor(boxObject));
                env->getClass(Laas2015::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "DEFAULT_SCALING_THRESHOLD", make_descriptor(Laas2015::DEFAULT_SCALING_THRESHOLD));
              }

              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Laas2015::initializeClass, 1)))
                  return NULL;
                return t_Laas2015::wrap_Object(Laas2015(((t_Laas2015 *) arg)->object.this$));
              }
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Laas2015::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Laas2015 object((jobject) NULL);

                    INT_CALL(object = Laas2015());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    jdouble a0;
                    jint a1;
                    Laas2015 object((jobject) NULL);

                    if (!parseArgs(args, "DI", &a0, &a1))
                    {
                      INT_CALL(object = Laas2015(a0, a1));
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

              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
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
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSatelliteEphemeris::class$ = NULL;
              jmethodID *OemSatelliteEphemeris::mids$ = NULL;
              bool OemSatelliteEphemeris::live$ = false;

              jclass OemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f5014c1d3796dec5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSatelliteEphemeris::OemSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5014c1d3796dec5, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              jdouble OemSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
              }

              ::java::util::List OemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OemSatelliteEphemeris, t_OemSatelliteEphemeris, OemSatelliteEphemeris);

              void t_OemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSatelliteEphemeris), &PY_TYPE_DEF(OemSatelliteEphemeris), module, "OemSatelliteEphemeris", 0);
              }

              void t_OemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "class_", make_descriptor(OemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "wrapfn_", make_descriptor(t_OemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OemSatelliteEphemeris::wrap_Object(OemSatelliteEphemeris(((t_OemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OemSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment));
              }

              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data)
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
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD::class$ = NULL;
        jmethodID *CRD::mids$ = NULL;
        bool CRD::live$ = false;
        ::java::lang::String *CRD::STR_NAN = NULL;
        ::java::lang::String *CRD::STR_VALUE_NOT_AVAILABLE = NULL;

        jclass CRD::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDataBlock_8144a496fd0af892] = env->getMethodID(cls, "addDataBlock", "(Lorg/orekit/files/ilrs/CRD$CRDDataBlock;)V");
            mids$[mid_formatIntegerOrNaN_637f0334ff6ee92d] = env->getStaticMethodID(cls, "formatIntegerOrNaN", "(II)Ljava/lang/String;");
            mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getDataBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getDataBlocks", "()Ljava/util/List;");
            mids$[mid_handleNaN_60bb1b490b673cbf] = env->getStaticMethodID(cls, "handleNaN", "(Ljava/lang/String;)Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STR_NAN = new ::java::lang::String(env->getStaticObjectField(cls, "STR_NAN", "Ljava/lang/String;"));
            STR_VALUE_NOT_AVAILABLE = new ::java::lang::String(env->getStaticObjectField(cls, "STR_VALUE_NOT_AVAILABLE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD::CRD() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void CRD::addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addDataBlock_8144a496fd0af892], a0.this$);
        }

        ::java::lang::String CRD::formatIntegerOrNaN(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatIntegerOrNaN_637f0334ff6ee92d], a0, a1));
        }

        ::java::util::List CRD::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
        }

        ::java::util::List CRD::getDataBlocks() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataBlocks_0d9551367f7ecdef]));
        }

        ::java::lang::String CRD::handleNaN(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_handleNaN_60bb1b490b673cbf], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg);
        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRD_getComments(t_CRD *self);
        static PyObject *t_CRD_getDataBlocks(t_CRD *self);
        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_get__comments(t_CRD *self, void *data);
        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data);
        static PyGetSetDef t_CRD__fields_[] = {
          DECLARE_GET_FIELD(t_CRD, comments),
          DECLARE_GET_FIELD(t_CRD, dataBlocks),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD__methods_[] = {
          DECLARE_METHOD(t_CRD, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, addDataBlock, METH_O),
          DECLARE_METHOD(t_CRD, formatIntegerOrNaN, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRD, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CRD, getDataBlocks, METH_NOARGS),
          DECLARE_METHOD(t_CRD, handleNaN, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD)[] = {
          { Py_tp_methods, t_CRD__methods_ },
          { Py_tp_init, (void *) t_CRD_init_ },
          { Py_tp_getset, t_CRD__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD, t_CRD, CRD);

        void t_CRD::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD), &PY_TYPE_DEF(CRD), module, "CRD", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "SessionStatistics", make_descriptor(&PY_TYPE_DEF(CRD$SessionStatistics)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CalibrationDetail", make_descriptor(&PY_TYPE_DEF(CRD$CalibrationDetail)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Calibration", make_descriptor(&PY_TYPE_DEF(CRD$Calibration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Meteo", make_descriptor(&PY_TYPE_DEF(CRD$Meteo)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "AnglesMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$AnglesMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "MeteorologicalMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$MeteorologicalMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeSupplement", make_descriptor(&PY_TYPE_DEF(CRD$RangeSupplement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "NptRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$NptRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "FrRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$FrRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$RangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CRDDataBlock", make_descriptor(&PY_TYPE_DEF(CRD$CRDDataBlock)));
        }

        void t_CRD::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "class_", make_descriptor(CRD::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "wrapfn_", make_descriptor(t_CRD::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRD::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_NAN", make_descriptor(j2p(*CRD::STR_NAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_VALUE_NOT_AVAILABLE", make_descriptor(j2p(*CRD::STR_VALUE_NOT_AVAILABLE)));
        }

        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD::initializeClass, 1)))
            return NULL;
          return t_CRD::wrap_Object(CRD(((t_CRD *) arg)->object.this$));
        }
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds)
        {
          CRD object((jobject) NULL);

          INT_CALL(object = CRD());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CRDDataBlock a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CRDDataBlock::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addDataBlock(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDataBlock", arg);
          return NULL;
        }

        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::formatIntegerOrNaN(a0, a1));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "formatIntegerOrNaN", args);
          return NULL;
        }

        static PyObject *t_CRD_getComments(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRD_getDataBlocks(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CRDDataBlock));
        }

        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::handleNaN(a0));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "handleNaN", arg);
          return NULL;
        }

        static PyObject *t_CRD_get__comments(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizerId::class$ = NULL;
        jmethodID *OptimizerId::mids$ = NULL;
        bool OptimizerId::live$ = false;
        OptimizerId *OptimizerId::GAUSS_NEWTON_LU = NULL;
        OptimizerId *OptimizerId::GAUSS_NEWTON_QR = NULL;
        OptimizerId *OptimizerId::LEVENBERG_MARQUADT = NULL;

        jclass OptimizerId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizerId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_b54308c2a7024493] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/adjustment/OptimizerId;");
            mids$[mid_values_bae4480d0ac97acb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/adjustment/OptimizerId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GAUSS_NEWTON_LU = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_LU", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            GAUSS_NEWTON_QR = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_QR", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            LEVENBERG_MARQUADT = new OptimizerId(env->getStaticObjectField(cls, "LEVENBERG_MARQUADT", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OptimizerId OptimizerId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return OptimizerId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b54308c2a7024493], a0.this$));
        }

        JArray< OptimizerId > OptimizerId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< OptimizerId >(env->callStaticObjectMethod(cls, mids$[mid_values_bae4480d0ac97acb]));
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
      namespace adjustment {
        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args);
        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_OptimizerId_values(PyTypeObject *type);
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data);
        static PyGetSetDef t_OptimizerId__fields_[] = {
          DECLARE_GET_FIELD(t_OptimizerId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OptimizerId__methods_[] = {
          DECLARE_METHOD(t_OptimizerId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, of_, METH_VARARGS),
          DECLARE_METHOD(t_OptimizerId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizerId)[] = {
          { Py_tp_methods, t_OptimizerId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OptimizerId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizerId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(OptimizerId, t_OptimizerId, OptimizerId);
        PyObject *t_OptimizerId::wrap_Object(const OptimizerId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_OptimizerId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_OptimizerId::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizerId), &PY_TYPE_DEF(OptimizerId), module, "OptimizerId", 0);
        }

        void t_OptimizerId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "class_", make_descriptor(OptimizerId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "wrapfn_", make_descriptor(t_OptimizerId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "boxfn_", make_descriptor(boxObject));
          env->getClass(OptimizerId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_LU", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_LU)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_QR", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_QR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "LEVENBERG_MARQUADT", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::LEVENBERG_MARQUADT)));
        }

        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizerId::initializeClass, 1)))
            return NULL;
          return t_OptimizerId::wrap_Object(OptimizerId(((t_OptimizerId *) arg)->object.this$));
        }
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizerId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          OptimizerId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::valueOf(a0));
            return t_OptimizerId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_OptimizerId_values(PyTypeObject *type)
        {
          JArray< OptimizerId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::values());
          return JArray<jobject>(result.this$).wrap(t_OptimizerId::wrap_jobject);
        }
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2D::class$ = NULL;
          jmethodID *Vector2D::mids$ = NULL;
          bool Vector2D::live$ = false;
          Vector2D *Vector2D::MINUS_I = NULL;
          Vector2D *Vector2D::MINUS_J = NULL;
          Vector2D *Vector2D::NEGATIVE_INFINITY = NULL;
          Vector2D *Vector2D::NaN = NULL;
          Vector2D *Vector2D::PLUS_I = NULL;
          Vector2D *Vector2D::PLUS_J = NULL;
          Vector2D *Vector2D::POSITIVE_INFINITY = NULL;
          Vector2D *Vector2D::ZERO = NULL;

          jclass Vector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_4eefe7c484d8847c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_a1092cb450852e45] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_b693e8f38c5ecbd9] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_8fc99b32a74d08c2] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_adc34d508fd7001c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_add_fd976f5dd924d367] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_angle_19de0be8ef7116ef] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_crossProduct_19de0be8ef7116ef] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_19de0be8ef7116ef] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance1_b540ea36818b5810] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_19de0be8ef7116ef] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceInf_b540ea36818b5810] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_19de0be8ef7116ef] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceSq_b540ea36818b5810] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_19de0be8ef7116ef] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_dotProduct_b540ea36818b5810] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_221e8e85cb385209] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_557b8123390d8d0c] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_557b8123390d8d0c] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZero_f681f2fc9cdfab57] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_f681f2fc9cdfab57] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_orientation_53cef8ac1ce9cfba] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_scalarMultiply_1b4c0a5fd68f3ffb] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_adc34d508fd7001c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_fd976f5dd924d367] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector2D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              MINUS_J = new Vector2D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NEGATIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NaN = new Vector2D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_I = new Vector2D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_J = new Vector2D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              POSITIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              ZERO = new Vector2D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2D::Vector2D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4eefe7c484d8847c, a0, a1.this$)) {}

          Vector2D::Vector2D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1092cb450852e45, a0, a1.this$, a2, a3.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b693e8f38c5ecbd9, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5, jdouble a6, const Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fc99b32a74d08c2, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector2D Vector2D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_adc34d508fd7001c], a0.this$));
          }

          Vector2D Vector2D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_fd976f5dd924d367], a0, a1.this$));
          }

          jdouble Vector2D::angle(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::crossProduct(const Vector2D & a0, const Vector2D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_crossProduct_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Vector2D::distance(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b540ea36818b5810], a0.this$);
          }

          jdouble Vector2D::distance1(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b540ea36818b5810], a0.this$);
          }

          jdouble Vector2D::distanceInf(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b540ea36818b5810], a0.this$);
          }

          jdouble Vector2D::distanceSq(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_19de0be8ef7116ef], a0.this$, a1.this$);
          }

          jdouble Vector2D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b540ea36818b5810], a0.this$);
          }

          jboolean Vector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jboolean Vector2D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_221e8e85cb385209], a0.this$);
          }

          jdouble Vector2D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
          }

          jdouble Vector2D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
          }

          jdouble Vector2D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_557b8123390d8d0c]);
          }

          jdouble Vector2D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::Space Vector2D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
          }

          jdouble Vector2D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
          }

          jdouble Vector2D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
          }

          Vector2D Vector2D::getZero() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_getZero_f681f2fc9cdfab57]));
          }

          jint Vector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean Vector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
          }

          jboolean Vector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          Vector2D Vector2D::negate() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_negate_f681f2fc9cdfab57]));
          }

          jdouble Vector2D::orientation(const Vector2D & a0, const Vector2D & a1, const Vector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_orientation_53cef8ac1ce9cfba], a0.this$, a1.this$, a2.this$);
          }

          Vector2D Vector2D::scalarMultiply(jdouble a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_1b4c0a5fd68f3ffb], a0));
          }

          Vector2D Vector2D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_adc34d508fd7001c], a0.this$));
          }

          Vector2D Vector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_fd976f5dd924d367], a0, a1.this$));
          }

          JArray< jdouble > Vector2D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
          }

          ::java::lang::String Vector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::java::lang::String Vector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
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
          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_getNorm(t_Vector2D *self);
          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self);
          static PyObject *t_Vector2D_getSpace(t_Vector2D *self);
          static PyObject *t_Vector2D_getX(t_Vector2D *self);
          static PyObject *t_Vector2D_getY(t_Vector2D *self);
          static PyObject *t_Vector2D_getZero(t_Vector2D *self);
          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self);
          static PyObject *t_Vector2D_isNaN(t_Vector2D *self);
          static PyObject *t_Vector2D_negate(t_Vector2D *self);
          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_toArray(t_Vector2D *self);
          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data);
          static PyGetSetDef t_Vector2D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2D, infinite),
            DECLARE_GET_FIELD(t_Vector2D, naN),
            DECLARE_GET_FIELD(t_Vector2D, norm),
            DECLARE_GET_FIELD(t_Vector2D, norm1),
            DECLARE_GET_FIELD(t_Vector2D, normInf),
            DECLARE_GET_FIELD(t_Vector2D, normSq),
            DECLARE_GET_FIELD(t_Vector2D, space),
            DECLARE_GET_FIELD(t_Vector2D, x),
            DECLARE_GET_FIELD(t_Vector2D, y),
            DECLARE_GET_FIELD(t_Vector2D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2D__methods_[] = {
            DECLARE_METHOD(t_Vector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, distance, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2D)[] = {
            { Py_tp_methods, t_Vector2D__methods_ },
            { Py_tp_init, (void *) t_Vector2D_init_ },
            { Py_tp_getset, t_Vector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector2D, t_Vector2D, Vector2D);

          void t_Vector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2D), &PY_TYPE_DEF(Vector2D), module, "Vector2D", 0);
          }

          void t_Vector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "class_", make_descriptor(Vector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "wrapfn_", make_descriptor(t_Vector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NEGATIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NaN", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "POSITIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "ZERO", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::ZERO)));
          }

          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2D::initializeClass, 1)))
              return NULL;
            return t_Vector2D::wrap_Object(Vector2D(((t_Vector2D *) arg)->object.this$));
          }
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                jdouble a6;
                Vector2D a7((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.crossProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_getNorm(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getSpace(t_Vector2D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector2D_getX(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getY(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getZero(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_isNaN(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_negate(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            Vector2D a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::orientation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg)
          {
            jdouble a0;
            Vector2D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector2D_toArray(t_Vector2D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data)
          {
            Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem$Evaluation::class$ = NULL;
            jmethodID *LeastSquaresProblem$Evaluation::mids$ = NULL;
            bool LeastSquaresProblem$Evaluation::live$ = false;

            jclass LeastSquaresProblem$Evaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getChiSquare_557b8123390d8d0c] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_557b8123390d8d0c] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_e95e381257af03e9] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getPoint_75d50d73180655b4] = env->getMethodID(cls, "getPoint", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getRMS_557b8123390d8d0c] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_69cfb132c661aca4] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getResiduals_75d50d73180655b4] = env->getMethodID(cls, "getResiduals", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getSigma_6041102868c92dbb] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble LeastSquaresProblem$Evaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_557b8123390d8d0c]);
            }

            jdouble LeastSquaresProblem$Evaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_557b8123390d8d0c]);
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_e95e381257af03e9], a0));
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getJacobian() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getJacobian_70a207fcbc031df2]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getPoint() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPoint_75d50d73180655b4]));
            }

            jdouble LeastSquaresProblem$Evaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_557b8123390d8d0c]);
            }

            jdouble LeastSquaresProblem$Evaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_69cfb132c661aca4], a0);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getResiduals() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResiduals_75d50d73180655b4]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_6041102868c92dbb], a0));
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
            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem$Evaluation__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, chiSquare),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, cost),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, jacobian),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, point),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, rMS),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, residuals),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem$Evaluation__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getJacobian, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getPoint, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getResiduals, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem$Evaluation)[] = {
              { Py_tp_methods, t_LeastSquaresProblem$Evaluation__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem$Evaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem$Evaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem$Evaluation, t_LeastSquaresProblem$Evaluation, LeastSquaresProblem$Evaluation);

            void t_LeastSquaresProblem$Evaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem$Evaluation), &PY_TYPE_DEF(LeastSquaresProblem$Evaluation), module, "LeastSquaresProblem$Evaluation", 0);
            }

            void t_LeastSquaresProblem$Evaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "class_", make_descriptor(LeastSquaresProblem$Evaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "wrapfn_", make_descriptor(t_LeastSquaresProblem$Evaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem$Evaluation::wrap_Object(LeastSquaresProblem$Evaluation(((t_LeastSquaresProblem$Evaluation *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *AlternativeHypothesis::class$ = NULL;
        jmethodID *AlternativeHypothesis::mids$ = NULL;
        bool AlternativeHypothesis::live$ = false;
        AlternativeHypothesis *AlternativeHypothesis::GREATER_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::LESS_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::TWO_SIDED = NULL;

        jclass AlternativeHypothesis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/AlternativeHypothesis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_e103b327b4e4b0f7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/inference/AlternativeHypothesis;");
            mids$[mid_values_f740c23dd98a238a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/inference/AlternativeHypothesis;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GREATER_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "GREATER_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            LESS_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "LESS_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            TWO_SIDED = new AlternativeHypothesis(env->getStaticObjectField(cls, "TWO_SIDED", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlternativeHypothesis AlternativeHypothesis::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlternativeHypothesis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e103b327b4e4b0f7], a0.this$));
        }

        JArray< AlternativeHypothesis > AlternativeHypothesis::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlternativeHypothesis >(env->callStaticObjectMethod(cls, mids$[mid_values_f740c23dd98a238a]));
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
        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args);
        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type);
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data);
        static PyGetSetDef t_AlternativeHypothesis__fields_[] = {
          DECLARE_GET_FIELD(t_AlternativeHypothesis, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlternativeHypothesis__methods_[] = {
          DECLARE_METHOD(t_AlternativeHypothesis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlternativeHypothesis, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlternativeHypothesis)[] = {
          { Py_tp_methods, t_AlternativeHypothesis__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlternativeHypothesis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlternativeHypothesis)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlternativeHypothesis, t_AlternativeHypothesis, AlternativeHypothesis);
        PyObject *t_AlternativeHypothesis::wrap_Object(const AlternativeHypothesis& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlternativeHypothesis::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlternativeHypothesis::install(PyObject *module)
        {
          installType(&PY_TYPE(AlternativeHypothesis), &PY_TYPE_DEF(AlternativeHypothesis), module, "AlternativeHypothesis", 0);
        }

        void t_AlternativeHypothesis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "class_", make_descriptor(AlternativeHypothesis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "wrapfn_", make_descriptor(t_AlternativeHypothesis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlternativeHypothesis::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "GREATER_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::GREATER_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "LESS_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::LESS_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "TWO_SIDED", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::TWO_SIDED)));
        }

        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlternativeHypothesis::initializeClass, 1)))
            return NULL;
          return t_AlternativeHypothesis::wrap_Object(AlternativeHypothesis(((t_AlternativeHypothesis *) arg)->object.this$));
        }
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlternativeHypothesis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlternativeHypothesis result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::valueOf(a0));
            return t_AlternativeHypothesis::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type)
        {
          JArray< AlternativeHypothesis > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::values());
          return JArray<jobject>(result.this$).wrap(t_AlternativeHypothesis::wrap_jobject);
        }
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonGeoMagneticFields::class$ = NULL;
        jmethodID *PythonGeoMagneticFields::mids$ = NULL;
        bool PythonGeoMagneticFields::live$ = false;

        jclass PythonGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getField_a3e70fb66ee864fe] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_7100d3672aa999e4] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_7100d3672aa999e4] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGeoMagneticFields::PythonGeoMagneticFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonGeoMagneticFields::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonGeoMagneticFields::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonGeoMagneticFields::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self);
        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args);
        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data);
        static PyGetSetDef t_PythonGeoMagneticFields__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGeoMagneticFields, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_PythonGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGeoMagneticFields)[] = {
          { Py_tp_methods, t_PythonGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_PythonGeoMagneticFields_init_ },
          { Py_tp_getset, t_PythonGeoMagneticFields__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGeoMagneticFields, t_PythonGeoMagneticFields, PythonGeoMagneticFields);

        void t_PythonGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGeoMagneticFields), &PY_TYPE_DEF(PythonGeoMagneticFields), module, "PythonGeoMagneticFields", 1);
        }

        void t_PythonGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "class_", make_descriptor(PythonGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "wrapfn_", make_descriptor(t_PythonGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGeoMagneticFields::initializeClass);
          JNINativeMethod methods[] = {
            { "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getField0 },
            { "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getIGRF1 },
            { "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getWMM2 },
            { "pythonDecRef", "()V", (void *) t_PythonGeoMagneticFields_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_PythonGeoMagneticFields::wrap_Object(PythonGeoMagneticFields(((t_PythonGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          PythonGeoMagneticFields object((jobject) NULL);

          INT_CALL(object = PythonGeoMagneticFields());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args)
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

        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *o0 = ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::wrap_Object(::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel(a0));
          PyObject *result = PyObject_CallMethod(obj, "getField", "Od", o0, (double) a1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getField", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getIGRF", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getIGRF", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getWMM", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getWMM", result);
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

        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data)
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
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger$LoggedEvent::class$ = NULL;
        jmethodID *EventsLogger$LoggedEvent::mids$ = NULL;
        bool EventsLogger$LoggedEvent::live$ = false;

        jclass EventsLogger$LoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger$LoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_0701b00b25822fff] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getState_15e85d5301b90ef8] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate EventsLogger$LoggedEvent::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger$LoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_0701b00b25822fff]));
        }

        ::org::orekit::propagation::SpacecraftState EventsLogger$LoggedEvent::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_15e85d5301b90ef8]));
        }

        jboolean EventsLogger$LoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_89b302893bdbe1f1]);
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
        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data);
        static PyGetSetDef t_EventsLogger$LoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, date),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, increasing),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger$LoggedEvent__methods_[] = {
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger$LoggedEvent)[] = {
          { Py_tp_methods, t_EventsLogger$LoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventsLogger$LoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger$LoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger$LoggedEvent, t_EventsLogger$LoggedEvent, EventsLogger$LoggedEvent);

        void t_EventsLogger$LoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger$LoggedEvent), &PY_TYPE_DEF(EventsLogger$LoggedEvent), module, "EventsLogger$LoggedEvent", 0);
        }

        void t_EventsLogger$LoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "class_", make_descriptor(EventsLogger$LoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "wrapfn_", make_descriptor(t_EventsLogger$LoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 1)))
            return NULL;
          return t_EventsLogger$LoggedEvent::wrap_Object(EventsLogger$LoggedEvent(((t_EventsLogger$LoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SymmLQ.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SymmLQ::class$ = NULL;
      jmethodID *SymmLQ::mids$ = NULL;
      bool SymmLQ::live$ = false;

      jclass SymmLQ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SymmLQ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_54544b43400189dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_bcaf7e2c67482688] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_89b302893bdbe1f1] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solve_6b479a0f30bd3d0f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_2afa71936b186c26] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_5846c18557c7b879] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_794cf6c78f8f4b2d] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_272f088736796c76] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_6caca95bd3e248d3] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_2afa71936b186c26] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_794cf6c78f8f4b2d] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_f3afef04e4ba1565] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SymmLQ::SymmLQ(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_54544b43400189dc, a0.this$, a1, a2)) {}

      SymmLQ::SymmLQ(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_bcaf7e2c67482688, a0, a1, a2)) {}

      jboolean SymmLQ::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_6b479a0f30bd3d0f], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_5846c18557c7b879], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_794cf6c78f8f4b2d], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, jboolean a2, jdouble a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_272f088736796c76], a0.this$, a1.this$, a2, a3));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, jboolean a3, jdouble a4) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_6caca95bd3e248d3], a0.this$, a1.this$, a2.this$, a3, a4));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_794cf6c78f8f4b2d], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jboolean a4, jdouble a5) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_f3afef04e4ba1565], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
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
      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self);
      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args);
      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args);

      static PyMethodDef t_SymmLQ__methods_[] = {
        DECLARE_METHOD(t_SymmLQ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_SymmLQ, solve, METH_VARARGS),
        DECLARE_METHOD(t_SymmLQ, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SymmLQ)[] = {
        { Py_tp_methods, t_SymmLQ__methods_ },
        { Py_tp_init, (void *) t_SymmLQ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SymmLQ)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(SymmLQ, t_SymmLQ, SymmLQ);

      void t_SymmLQ::install(PyObject *module)
      {
        installType(&PY_TYPE(SymmLQ), &PY_TYPE_DEF(SymmLQ), module, "SymmLQ", 0);
      }

      void t_SymmLQ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "class_", make_descriptor(SymmLQ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "wrapfn_", make_descriptor(t_SymmLQ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SymmLQ::initializeClass, 1)))
          return NULL;
        return t_SymmLQ::wrap_Object(SymmLQ(((t_SymmLQ *) arg)->object.this$));
      }
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SymmLQ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
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

      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jboolean a4;
            jdouble a5;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *PythonTleGenerationAlgorithm::class$ = NULL;
            jmethodID *PythonTleGenerationAlgorithm::mids$ = NULL;
            bool PythonTleGenerationAlgorithm::live$ = false;

            jclass PythonTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_generate_d1897b6bbe0a4251] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_e9ff15b430a2bfc5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonTleGenerationAlgorithm::PythonTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonTleGenerationAlgorithm::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonTleGenerationAlgorithm::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonTleGenerationAlgorithm::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        namespace tle {
          namespace generation {
            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self);
            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_PythonTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_PythonTleGenerationAlgorithm, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_PythonTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_PythonTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_PythonTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonTleGenerationAlgorithm, t_PythonTleGenerationAlgorithm, PythonTleGenerationAlgorithm);

            void t_PythonTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonTleGenerationAlgorithm), &PY_TYPE_DEF(PythonTleGenerationAlgorithm), module, "PythonTleGenerationAlgorithm", 1);
            }

            void t_PythonTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "class_", make_descriptor(PythonTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_PythonTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonTleGenerationAlgorithm::initializeClass);
              JNINativeMethod methods[] = {
                { "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;", (void *) t_PythonTleGenerationAlgorithm_generate0 },
                { "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;", (void *) t_PythonTleGenerationAlgorithm_generate1 },
                { "pythonDecRef", "()V", (void *) t_PythonTleGenerationAlgorithm_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_PythonTleGenerationAlgorithm::wrap_Object(PythonTleGenerationAlgorithm(((t_PythonTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              PythonTleGenerationAlgorithm object((jobject) NULL);

              INT_CALL(object = PythonTleGenerationAlgorithm());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args)
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(::org::orekit::propagation::analytical::tle::FieldTLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(::org::orekit::propagation::analytical::tle::TLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataLine::class$ = NULL;
          jmethodID *RinexClock$ClockDataLine::mids$ = NULL;
          bool RinexClock$ClockDataLine::live$ = false;

          jclass RinexClock$ClockDataLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0c897206077b7113] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/clock/RinexClock;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;Ljava/lang/String;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;IDDDDDD)V");
              mids$[mid_getClockAcceleration_557b8123390d8d0c] = env->getMethodID(cls, "getClockAcceleration", "()D");
              mids$[mid_getClockAccelerationSigma_557b8123390d8d0c] = env->getMethodID(cls, "getClockAccelerationSigma", "()D");
              mids$[mid_getClockBias_557b8123390d8d0c] = env->getMethodID(cls, "getClockBias", "()D");
              mids$[mid_getClockBiasSigma_557b8123390d8d0c] = env->getMethodID(cls, "getClockBiasSigma", "()D");
              mids$[mid_getClockRate_557b8123390d8d0c] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getClockRateSigma_557b8123390d8d0c] = env->getMethodID(cls, "getClockRateSigma", "()D");
              mids$[mid_getDataType_171db9079163a25a] = env->getMethodID(cls, "getDataType", "()Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEpoch_5303d2b8df09dbef] = env->getMethodID(cls, "getEpoch", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getNumberOfValues_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfValues", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ClockDataLine::RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a1, const ::java::lang::String & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeComponents & a4, jint a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0c897206077b7113, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11)) {}

          jdouble RinexClock$ClockDataLine::getClockAcceleration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAcceleration_557b8123390d8d0c]);
          }

          jdouble RinexClock$ClockDataLine::getClockAccelerationSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAccelerationSigma_557b8123390d8d0c]);
          }

          jdouble RinexClock$ClockDataLine::getClockBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBias_557b8123390d8d0c]);
          }

          jdouble RinexClock$ClockDataLine::getClockBiasSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBiasSigma_557b8123390d8d0c]);
          }

          jdouble RinexClock$ClockDataLine::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_557b8123390d8d0c]);
          }

          jdouble RinexClock$ClockDataLine::getClockRateSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRateSigma_557b8123390d8d0c]);
          }

          ::org::orekit::files::rinex::clock::RinexClock$ClockDataType RinexClock$ClockDataLine::getDataType() const
          {
            return ::org::orekit::files::rinex::clock::RinexClock$ClockDataType(env->callObjectMethod(this$, mids$[mid_getDataType_171db9079163a25a]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch(const ::org::orekit::time::TimeScale & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_5303d2b8df09dbef], a0.this$));
          }

          ::java::lang::String RinexClock$ClockDataLine::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          jint RinexClock$ClockDataLine::getNumberOfValues() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfValues_412668abc8d889e9]);
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
        namespace clock {
          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataLine__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAcceleration),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAccelerationSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBias),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBiasSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRate),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRateSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, dataType),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, epoch),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, name),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, numberOfValues),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataLine__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAcceleration, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAccelerationSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBiasSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRateSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getDataType, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getEpoch, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getNumberOfValues, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataLine)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataLine__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ClockDataLine_init_ },
            { Py_tp_getset, t_RinexClock$ClockDataLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataLine, t_RinexClock$ClockDataLine, RinexClock$ClockDataLine);

          void t_RinexClock$ClockDataLine::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataLine), &PY_TYPE_DEF(RinexClock$ClockDataLine), module, "RinexClock$ClockDataLine", 0);
          }

          void t_RinexClock$ClockDataLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "class_", make_descriptor(RinexClock$ClockDataLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "wrapfn_", make_descriptor(t_RinexClock$ClockDataLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataLine::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataLine::wrap_Object(RinexClock$ClockDataLine(((t_RinexClock$ClockDataLine *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::clock::RinexClock a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeComponents a4((jobject) NULL);
            jint a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            RinexClock$ClockDataLine object((jobject) NULL);

            if (!parseArgs(args, "kKskkIDDDDDD", ::org::orekit::files::rinex::clock::RinexClock::initializeClass, ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1, &p1, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
            {
              INT_CALL(object = RinexClock$ClockDataLine(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getEpoch(a0));
                  return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getEpoch", args);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfValues());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBias());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfValues());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockRangeModifier::live$ = false;

          jclass RelativisticJ2ClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockRangeModifier::RelativisticJ2ClockRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockRangeModifier, t_RelativisticJ2ClockRangeModifier, RelativisticJ2ClockRangeModifier);

          void t_RelativisticJ2ClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockRangeModifier), module, "RelativisticJ2ClockRangeModifier", 0);
          }

          void t_RelativisticJ2ClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "class_", make_descriptor(RelativisticJ2ClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockRangeModifier::wrap_Object(RelativisticJ2ClockRangeModifier(((t_RelativisticJ2ClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data)
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
#include "java/util/HashMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashMap::class$ = NULL;
    jmethodID *HashMap::mids$ = NULL;
    bool HashMap::live$ = false;

    jclass HashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_6ba01303bcce0307] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_7c1037ab599ac362] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_221e8e85cb385209] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_221e8e85cb385209] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_e9b6f8dd03d71e12] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_e9b6f8dd03d71e12] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5f964797772d10ff] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_e9b6f8dd03d71e12] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_5c8006f3f1f9c96f] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashMap::HashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    HashMap::HashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    HashMap::HashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_6ba01303bcce0307, a0.this$)) {}

    HashMap::HashMap(jint a0, jfloat a1) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_7c1037ab599ac362, a0, a1)) {}

    void HashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object HashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean HashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_221e8e85cb385209], a0.this$);
    }

    jboolean HashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_221e8e85cb385209], a0.this$);
    }

    ::java::util::Set HashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object HashMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object HashMap::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jboolean HashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Set HashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object HashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    void HashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
    }

    ::java::lang::Object HashMap::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::Object HashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jboolean HashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_5f964797772d10ff], a0.this$, a1.this$);
    }

    ::java::lang::Object HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jboolean HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_5c8006f3f1f9c96f], a0.this$, a1.this$, a2.this$);
    }

    jint HashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Collection HashMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args);
    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_clone(t_HashMap *self);
    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data);
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data);
    static PyGetSetDef t_HashMap__fields_[] = {
      DECLARE_GET_FIELD(t_HashMap, empty),
      DECLARE_GET_FIELD(t_HashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashMap__methods_[] = {
      DECLARE_METHOD(t_HashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashMap)[] = {
      { Py_tp_methods, t_HashMap__methods_ },
      { Py_tp_init, (void *) t_HashMap_init_ },
      { Py_tp_getset, t_HashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(HashMap, t_HashMap, HashMap);
    PyObject *t_HashMap::wrap_Object(const HashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_HashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_HashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(HashMap), &PY_TYPE_DEF(HashMap), module, "HashMap", 0);
    }

    void t_HashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "class_", make_descriptor(HashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "wrapfn_", make_descriptor(t_HashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashMap::initializeClass, 1)))
        return NULL;
      return t_HashMap::wrap_Object(HashMap(((t_HashMap *) arg)->object.this$));
    }
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashMap object((jobject) NULL);

          INT_CALL(object = HashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashMap(a0, a1));
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

    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashMap_clone(t_HashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *TLEPropagatorBuilder::class$ = NULL;
        jmethodID *TLEPropagatorBuilder::mids$ = NULL;
        bool TLEPropagatorBuilder::live$ = false;

        jclass TLEPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/TLEPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4719a996de68c182] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_init$_1dff286f8dcbaaee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/data/DataContext;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_c186d77d7194bb8c] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
            mids$[mid_copy_9adeea3e8a1b28d1] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/TLEPropagatorBuilder;");
            mids$[mid_getTemplateTLE_67f978062a0fd0e7] = env->getMethodID(cls, "getTemplateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_4719a996de68c182, a0.this$, a1.this$, a2, a3.this$)) {}

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1dff286f8dcbaaee, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel TLEPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::tle::TLEPropagator TLEPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::tle::TLEPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_c186d77d7194bb8c], a0.this$));
        }

        TLEPropagatorBuilder TLEPropagatorBuilder::copy() const
        {
          return TLEPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_9adeea3e8a1b28d1]));
        }

        ::org::orekit::propagation::analytical::tle::TLE TLEPropagatorBuilder::getTemplateTLE() const
        {
          return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTemplateTLE_67f978062a0fd0e7]));
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
        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self);
        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data);
        static PyGetSetDef t_TLEPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_TLEPropagatorBuilder, templateTLE),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TLEPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_TLEPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, getTemplateTLE, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TLEPropagatorBuilder)[] = {
          { Py_tp_methods, t_TLEPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_TLEPropagatorBuilder_init_ },
          { Py_tp_getset, t_TLEPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TLEPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(TLEPropagatorBuilder, t_TLEPropagatorBuilder, TLEPropagatorBuilder);

        void t_TLEPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(TLEPropagatorBuilder), &PY_TYPE_DEF(TLEPropagatorBuilder), module, "TLEPropagatorBuilder", 0);
        }

        void t_TLEPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "class_", make_descriptor(TLEPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "wrapfn_", make_descriptor(t_TLEPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TLEPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_TLEPropagatorBuilder::wrap_Object(TLEPropagatorBuilder(((t_TLEPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TLEPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a3((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a4((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDkk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3, &a4))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::tle::TLEPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::tle::t_TLEPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          TLEPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_TLEPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self)
        {
          ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
          OBJ_CALL(result = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
        }

        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
          OBJ_CALL(value = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeModifier::mids$ = NULL;
          bool RelativisticClockRangeModifier::live$ = false;

          jclass RelativisticClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeModifier::RelativisticClockRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self);
          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeModifier, t_RelativisticClockRangeModifier, RelativisticClockRangeModifier);

          void t_RelativisticClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeModifier), &PY_TYPE_DEF(RelativisticClockRangeModifier), module, "RelativisticClockRangeModifier", 0);
          }

          void t_RelativisticClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "class_", make_descriptor(RelativisticClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeModifier::wrap_Object(RelativisticClockRangeModifier(((t_RelativisticClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractShapiroBaseModifier::class$ = NULL;
          jmethodID *AbstractShapiroBaseModifier::mids$ = NULL;
          bool AbstractShapiroBaseModifier::live$ = false;

          jclass AbstractShapiroBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_shapiroCorrection_aa4620e8d021974d] = env->getMethodID(cls, "shapiroCorrection", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/utils/TimeStampedPVCoordinates;)D");
              mids$[mid_doModify_e471490df8741b73] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractShapiroBaseModifier::AbstractShapiroBaseModifier(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}
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
          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractShapiroBaseModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractShapiroBaseModifier)[] = {
            { Py_tp_methods, t_AbstractShapiroBaseModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractShapiroBaseModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractShapiroBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractShapiroBaseModifier, t_AbstractShapiroBaseModifier, AbstractShapiroBaseModifier);

          void t_AbstractShapiroBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractShapiroBaseModifier), &PY_TYPE_DEF(AbstractShapiroBaseModifier), module, "AbstractShapiroBaseModifier", 0);
          }

          void t_AbstractShapiroBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "class_", make_descriptor(AbstractShapiroBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "wrapfn_", make_descriptor(t_AbstractShapiroBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractShapiroBaseModifier::wrap_Object(AbstractShapiroBaseModifier(((t_AbstractShapiroBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            AbstractShapiroBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = AbstractShapiroBaseModifier(a0));
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
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *LazyLoadedTimeScales::class$ = NULL;
      jmethodID *LazyLoadedTimeScales::mids$ = NULL;
      bool LazyLoadedTimeScales::live$ = false;

      jclass LazyLoadedTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/LazyLoadedTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e01fd964e5de5264] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;)V");
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_0640e6acf969ed28] = env->getMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_e93935f5cbbffcd2] = env->getMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_0640e6acf969ed28] = env->getMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_9391834b1a937fd3] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_237364a28a8cf0b4] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_265dd6a5eaf62dee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_0cd5c45ac1466124] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_3eb0a3a9b450fe42] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_64d2db466ba002ef] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_513baddf28d44704] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_d5c1bf5214e95dd6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_1561497728a78b6a] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_2cdd0fa7c8f02aa9] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_777ef8538a45134b] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_f6e670da699ff3f8] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_c21aaa13d4f3f95e] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_672057b4f848abf0] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_81e037be1ebdb551] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_getEopHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedTimeScales::LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop & a0) : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_e01fd964e5de5264, a0.this$)) {}

      void LazyLoadedTimeScales::addDefaultUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultUTCTAIOffsetsLoaders_0640e6acf969ed28]);
      }

      void LazyLoadedTimeScales::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addUTCTAIOffsetsLoader_e93935f5cbbffcd2], a0.this$);
      }

      void LazyLoadedTimeScales::clearUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearUTCTAIOffsetsLoaders_0640e6acf969ed28]);
      }

      ::org::orekit::time::BDTScale LazyLoadedTimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_9391834b1a937fd3]));
      }

      ::org::orekit::time::GLONASSScale LazyLoadedTimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_237364a28a8cf0b4]));
      }

      ::org::orekit::time::GMSTScale LazyLoadedTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_265dd6a5eaf62dee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale LazyLoadedTimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_0cd5c45ac1466124]));
      }

      ::org::orekit::time::GalileoScale LazyLoadedTimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_3eb0a3a9b450fe42]));
      }

      ::org::orekit::time::IRNSSScale LazyLoadedTimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_64d2db466ba002ef]));
      }

      ::org::orekit::time::QZSSScale LazyLoadedTimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_513baddf28d44704]));
      }

      ::org::orekit::time::TAIScale LazyLoadedTimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_d5c1bf5214e95dd6]));
      }

      ::org::orekit::time::TCBScale LazyLoadedTimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_1561497728a78b6a]));
      }

      ::org::orekit::time::TCGScale LazyLoadedTimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_2cdd0fa7c8f02aa9]));
      }

      ::org::orekit::time::TDBScale LazyLoadedTimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_777ef8538a45134b]));
      }

      ::org::orekit::time::TTScale LazyLoadedTimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_f6e670da699ff3f8]));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_c21aaa13d4f3f95e], a0.this$));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_672057b4f848abf0], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale LazyLoadedTimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_81e037be1ebdb551]));
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
      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data);
      static PyGetSetDef t_LazyLoadedTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, bDT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gLONASS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gPS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gST),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, iRNSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, qZSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tAI),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCG),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tDB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedTimeScales__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addUTCTAIOffsetsLoader, METH_O),
        DECLARE_METHOD(t_LazyLoadedTimeScales, clearUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getBDT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGLONASS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGPS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getIRNSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getQZSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTAI, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCG, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTDB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUTC, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedTimeScales)[] = {
        { Py_tp_methods, t_LazyLoadedTimeScales__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedTimeScales_init_ },
        { Py_tp_getset, t_LazyLoadedTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(LazyLoadedTimeScales, t_LazyLoadedTimeScales, LazyLoadedTimeScales);

      void t_LazyLoadedTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedTimeScales), &PY_TYPE_DEF(LazyLoadedTimeScales), module, "LazyLoadedTimeScales", 0);
      }

      void t_LazyLoadedTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "class_", make_descriptor(LazyLoadedTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "wrapfn_", make_descriptor(t_LazyLoadedTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedTimeScales::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedTimeScales::wrap_Object(LazyLoadedTimeScales(((t_LazyLoadedTimeScales *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        LazyLoadedTimeScales object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::LazyLoadedEop::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedTimeScales(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getBDT());
          return ::org::orekit::time::t_BDTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getBDT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGLONASS());
          return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGLONASS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGMST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGPS());
          return ::org::orekit::time::t_GPSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGPS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGST());
          return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIRNSS());
          return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getIRNSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getQZSS());
          return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getQZSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTAI());
          return ::org::orekit::time::t_TAIScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTAI", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCB());
          return ::org::orekit::time::t_TCBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCG());
          return ::org::orekit::time::t_TCGScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCG", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTDB());
          return ::org::orekit::time::t_TDBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTDB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTT());
          return ::org::orekit::time::t_TTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getUTC());
          return ::org::orekit::time::t_UTCScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUTC", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044Data::class$ = NULL;
              jmethodID *Rtcm1044Data::mids$ = NULL;
              bool Rtcm1044Data::live$ = false;

              jclass Rtcm1044Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getQzssCodeOnL2_412668abc8d889e9] = env->getMethodID(cls, "getQzssCodeOnL2", "()I");
                  mids$[mid_getQzssFitInterval_412668abc8d889e9] = env->getMethodID(cls, "getQzssFitInterval", "()I");
                  mids$[mid_getQzssNavigationMessage_5621ad583d1821c9] = env->getMethodID(cls, "getQzssNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssNavigationMessage_069f72d6c5d950eb] = env->getMethodID(cls, "getQzssNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssToc_557b8123390d8d0c] = env->getMethodID(cls, "getQzssToc", "()D");
                  mids$[mid_setQzssCodeOnL2_a3da1a935cb37f7b] = env->getMethodID(cls, "setQzssCodeOnL2", "(I)V");
                  mids$[mid_setQzssFitInterval_a3da1a935cb37f7b] = env->getMethodID(cls, "setQzssFitInterval", "(I)V");
                  mids$[mid_setQzssNavigationMessage_0219a485357a5d22] = env->getMethodID(cls, "setQzssNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
                  mids$[mid_setQzssToc_10f281d777284cea] = env->getMethodID(cls, "setQzssToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044Data::Rtcm1044Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint Rtcm1044Data::getQzssCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssCodeOnL2_412668abc8d889e9]);
              }

              jint Rtcm1044Data::getQzssFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssFitInterval_412668abc8d889e9]);
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_5621ad583d1821c9]));
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_069f72d6c5d950eb], a0.this$));
              }

              jdouble Rtcm1044Data::getQzssToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getQzssToc_557b8123390d8d0c]);
              }

              void Rtcm1044Data::setQzssCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssCodeOnL2_a3da1a935cb37f7b], a0);
              }

              void Rtcm1044Data::setQzssFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssFitInterval_a3da1a935cb37f7b], a0);
              }

              void Rtcm1044Data::setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssNavigationMessage_0219a485357a5d22], a0.this$);
              }

              void Rtcm1044Data::setQzssToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssToc_10f281d777284cea], a0);
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
              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args);
              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1044Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044Data)[] = {
                { Py_tp_methods, t_Rtcm1044Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044Data_init_ },
                { Py_tp_getset, t_Rtcm1044Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1044Data, t_Rtcm1044Data, Rtcm1044Data);

              void t_Rtcm1044Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044Data), &PY_TYPE_DEF(Rtcm1044Data), module, "Rtcm1044Data", 0);
              }

              void t_Rtcm1044Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "class_", make_descriptor(Rtcm1044Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "wrapfn_", make_descriptor(t_Rtcm1044Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044Data::wrap_Object(Rtcm1044Data(((t_Rtcm1044Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1044Data object((jobject) NULL);

                INT_CALL(object = Rtcm1044Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getQzssNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getQzssNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getQzssNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getQzssToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setQzssNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setQzssToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getQzssNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setQzssNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getQzssToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setQzssToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssToc", arg);
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
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "java/io/IOException.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractListCrawler::class$ = NULL;
      jmethodID *PythonAbstractListCrawler::mids$ = NULL;
      bool PythonAbstractListCrawler::live$ = false;

      jclass PythonAbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBaseName_fa48e6cfb0766bbf] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_fa48e6cfb0766bbf] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getStream_9f5def4cb35ed37f] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_bb8b4fd10482c728] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractListCrawler::PythonAbstractListCrawler() : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAbstractListCrawler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractListCrawler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractListCrawler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args);
      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self);
      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data);
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data);
      static PyGetSetDef t_PythonAbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, self),
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractListCrawler)[] = {
        { Py_tp_methods, t_PythonAbstractListCrawler__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractListCrawler_init_ },
        { Py_tp_getset, t_PythonAbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(PythonAbstractListCrawler, t_PythonAbstractListCrawler, PythonAbstractListCrawler);
      PyObject *t_PythonAbstractListCrawler::wrap_Object(const PythonAbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonAbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonAbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractListCrawler), &PY_TYPE_DEF(PythonAbstractListCrawler), module, "PythonAbstractListCrawler", 1);
      }

      void t_PythonAbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "class_", make_descriptor(PythonAbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "wrapfn_", make_descriptor(t_PythonAbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractListCrawler::initializeClass);
        JNINativeMethod methods[] = {
          { "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getBaseName0 },
          { "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getCompleteName1 },
          { "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;", (void *) t_PythonAbstractListCrawler_getStream2 },
          { "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;", (void *) t_PythonAbstractListCrawler_getZipJarCrawler3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractListCrawler_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractListCrawler::wrap_Object(PythonAbstractListCrawler(((t_PythonAbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractListCrawler object((jobject) NULL);

        INT_CALL(object = PythonAbstractListCrawler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getBaseName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getBaseName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getCompleteName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getCompleteName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStream", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("getStream", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::ZipJarCrawler value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getZipJarCrawler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::ZipJarCrawler::initializeClass, &value))
        {
          throwTypeError("getZipJarCrawler", result);
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

      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data)
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
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
