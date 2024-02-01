#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPForceModel::class$ = NULL;
          jmethodID *CR3BPForceModel::mids$ = NULL;
          bool CR3BPForceModel::live$ = false;
          ::java::lang::String *CR3BPForceModel::MASS_RATIO_SUFFIX = NULL;

          jclass CR3BPForceModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPForceModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d97bf5b01aa2ae7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPotential_e2c0ea69b49ff127] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
              mids$[mid_getPotential_25833e647d701f52] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MASS_RATIO_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MASS_RATIO_SUFFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPForceModel::CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d97bf5b01aa2ae7b, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
          }

          jboolean CR3BPForceModel::dependsOnPositionOnly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
          }

          ::java::util::List CR3BPForceModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_e2c0ea69b49ff127], a0.this$));
          }

          ::org::hipparchus::analysis::differentiation::DerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_25833e647d701f52], a0.this$));
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
          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data);
          static PyGetSetDef t_CR3BPForceModel__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPForceModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPForceModel__methods_[] = {
            DECLARE_METHOD(t_CR3BPForceModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, acceleration, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPForceModel, dependsOnPositionOnly, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getPotential, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPForceModel)[] = {
            { Py_tp_methods, t_CR3BPForceModel__methods_ },
            { Py_tp_init, (void *) t_CR3BPForceModel_init_ },
            { Py_tp_getset, t_CR3BPForceModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPForceModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPForceModel, t_CR3BPForceModel, CR3BPForceModel);

          void t_CR3BPForceModel::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPForceModel), &PY_TYPE_DEF(CR3BPForceModel), module, "CR3BPForceModel", 0);
          }

          void t_CR3BPForceModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "class_", make_descriptor(CR3BPForceModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "wrapfn_", make_descriptor(t_CR3BPForceModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(CR3BPForceModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "MASS_RATIO_SUFFIX", make_descriptor(j2p(*CR3BPForceModel::MASS_RATIO_SUFFIX)));
          }

          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPForceModel::initializeClass, 1)))
              return NULL;
            return t_CR3BPForceModel::wrap_Object(CR3BPForceModel(((t_CR3BPForceModel *) arg)->object.this$));
          }
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPForceModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            CR3BPForceModel object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = CR3BPForceModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args)
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

            PyErr_SetArgsError((PyObject *) self, "acceleration", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.dependsOnPositionOnly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getPotential", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data)
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
#include "org/orekit/data/DataSource$Opener.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$Opener::class$ = NULL;
      jmethodID *DataSource$Opener::mids$ = NULL;
      bool DataSource$Opener::live$ = false;

      jclass DataSource$Opener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$Opener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openReaderOnce_0a92f974b39121e6] = env->getMethodID(cls, "openReaderOnce", "()Ljava/io/Reader;");
          mids$[mid_openStreamOnce_af9d97da329e95d9] = env->getMethodID(cls, "openStreamOnce", "()Ljava/io/InputStream;");
          mids$[mid_rawDataIsBinary_eee3de00fe971136] = env->getMethodID(cls, "rawDataIsBinary", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$Opener::openReaderOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openReaderOnce_0a92f974b39121e6]));
      }

      ::java::io::InputStream DataSource$Opener::openStreamOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStreamOnce_af9d97da329e95d9]));
      }

      jboolean DataSource$Opener::rawDataIsBinary() const
      {
        return env->callBooleanMethod(this$, mids$[mid_rawDataIsBinary_eee3de00fe971136]);
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
      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self);

      static PyMethodDef t_DataSource$Opener__methods_[] = {
        DECLARE_METHOD(t_DataSource$Opener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, openReaderOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, openStreamOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, rawDataIsBinary, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$Opener)[] = {
        { Py_tp_methods, t_DataSource$Opener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$Opener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$Opener, t_DataSource$Opener, DataSource$Opener);

      void t_DataSource$Opener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$Opener), &PY_TYPE_DEF(DataSource$Opener), module, "DataSource$Opener", 0);
      }

      void t_DataSource$Opener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "class_", make_descriptor(DataSource$Opener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "wrapfn_", make_descriptor(t_DataSource$Opener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$Opener::initializeClass, 1)))
          return NULL;
        return t_DataSource$Opener::wrap_Object(DataSource$Opener(((t_DataSource$Opener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$Opener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openReaderOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openStreamOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.rawDataIsBinary());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialCovariance::class$ = NULL;
          jmethodID *VectorialCovariance::mids$ = NULL;
          bool VectorialCovariance::live$ = false;

          jclass VectorialCovariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialCovariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_06c90d8be18d8afa] = env->getMethodID(cls, "<init>", "(IZ)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b2eebabce70526d8] = env->getMethodID(cls, "getResult", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialCovariance::VectorialCovariance(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06c90d8be18d8afa, a0, a1)) {}

          void VectorialCovariance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          jboolean VectorialCovariance::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jlong VectorialCovariance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          ::org::hipparchus::linear::RealMatrix VectorialCovariance::getResult() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getResult_b2eebabce70526d8]));
          }

          jint VectorialCovariance::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          void VectorialCovariance::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg);
          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data);
          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data);
          static PyGetSetDef t_VectorialCovariance__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialCovariance, n),
            DECLARE_GET_FIELD(t_VectorialCovariance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialCovariance__methods_[] = {
            DECLARE_METHOD(t_VectorialCovariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialCovariance)[] = {
            { Py_tp_methods, t_VectorialCovariance__methods_ },
            { Py_tp_init, (void *) t_VectorialCovariance_init_ },
            { Py_tp_getset, t_VectorialCovariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialCovariance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialCovariance, t_VectorialCovariance, VectorialCovariance);

          void t_VectorialCovariance::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialCovariance), &PY_TYPE_DEF(VectorialCovariance), module, "VectorialCovariance", 0);
          }

          void t_VectorialCovariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "class_", make_descriptor(VectorialCovariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "wrapfn_", make_descriptor(t_VectorialCovariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialCovariance::initializeClass, 1)))
              return NULL;
            return t_VectorialCovariance::wrap_Object(VectorialCovariance(((t_VectorialCovariance *) arg)->object.this$));
          }
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialCovariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jboolean a1;
            VectorialCovariance object((jobject) NULL);

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              INT_CALL(object = VectorialCovariance(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg)
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

          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "java/util/Map.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/lang/Class.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Long.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries::class$ = NULL;
      jmethodID *PoissonSeries::mids$ = NULL;
      bool PoissonSeries::live$ = false;

      jclass PoissonSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e7a891d3e9be8376] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/PolynomialNutation;Ljava/util/Map;)V");
          mids$[mid_compile_0bffb48394191881] = env->getStaticMethodID(cls, "compile", "([Lorg/orekit/data/PoissonSeries;)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getNonPolynomialSize_d6ab429752e7c267] = env->getMethodID(cls, "getNonPolynomialSize", "()I");
          mids$[mid_getPolynomial_ac81f10a3d10c55a] = env->getMethodID(cls, "getPolynomial", "()Lorg/orekit/data/PolynomialNutation;");
          mids$[mid_value_7212d8ed403494a1] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_value_3cea1ba38c4e1540] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeries::PoissonSeries(const ::org::orekit::data::PolynomialNutation & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7a891d3e9be8376, a0.this$, a1.this$)) {}

      ::org::orekit::data::PoissonSeries$CompiledSeries PoissonSeries::compile(const JArray< PoissonSeries > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callStaticObjectMethod(cls, mids$[mid_compile_0bffb48394191881], a0.this$));
      }

      jint PoissonSeries::getNonPolynomialSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNonPolynomialSize_d6ab429752e7c267]);
      }

      ::org::orekit::data::PolynomialNutation PoissonSeries::getPolynomial() const
      {
        return ::org::orekit::data::PolynomialNutation(env->callObjectMethod(this$, mids$[mid_getPolynomial_ac81f10a3d10c55a]));
      }

      jdouble PoissonSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_7212d8ed403494a1], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement PoissonSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_3cea1ba38c4e1540], a0.this$));
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
      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self);
      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data);
      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data);
      static PyGetSetDef t_PoissonSeries__fields_[] = {
        DECLARE_GET_FIELD(t_PoissonSeries, nonPolynomialSize),
        DECLARE_GET_FIELD(t_PoissonSeries, polynomial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoissonSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, compile, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries, getNonPolynomialSize, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, getPolynomial, METH_NOARGS),
        DECLARE_METHOD(t_PoissonSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries)[] = {
        { Py_tp_methods, t_PoissonSeries__methods_ },
        { Py_tp_init, (void *) t_PoissonSeries_init_ },
        { Py_tp_getset, t_PoissonSeries__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries, t_PoissonSeries, PoissonSeries);

      void t_PoissonSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries), &PY_TYPE_DEF(PoissonSeries), module, "PoissonSeries", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "CompiledSeries", make_descriptor(&PY_TYPE_DEF(PoissonSeries$CompiledSeries)));
      }

      void t_PoissonSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "class_", make_descriptor(PoissonSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "wrapfn_", make_descriptor(t_PoissonSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries::wrap_Object(PoissonSeries(((t_PoissonSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeries_init_(t_PoissonSeries *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::PolynomialNutation a0((jobject) NULL);
        ::java::util::Map a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeries object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::data::PolynomialNutation::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
        {
          INT_CALL(object = PoissonSeries(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeries_compile(PyTypeObject *type, PyObject *arg)
      {
        JArray< PoissonSeries > a0((jobject) NULL);
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);

        if (!parseArg(arg, "[k", PoissonSeries::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PoissonSeries::compile(a0));
          return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compile", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeries_getNonPolynomialSize(t_PoissonSeries *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_PoissonSeries_getPolynomial(t_PoissonSeries *self)
      {
        ::org::orekit::data::PolynomialNutation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(result);
      }

      static PyObject *t_PoissonSeries_value(t_PoissonSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries_get__nonPolynomialSize(t_PoissonSeries *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNonPolynomialSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_PoissonSeries_get__polynomial(t_PoissonSeries *self, void *data)
      {
        ::org::orekit::data::PolynomialNutation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPolynomial());
        return ::org::orekit::data::t_PolynomialNutation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldUnivariateMatrixFunction::mids$ = NULL;
      bool FieldUnivariateMatrixFunction::live$ = false;

      jclass FieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateMatrixFunction_9aee8a1909b08b93] = env->getMethodID(cls, "toCalculusFieldUnivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction;");
          mids$[mid_value_1ae308af83874c2b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction FieldUnivariateMatrixFunction::toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateMatrixFunction_9aee8a1909b08b93], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_1ae308af83874c2b], a0.this$));
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
      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, toCalculusFieldUnivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateMatrixFunction, t_FieldUnivariateMatrixFunction, FieldUnivariateMatrixFunction);

      void t_FieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateMatrixFunction), &PY_TYPE_DEF(FieldUnivariateMatrixFunction), module, "FieldUnivariateMatrixFunction", 0);
      }

      void t_FieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "class_", make_descriptor(FieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateMatrixFunction::wrap_Object(FieldUnivariateMatrixFunction(((t_FieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexEopEntry::class$ = NULL;
        jmethodID *SinexEopEntry::mids$ = NULL;
        bool SinexEopEntry::live$ = false;

        jclass SinexEopEntry::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexEopEntry");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLod_9981f74b2d109da6] = env->getMethodID(cls, "getLod", "()D");
            mids$[mid_getNutLn_9981f74b2d109da6] = env->getMethodID(cls, "getNutLn", "()D");
            mids$[mid_getNutOb_9981f74b2d109da6] = env->getMethodID(cls, "getNutOb", "()D");
            mids$[mid_getNutX_9981f74b2d109da6] = env->getMethodID(cls, "getNutX", "()D");
            mids$[mid_getNutY_9981f74b2d109da6] = env->getMethodID(cls, "getNutY", "()D");
            mids$[mid_getUt1MinusUtc_9981f74b2d109da6] = env->getMethodID(cls, "getUt1MinusUtc", "()D");
            mids$[mid_getXPo_9981f74b2d109da6] = env->getMethodID(cls, "getXPo", "()D");
            mids$[mid_getYPo_9981f74b2d109da6] = env->getMethodID(cls, "getYPo", "()D");
            mids$[mid_setLod_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setLod", "(D)V");
            mids$[mid_setNutLn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutLn", "(D)V");
            mids$[mid_setNutOb_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutOb", "(D)V");
            mids$[mid_setNutX_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutX", "(D)V");
            mids$[mid_setNutY_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutY", "(D)V");
            mids$[mid_setUt1MinusUtc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setUt1MinusUtc", "(D)V");
            mids$[mid_setxPo_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setxPo", "(D)V");
            mids$[mid_setyPo_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setyPo", "(D)V");
            mids$[mid_toEopEntry_77d96af09a23fcc3] = env->getMethodID(cls, "toEopEntry", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/EOPEntry;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexEopEntry::SinexEopEntry(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

        ::org::orekit::time::AbsoluteDate SinexEopEntry::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jdouble SinexEopEntry::getLod() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLod_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getNutLn() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutLn_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getNutOb() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutOb_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getNutX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutX_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getNutY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutY_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getUt1MinusUtc() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUt1MinusUtc_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getXPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXPo_9981f74b2d109da6]);
        }

        jdouble SinexEopEntry::getYPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYPo_9981f74b2d109da6]);
        }

        void SinexEopEntry::setLod(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLod_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setNutLn(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutLn_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setNutOb(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutOb_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setNutX(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutX_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setNutY(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutY_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setUt1MinusUtc(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setUt1MinusUtc_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setxPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setxPo_1ad26e8c8c0cd65b], a0);
        }

        void SinexEopEntry::setyPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setyPo_1ad26e8c8c0cd65b], a0);
        }

        ::org::orekit::frames::EOPEntry SinexEopEntry::toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          return ::org::orekit::frames::EOPEntry(env->callObjectMethod(this$, mids$[mid_toEopEntry_77d96af09a23fcc3], a0.this$, a1.this$, a2.this$));
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
      namespace sinex {
        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args);
        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data);
        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyGetSetDef t_SinexEopEntry__fields_[] = {
          DECLARE_GET_FIELD(t_SinexEopEntry, date),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, lod),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutLn),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutOb),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutX),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutY),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, ut1MinusUtc),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, xPo),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, yPo),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexEopEntry__methods_[] = {
          DECLARE_METHOD(t_SinexEopEntry, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getLod, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutLn, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutOb, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutX, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutY, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getUt1MinusUtc, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getXPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getYPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, setLod, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutLn, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutOb, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutX, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutY, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setUt1MinusUtc, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setxPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setyPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, toEopEntry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexEopEntry)[] = {
          { Py_tp_methods, t_SinexEopEntry__methods_ },
          { Py_tp_init, (void *) t_SinexEopEntry_init_ },
          { Py_tp_getset, t_SinexEopEntry__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexEopEntry)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexEopEntry, t_SinexEopEntry, SinexEopEntry);

        void t_SinexEopEntry::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexEopEntry), &PY_TYPE_DEF(SinexEopEntry), module, "SinexEopEntry", 0);
        }

        void t_SinexEopEntry::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "class_", make_descriptor(SinexEopEntry::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "wrapfn_", make_descriptor(t_SinexEopEntry::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexEopEntry::initializeClass, 1)))
            return NULL;
          return t_SinexEopEntry::wrap_Object(SinexEopEntry(((t_SinexEopEntry *) arg)->object.this$));
        }
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexEopEntry::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          SinexEopEntry object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            INT_CALL(object = SinexEopEntry(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLod());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutLn());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutOb());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setLod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLod", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutLn(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutLn", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutOb(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutOb", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutX(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutX", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutY(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutY", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setUt1MinusUtc(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setUt1MinusUtc", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setxPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setxPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setyPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setyPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::TimeScale a2((jobject) NULL);
          ::org::orekit::frames::EOPEntry result((jobject) NULL);

          if (!parseArgs(args, "KKk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.toEopEntry(a0, a1, a2));
            return ::org::orekit::frames::t_EOPEntry::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "toEopEntry", args);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLod());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setLod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lod", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutLn());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutLn(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutLn", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutOb());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutOb(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutOb", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutX());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutX(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutX", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutY());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutY(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutY", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setUt1MinusUtc(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ut1MinusUtc", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setxPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "xPo", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setyPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yPo", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *OLSMultipleLinearRegression::class$ = NULL;
        jmethodID *OLSMultipleLinearRegression::mids$ = NULL;
        bool OLSMultipleLinearRegression::live$ = false;

        jclass OLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/OLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_calculateAdjustedRSquared_9981f74b2d109da6] = env->getMethodID(cls, "calculateAdjustedRSquared", "()D");
            mids$[mid_calculateHat_b2eebabce70526d8] = env->getMethodID(cls, "calculateHat", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateRSquared_9981f74b2d109da6] = env->getMethodID(cls, "calculateRSquared", "()D");
            mids$[mid_calculateResidualSumOfSquares_9981f74b2d109da6] = env->getMethodID(cls, "calculateResidualSumOfSquares", "()D");
            mids$[mid_calculateTotalSumOfSquares_9981f74b2d109da6] = env->getMethodID(cls, "calculateTotalSumOfSquares", "()D");
            mids$[mid_newSampleData_ef9c3ec1d213ea68] = env->getMethodID(cls, "newSampleData", "([D[[D)V");
            mids$[mid_newSampleData_40b495c766d36227] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_calculateBeta_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_b2eebabce70526d8] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_newXSampleData_11ecdbb5af7ed67d] = env->getMethodID(cls, "newXSampleData", "([[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OLSMultipleLinearRegression::OLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        OLSMultipleLinearRegression::OLSMultipleLinearRegression(jdouble a0) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble OLSMultipleLinearRegression::calculateAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateAdjustedRSquared_9981f74b2d109da6]);
        }

        ::org::hipparchus::linear::RealMatrix OLSMultipleLinearRegression::calculateHat() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_calculateHat_b2eebabce70526d8]));
        }

        jdouble OLSMultipleLinearRegression::calculateRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateRSquared_9981f74b2d109da6]);
        }

        jdouble OLSMultipleLinearRegression::calculateResidualSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateResidualSumOfSquares_9981f74b2d109da6]);
        }

        jdouble OLSMultipleLinearRegression::calculateTotalSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateTotalSumOfSquares_9981f74b2d109da6]);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_ef9c3ec1d213ea68], a0.this$, a1.this$);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_40b495c766d36227], a0.this$, a1, a2);
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
      namespace regression {
        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_OLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_OLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateHat, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateResidualSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateTotalSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_OLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_OLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(OLSMultipleLinearRegression, t_OLSMultipleLinearRegression, OLSMultipleLinearRegression);

        void t_OLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(OLSMultipleLinearRegression), &PY_TYPE_DEF(OLSMultipleLinearRegression), module, "OLSMultipleLinearRegression", 0);
        }

        void t_OLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "class_", make_descriptor(OLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_OLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_OLSMultipleLinearRegression::wrap_Object(OLSMultipleLinearRegression(((t_OLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              OLSMultipleLinearRegression object((jobject) NULL);

              INT_CALL(object = OLSMultipleLinearRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jdouble a0;
              OLSMultipleLinearRegression object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = OLSMultipleLinearRegression(a0));
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

        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.calculateHat());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateResidualSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateTotalSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1));
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
                OBJ_CALL(self->object.newSampleData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(OLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region$Location::class$ = NULL;
        jmethodID *Region$Location::mids$ = NULL;
        bool Region$Location::live$ = false;
        Region$Location *Region$Location::BOUNDARY = NULL;
        Region$Location *Region$Location::INSIDE = NULL;
        Region$Location *Region$Location::OUTSIDE = NULL;

        jclass Region$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_552b3c2bdf5c4ad0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_values_e921897a7a3aea14] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Region$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOUNDARY = new Region$Location(env->getStaticObjectField(cls, "BOUNDARY", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            INSIDE = new Region$Location(env->getStaticObjectField(cls, "INSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            OUTSIDE = new Region$Location(env->getStaticObjectField(cls, "OUTSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region$Location Region$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Region$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_552b3c2bdf5c4ad0], a0.this$));
        }

        JArray< Region$Location > Region$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Region$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_e921897a7a3aea14]));
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
        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args);
        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Region$Location_values(PyTypeObject *type);
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data);
        static PyGetSetDef t_Region$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Region$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region$Location__methods_[] = {
          DECLARE_METHOD(t_Region$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region$Location)[] = {
          { Py_tp_methods, t_Region$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Region$Location, t_Region$Location, Region$Location);
        PyObject *t_Region$Location::wrap_Object(const Region$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Region$Location), &PY_TYPE_DEF(Region$Location), module, "Region$Location", 0);
        }

        void t_Region$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "class_", make_descriptor(Region$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "wrapfn_", make_descriptor(t_Region$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Region$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "BOUNDARY", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::BOUNDARY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "INSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::INSIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "OUTSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::OUTSIDE)));
        }

        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region$Location::initializeClass, 1)))
            return NULL;
          return t_Region$Location::wrap_Object(Region$Location(((t_Region$Location *) arg)->object.this$));
        }
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Region$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::valueOf(a0));
            return t_Region$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Region$Location_values(PyTypeObject *type)
        {
          JArray< Region$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Region$Location::wrap_jobject);
        }
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureKey::class$ = NULL;
          jmethodID *XmlStructureKey::mids$ = NULL;
          bool XmlStructureKey::live$ = false;
          XmlStructureKey *XmlStructureKey::body = NULL;
          XmlStructureKey *XmlStructureKey::data = NULL;
          XmlStructureKey *XmlStructureKey::header = NULL;
          XmlStructureKey *XmlStructureKey::metadata = NULL;
          XmlStructureKey *XmlStructureKey::segment = NULL;

          jclass XmlStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_7dcff8364717845d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_2d14f51733762b2d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/XmlStructureKey;");
              mids$[mid_values_f4391f430a5c936e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/XmlStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              body = new XmlStructureKey(env->getStaticObjectField(cls, "body", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              data = new XmlStructureKey(env->getStaticObjectField(cls, "data", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              header = new XmlStructureKey(env->getStaticObjectField(cls, "header", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              metadata = new XmlStructureKey(env->getStaticObjectField(cls, "metadata", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              segment = new XmlStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean XmlStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_7dcff8364717845d], a0.this$, a1.this$);
          }

          XmlStructureKey XmlStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return XmlStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2d14f51733762b2d], a0.this$));
          }

          JArray< XmlStructureKey > XmlStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< XmlStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f4391f430a5c936e]));
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
          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_XmlStructureKey_values(PyTypeObject *type);
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data);
          static PyGetSetDef t_XmlStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_XmlStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_XmlStructureKey__methods_[] = {
            DECLARE_METHOD(t_XmlStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureKey)[] = {
            { Py_tp_methods, t_XmlStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_XmlStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(XmlStructureKey, t_XmlStructureKey, XmlStructureKey);
          PyObject *t_XmlStructureKey::wrap_Object(const XmlStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_XmlStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_XmlStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureKey), &PY_TYPE_DEF(XmlStructureKey), module, "XmlStructureKey", 0);
          }

          void t_XmlStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "class_", make_descriptor(XmlStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "wrapfn_", make_descriptor(t_XmlStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(XmlStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "body", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::body)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "data", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::data)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "header", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::header)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "metadata", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::metadata)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "segment", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::segment)));
          }

          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureKey::initializeClass, 1)))
              return NULL;
            return t_XmlStructureKey::wrap_Object(XmlStructureKey(((t_XmlStructureKey *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args)
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

          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            XmlStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::valueOf(a0));
              return t_XmlStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_XmlStructureKey_values(PyTypeObject *type)
          {
            JArray< XmlStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_XmlStructureKey::wrap_jobject);
          }
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Arc::class$ = NULL;
          jmethodID *Arc::mids$ = NULL;
          bool Arc::live$ = false;

          jclass Arc::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Arc");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_checkPoint_45dad54a87e7f240] = env->getMethodID(cls, "checkPoint", "(D)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_9981f74b2d109da6] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_9981f74b2d109da6] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getOffset_7cfd87fdb22a0503] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_getOffset_bf28ed64d6e8576b] = env->getMethodID(cls, "getOffset", "(D)D");
              mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_9981f74b2d109da6] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Arc::Arc(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Arc::checkPoint(jdouble a0) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_45dad54a87e7f240], a0));
          }

          jdouble Arc::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_9981f74b2d109da6]);
          }

          jdouble Arc::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_9981f74b2d109da6]);
          }

          jdouble Arc::getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_7cfd87fdb22a0503], a0.this$);
          }

          jdouble Arc::getOffset(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_bf28ed64d6e8576b], a0);
          }

          jdouble Arc::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
          }

          jdouble Arc::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_9981f74b2d109da6]);
          }

          jdouble Arc::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
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
      namespace spherical {
        namespace oned {
          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg);
          static PyObject *t_Arc_getBarycenter(t_Arc *self);
          static PyObject *t_Arc_getInf(t_Arc *self);
          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args);
          static PyObject *t_Arc_getSize(t_Arc *self);
          static PyObject *t_Arc_getSup(t_Arc *self);
          static PyObject *t_Arc_getTolerance(t_Arc *self);
          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data);
          static PyObject *t_Arc_get__inf(t_Arc *self, void *data);
          static PyObject *t_Arc_get__size(t_Arc *self, void *data);
          static PyObject *t_Arc_get__sup(t_Arc *self, void *data);
          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data);
          static PyGetSetDef t_Arc__fields_[] = {
            DECLARE_GET_FIELD(t_Arc, barycenter),
            DECLARE_GET_FIELD(t_Arc, inf),
            DECLARE_GET_FIELD(t_Arc, size),
            DECLARE_GET_FIELD(t_Arc, sup),
            DECLARE_GET_FIELD(t_Arc, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Arc__methods_[] = {
            DECLARE_METHOD(t_Arc, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, checkPoint, METH_O),
            DECLARE_METHOD(t_Arc, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Arc, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getSup, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getTolerance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Arc)[] = {
            { Py_tp_methods, t_Arc__methods_ },
            { Py_tp_init, (void *) t_Arc_init_ },
            { Py_tp_getset, t_Arc__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Arc)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Arc, t_Arc, Arc);

          void t_Arc::install(PyObject *module)
          {
            installType(&PY_TYPE(Arc), &PY_TYPE_DEF(Arc), module, "Arc", 0);
          }

          void t_Arc::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "class_", make_descriptor(Arc::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "wrapfn_", make_descriptor(t_Arc::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Arc::initializeClass, 1)))
              return NULL;
            return t_Arc::wrap_Object(Arc(((t_Arc *) arg)->object.this$));
          }
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Arc::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            Arc object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = Arc(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.checkPoint(a0));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
            return NULL;
          }

          static PyObject *t_Arc_getBarycenter(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getInf(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Arc_getSize(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getSup(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getTolerance(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__inf(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__size(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__sup(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data)
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
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *PythonWeatherModel::class$ = NULL;
          jmethodID *PythonWeatherModel::mids$ = NULL;
          bool PythonWeatherModel::live$ = false;

          jclass PythonWeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/PythonWeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_weatherParameters_281401e03841f11f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonWeatherModel::PythonWeatherModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonWeatherModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonWeatherModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonWeatherModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace weather {
          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self);
          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args);
          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1);
          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data);
          static PyGetSetDef t_PythonWeatherModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonWeatherModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonWeatherModel__methods_[] = {
            DECLARE_METHOD(t_PythonWeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonWeatherModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonWeatherModel)[] = {
            { Py_tp_methods, t_PythonWeatherModel__methods_ },
            { Py_tp_init, (void *) t_PythonWeatherModel_init_ },
            { Py_tp_getset, t_PythonWeatherModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonWeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonWeatherModel, t_PythonWeatherModel, PythonWeatherModel);

          void t_PythonWeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonWeatherModel), &PY_TYPE_DEF(PythonWeatherModel), module, "PythonWeatherModel", 1);
          }

          void t_PythonWeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "class_", make_descriptor(PythonWeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "wrapfn_", make_descriptor(t_PythonWeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonWeatherModel::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonWeatherModel_pythonDecRef0 },
              { "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonWeatherModel_weatherParameters1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonWeatherModel::initializeClass, 1)))
              return NULL;
            return t_PythonWeatherModel::wrap_Object(PythonWeatherModel(((t_PythonWeatherModel *) arg)->object.this$));
          }
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonWeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds)
          {
            PythonWeatherModel object((jobject) NULL);

            INT_CALL(object = PythonWeatherModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args)
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

          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "weatherParameters", "dO", (double) a0, o1);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data)
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
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitSatelliteEphemeris::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitSatelliteEphemeris::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitSatelliteEphemeris::live$ = false;
        jint OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_05767f11ee536b3d] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_6feb93c9e34b86f0] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_8e7fae6b83dd8266] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_caf0414bb350d8f3] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;ILorg/orekit/time/TimeScale;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitSatelliteEphemeris::OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_05767f11ee536b3d], a0.this$));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, jint a1) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_6feb93c9e34b86f0], a0.this$, a1));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_8e7fae6b83dd8266], a0.this$, a1.this$, a2));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2, const ::org::orekit::time::TimeScale & a3) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_caf0414bb350d8f3], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitEphemerisFile$OrekitSatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        jdouble OrekitEphemerisFile$OrekitSatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::java::util::List OrekitEphemerisFile$OrekitSatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris, t_OrekitEphemerisFile$OrekitSatelliteEphemeris, OrekitEphemerisFile$OrekitSatelliteEphemeris);

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris), module, "OrekitEphemerisFile$OrekitSatelliteEphemeris", 0);
        }

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "class_", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(OrekitEphemerisFile$OrekitSatelliteEphemeris(((t_OrekitEphemerisFile$OrekitSatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitEphemerisFile$OrekitSatelliteEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitSatelliteEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkI", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkIk", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
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
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorMapping::class$ = NULL;
          jmethodID *SensorMapping::mids$ = NULL;
          bool SensorMapping::live$ = false;

          jclass SensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_2117e6542b9526e2] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Object;)V");
              mids$[mid_getMapping_6b191a9b12c1004b] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_d2c8eb4129821f0e] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorMapping::SensorMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          SensorMapping::SensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          void SensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::java::lang::Object & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_2117e6542b9526e2], a0.this$, a1.this$);
          }

          ::java::util::Set SensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_6b191a9b12c1004b]));
          }

          ::java::lang::String SensorMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_d2c8eb4129821f0e]));
          }

          ::java::lang::String SensorMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_d2c8eb4129821f0e]));
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
          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args);
          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args);
          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data);
          static PyGetSetDef t_SensorMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorMapping, sensorName),
            DECLARE_GET_FIELD(t_SensorMapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, of_, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorMapping)[] = {
            { Py_tp_methods, t_SensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorMapping_init_ },
            { Py_tp_getset, t_SensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorMapping, t_SensorMapping, SensorMapping);
          PyObject *t_SensorMapping::wrap_Object(const SensorMapping& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SensorMapping::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorMapping), &PY_TYPE_DEF(SensorMapping), module, "SensorMapping", 0);
          }

          void t_SensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "class_", make_descriptor(SensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "wrapfn_", make_descriptor(t_SensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorMapping::wrap_Object(SensorMapping(((t_SensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorMapping(a0, a1));
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

          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::java::lang::Object a1((jobject) NULL);

            if (!parseArgs(args, "kO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, self->parameters[0], &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_710eb17074b6a01b] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_710eb17074b6a01b], a0.this$);
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
      namespace events {
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54IntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54IntegratorBuilder::mids$ = NULL;
        bool HighamHall54IntegratorBuilder::live$ = false;

        jclass HighamHall54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54IntegratorBuilder::HighamHall54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator HighamHall54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_HighamHall54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54IntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HighamHall54IntegratorBuilder, t_HighamHall54IntegratorBuilder, HighamHall54IntegratorBuilder);

        void t_HighamHall54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54IntegratorBuilder), &PY_TYPE_DEF(HighamHall54IntegratorBuilder), module, "HighamHall54IntegratorBuilder", 0);
        }

        void t_HighamHall54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "class_", make_descriptor(HighamHall54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54IntegratorBuilder::wrap_Object(HighamHall54IntegratorBuilder(((t_HighamHall54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Character.h"
#include "java/util/MissingResourceException.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Locale$Category.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale::class$ = NULL;
    jmethodID *Locale::mids$ = NULL;
    bool Locale::live$ = false;
    Locale *Locale::CANADA = NULL;
    Locale *Locale::CANADA_FRENCH = NULL;
    Locale *Locale::CHINA = NULL;
    Locale *Locale::CHINESE = NULL;
    Locale *Locale::ENGLISH = NULL;
    Locale *Locale::FRANCE = NULL;
    Locale *Locale::FRENCH = NULL;
    Locale *Locale::GERMAN = NULL;
    Locale *Locale::GERMANY = NULL;
    Locale *Locale::ITALIAN = NULL;
    Locale *Locale::ITALY = NULL;
    Locale *Locale::JAPAN = NULL;
    Locale *Locale::JAPANESE = NULL;
    Locale *Locale::KOREA = NULL;
    Locale *Locale::KOREAN = NULL;
    Locale *Locale::PRC = NULL;
    jchar Locale::PRIVATE_USE_EXTENSION = (jchar) 0;
    Locale *Locale::ROOT = NULL;
    Locale *Locale::SIMPLIFIED_CHINESE = NULL;
    Locale *Locale::TAIWAN = NULL;
    Locale *Locale::TRADITIONAL_CHINESE = NULL;
    Locale *Locale::UK = NULL;
    jchar Locale::UNICODE_LOCALE_EXTENSION = (jchar) 0;
    Locale *Locale::US = NULL;

    jclass Locale::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_filter_570fd4d42ca575c4] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filter_9b965386df8a151c] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_filterTags_570fd4d42ca575c4] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filterTags_9b965386df8a151c] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_forLanguageTag_afd8135728425baf] = env->getStaticMethodID(cls, "forLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale;");
        mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCountry_d2c8eb4129821f0e] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
        mids$[mid_getDefault_19f55af8c42f77cb] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
        mids$[mid_getDefault_364b32676511573d] = env->getStaticMethodID(cls, "getDefault", "(Ljava/util/Locale$Category;)Ljava/util/Locale;");
        mids$[mid_getDisplayCountry_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
        mids$[mid_getDisplayCountry_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayScript_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayScript", "()Ljava/lang/String;");
        mids$[mid_getDisplayScript_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayScript", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayVariant_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
        mids$[mid_getDisplayVariant_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getExtension_53bd6cb431dc0332] = env->getMethodID(cls, "getExtension", "(C)Ljava/lang/String;");
        mids$[mid_getExtensionKeys_6b191a9b12c1004b] = env->getMethodID(cls, "getExtensionKeys", "()Ljava/util/Set;");
        mids$[mid_getISO3Country_d2c8eb4129821f0e] = env->getMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
        mids$[mid_getISO3Language_d2c8eb4129821f0e] = env->getMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
        mids$[mid_getISOCountries_f81c0644d57ae495] = env->getStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
        mids$[mid_getISOCountries_c059b98d83dd93ed] = env->getStaticMethodID(cls, "getISOCountries", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;");
        mids$[mid_getISOLanguages_f81c0644d57ae495] = env->getStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
        mids$[mid_getLanguage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLanguage", "()Ljava/lang/String;");
        mids$[mid_getScript_d2c8eb4129821f0e] = env->getMethodID(cls, "getScript", "()Ljava/lang/String;");
        mids$[mid_getUnicodeLocaleAttributes_6b191a9b12c1004b] = env->getMethodID(cls, "getUnicodeLocaleAttributes", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleKeys_6b191a9b12c1004b] = env->getMethodID(cls, "getUnicodeLocaleKeys", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleType_95277969d373e11f] = env->getMethodID(cls, "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getVariant_d2c8eb4129821f0e] = env->getMethodID(cls, "getVariant", "()Ljava/lang/String;");
        mids$[mid_hasExtensions_eee3de00fe971136] = env->getMethodID(cls, "hasExtensions", "()Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_lookup_7cadb821e6138862] = env->getStaticMethodID(cls, "lookup", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;");
        mids$[mid_lookupTag_1a7106e226416152] = env->getStaticMethodID(cls, "lookupTag", "(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;");
        mids$[mid_setDefault_febf24135e738502] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
        mids$[mid_setDefault_838769081f7eb6a7] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale$Category;Ljava/util/Locale;)V");
        mids$[mid_stripExtensions_19f55af8c42f77cb] = env->getMethodID(cls, "stripExtensions", "()Ljava/util/Locale;");
        mids$[mid_toLanguageTag_d2c8eb4129821f0e] = env->getMethodID(cls, "toLanguageTag", "()Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CANADA = new Locale(env->getStaticObjectField(cls, "CANADA", "Ljava/util/Locale;"));
        CANADA_FRENCH = new Locale(env->getStaticObjectField(cls, "CANADA_FRENCH", "Ljava/util/Locale;"));
        CHINA = new Locale(env->getStaticObjectField(cls, "CHINA", "Ljava/util/Locale;"));
        CHINESE = new Locale(env->getStaticObjectField(cls, "CHINESE", "Ljava/util/Locale;"));
        ENGLISH = new Locale(env->getStaticObjectField(cls, "ENGLISH", "Ljava/util/Locale;"));
        FRANCE = new Locale(env->getStaticObjectField(cls, "FRANCE", "Ljava/util/Locale;"));
        FRENCH = new Locale(env->getStaticObjectField(cls, "FRENCH", "Ljava/util/Locale;"));
        GERMAN = new Locale(env->getStaticObjectField(cls, "GERMAN", "Ljava/util/Locale;"));
        GERMANY = new Locale(env->getStaticObjectField(cls, "GERMANY", "Ljava/util/Locale;"));
        ITALIAN = new Locale(env->getStaticObjectField(cls, "ITALIAN", "Ljava/util/Locale;"));
        ITALY = new Locale(env->getStaticObjectField(cls, "ITALY", "Ljava/util/Locale;"));
        JAPAN = new Locale(env->getStaticObjectField(cls, "JAPAN", "Ljava/util/Locale;"));
        JAPANESE = new Locale(env->getStaticObjectField(cls, "JAPANESE", "Ljava/util/Locale;"));
        KOREA = new Locale(env->getStaticObjectField(cls, "KOREA", "Ljava/util/Locale;"));
        KOREAN = new Locale(env->getStaticObjectField(cls, "KOREAN", "Ljava/util/Locale;"));
        PRC = new Locale(env->getStaticObjectField(cls, "PRC", "Ljava/util/Locale;"));
        PRIVATE_USE_EXTENSION = env->getStaticCharField(cls, "PRIVATE_USE_EXTENSION");
        ROOT = new Locale(env->getStaticObjectField(cls, "ROOT", "Ljava/util/Locale;"));
        SIMPLIFIED_CHINESE = new Locale(env->getStaticObjectField(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;"));
        TAIWAN = new Locale(env->getStaticObjectField(cls, "TAIWAN", "Ljava/util/Locale;"));
        TRADITIONAL_CHINESE = new Locale(env->getStaticObjectField(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;"));
        UK = new Locale(env->getStaticObjectField(cls, "UK", "Ljava/util/Locale;"));
        UNICODE_LOCALE_EXTENSION = env->getStaticCharField(cls, "UNICODE_LOCALE_EXTENSION");
        US = new Locale(env->getStaticObjectField(cls, "US", "Ljava/util/Locale;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale::Locale(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::Object Locale::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean Locale::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_570fd4d42ca575c4], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_9b965386df8a151c], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_570fd4d42ca575c4], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_9b965386df8a151c], a0.this$, a1.this$, a2.this$));
    }

    Locale Locale::forLanguageTag(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_forLanguageTag_afd8135728425baf], a0.this$));
    }

    JArray< Locale > Locale::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
    }

    ::java::lang::String Locale::getCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_d2c8eb4129821f0e]));
    }

    Locale Locale::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_19f55af8c42f77cb]));
    }

    Locale Locale::getDefault(const ::java::util::Locale$Category & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_364b32676511573d], a0.this$));
    }

    ::java::lang::String Locale::getDisplayCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getDisplayCountry(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Locale::getDisplayLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getDisplayLanguage(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Locale::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getDisplayName(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Locale::getDisplayScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getDisplayScript(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Locale::getDisplayVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getDisplayVariant(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Locale::getExtension(jchar a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExtension_53bd6cb431dc0332], a0));
    }

    ::java::util::Set Locale::getExtensionKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getExtensionKeys_6b191a9b12c1004b]));
    }

    ::java::lang::String Locale::getISO3Country() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Country_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getISO3Language() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Language_d2c8eb4129821f0e]));
    }

    JArray< ::java::lang::String > Locale::getISOCountries()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_f81c0644d57ae495]));
    }

    ::java::util::Set Locale::getISOCountries(const ::java::util::Locale$IsoCountryCode & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_c059b98d83dd93ed], a0.this$));
    }

    JArray< ::java::lang::String > Locale::getISOLanguages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOLanguages_f81c0644d57ae495]));
    }

    ::java::lang::String Locale::getLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLanguage_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::getScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScript_d2c8eb4129821f0e]));
    }

    ::java::util::Set Locale::getUnicodeLocaleAttributes() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleAttributes_6b191a9b12c1004b]));
    }

    ::java::util::Set Locale::getUnicodeLocaleKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleKeys_6b191a9b12c1004b]));
    }

    ::java::lang::String Locale::getUnicodeLocaleType(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleType_95277969d373e11f], a0.this$));
    }

    ::java::lang::String Locale::getVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getVariant_d2c8eb4129821f0e]));
    }

    jboolean Locale::hasExtensions() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasExtensions_eee3de00fe971136]);
    }

    jint Locale::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    Locale Locale::lookup(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_lookup_7cadb821e6138862], a0.this$, a1.this$));
    }

    ::java::lang::String Locale::lookupTag(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lookupTag_1a7106e226416152], a0.this$, a1.this$));
    }

    void Locale::setDefault(const Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_febf24135e738502], a0.this$);
    }

    void Locale::setDefault(const ::java::util::Locale$Category & a0, const Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_838769081f7eb6a7], a0.this$, a1.this$);
    }

    Locale Locale::stripExtensions() const
    {
      return Locale(env->callObjectMethod(this$, mids$[mid_stripExtensions_19f55af8c42f77cb]));
    }

    ::java::lang::String Locale::toLanguageTag() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLanguageTag_d2c8eb4129821f0e]));
    }

    ::java::lang::String Locale::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale_clone(t_Locale *self);
    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_Locale_getCountry(t_Locale *self);
    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getExtensionKeys(t_Locale *self);
    static PyObject *t_Locale_getISO3Country(t_Locale *self);
    static PyObject *t_Locale_getISO3Language(t_Locale *self);
    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type);
    static PyObject *t_Locale_getLanguage(t_Locale *self);
    static PyObject *t_Locale_getScript(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getVariant(t_Locale *self);
    static PyObject *t_Locale_hasExtensions(t_Locale *self);
    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_stripExtensions(t_Locale *self);
    static PyObject *t_Locale_toLanguageTag(t_Locale *self);
    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data);
    static PyObject *t_Locale_get__country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__default(t_Locale *self, void *data);
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data);
    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data);
    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data);
    static PyObject *t_Locale_get__language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__script(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__variant(t_Locale *self, void *data);
    static PyGetSetDef t_Locale__fields_[] = {
      DECLARE_GET_FIELD(t_Locale, availableLocales),
      DECLARE_GET_FIELD(t_Locale, country),
      DECLARE_GETSET_FIELD(t_Locale, default),
      DECLARE_GET_FIELD(t_Locale, displayCountry),
      DECLARE_GET_FIELD(t_Locale, displayLanguage),
      DECLARE_GET_FIELD(t_Locale, displayName),
      DECLARE_GET_FIELD(t_Locale, displayScript),
      DECLARE_GET_FIELD(t_Locale, displayVariant),
      DECLARE_GET_FIELD(t_Locale, extensionKeys),
      DECLARE_GET_FIELD(t_Locale, iSO3Country),
      DECLARE_GET_FIELD(t_Locale, iSO3Language),
      DECLARE_GET_FIELD(t_Locale, iSOCountries),
      DECLARE_GET_FIELD(t_Locale, iSOLanguages),
      DECLARE_GET_FIELD(t_Locale, language),
      DECLARE_GET_FIELD(t_Locale, script),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleAttributes),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleKeys),
      DECLARE_GET_FIELD(t_Locale, variant),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale__methods_[] = {
      DECLARE_METHOD(t_Locale, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, clone, METH_NOARGS),
      DECLARE_METHOD(t_Locale, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale, filter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, filterTags, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, forLanguageTag, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getCountry, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getDisplayCountry, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayLanguage, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayScript, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayVariant, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getExtension, METH_O),
      DECLARE_METHOD(t_Locale, getExtensionKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Country, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Language, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISOCountries, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getISOLanguages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getLanguage, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getScript, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleAttributes, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleType, METH_O),
      DECLARE_METHOD(t_Locale, getVariant, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hasExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale, lookup, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, lookupTag, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, setDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, stripExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toLanguageTag, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale)[] = {
      { Py_tp_methods, t_Locale__methods_ },
      { Py_tp_init, (void *) t_Locale_init_ },
      { Py_tp_getset, t_Locale__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale, t_Locale, Locale);

    void t_Locale::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale), &PY_TYPE_DEF(Locale), module, "Locale", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "LanguageRange", make_descriptor(&PY_TYPE_DEF(Locale$LanguageRange)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FilteringMode", make_descriptor(&PY_TYPE_DEF(Locale$FilteringMode)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "Category", make_descriptor(&PY_TYPE_DEF(Locale$Category)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "IsoCountryCode", make_descriptor(&PY_TYPE_DEF(Locale$IsoCountryCode)));
    }

    void t_Locale::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "class_", make_descriptor(Locale::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "wrapfn_", make_descriptor(t_Locale::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA_FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA_FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINA", make_descriptor(t_Locale::wrap_Object(*Locale::CHINA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ENGLISH", make_descriptor(t_Locale::wrap_Object(*Locale::ENGLISH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRANCE", make_descriptor(t_Locale::wrap_Object(*Locale::FRANCE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMAN", make_descriptor(t_Locale::wrap_Object(*Locale::GERMAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMANY", make_descriptor(t_Locale::wrap_Object(*Locale::GERMANY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALIAN", make_descriptor(t_Locale::wrap_Object(*Locale::ITALIAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALY", make_descriptor(t_Locale::wrap_Object(*Locale::ITALY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPAN", make_descriptor(t_Locale::wrap_Object(*Locale::JAPAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPANESE", make_descriptor(t_Locale::wrap_Object(*Locale::JAPANESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREA", make_descriptor(t_Locale::wrap_Object(*Locale::KOREA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREAN", make_descriptor(t_Locale::wrap_Object(*Locale::KOREAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRC", make_descriptor(t_Locale::wrap_Object(*Locale::PRC)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRIVATE_USE_EXTENSION", make_descriptor(Locale::PRIVATE_USE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ROOT", make_descriptor(t_Locale::wrap_Object(*Locale::ROOT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "SIMPLIFIED_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::SIMPLIFIED_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TAIWAN", make_descriptor(t_Locale::wrap_Object(*Locale::TAIWAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TRADITIONAL_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::TRADITIONAL_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UK", make_descriptor(t_Locale::wrap_Object(*Locale::UK)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UNICODE_LOCALE_EXTENSION", make_descriptor(Locale::UNICODE_LOCALE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "US", make_descriptor(t_Locale::wrap_Object(*Locale::US)));
    }

    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale::initializeClass, 1)))
        return NULL;
      return t_Locale::wrap_Object(Locale(((t_Locale *) arg)->object.this$));
    }
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = Locale(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = Locale(a0, a1, a2));
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

    static PyObject *t_Locale_clone(t_Locale *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
      }

      PyErr_SetArgsError(type, "filter", args);
      return NULL;
    }

    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "filterTags", args);
      return NULL;
    }

    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale::forLanguageTag(a0));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "forLanguageTag", arg);
      return NULL;
    }

    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type)
    {
      JArray< Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_getCountry(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCountry());
      return j2p(result);
    }

    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Locale result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getDefault());
          return t_Locale::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$Category::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getDefault(a0));
            return t_Locale::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayCountry());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayCountry(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayCountry", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayLanguage());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayLanguage(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayLanguage", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayScript());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayScript(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayScript", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayVariant());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayVariant(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayVariant", args);
      return NULL;
    }

    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg)
    {
      jchar a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = self->object.getExtension(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getExtension", arg);
      return NULL;
    }

    static PyObject *t_Locale_getExtensionKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Character));
    }

    static PyObject *t_Locale_getISO3Country(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Country());
      return j2p(result);
    }

    static PyObject *t_Locale_getISO3Language(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Language());
      return j2p(result);
    }

    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getISOCountries());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::util::Locale$IsoCountryCode a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Set result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$IsoCountryCode::initializeClass, &a0, &p0, ::java::util::t_Locale$IsoCountryCode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getISOCountries(a0));
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "getISOCountries", args);
      return NULL;
    }

    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type)
    {
      JArray< ::java::lang::String > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getISOLanguages());
      return JArray<jstring>(result.this$).wrap();
    }

    static PyObject *t_Locale_getLanguage(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLanguage());
      return j2p(result);
    }

    static PyObject *t_Locale_getScript(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getScript());
      return j2p(result);
    }

    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getUnicodeLocaleType(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getUnicodeLocaleType", arg);
      return NULL;
    }

    static PyObject *t_Locale_getVariant(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getVariant());
      return j2p(result);
    }

    static PyObject *t_Locale_hasExtensions(t_Locale *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasExtensions());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      Locale result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookup(a0, a1));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", args);
      return NULL;
    }

    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookupTag(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "lookupTag", args);
      return NULL;
    }

    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          Locale a0((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Locale$Category::initializeClass, Locale::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "setDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_stripExtensions(t_Locale *self)
    {
      Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.stripExtensions());
      return t_Locale::wrap_Object(result);
    }

    static PyObject *t_Locale_toLanguageTag(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLanguageTag());
      return j2p(result);
    }

    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data)
    {
      JArray< Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_get__country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__default(t_Locale *self, void *data)
    {
      Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_Locale::wrap_Object(value);
    }
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data)
    {
      {
        Locale value((jobject) NULL);
        if (!parseArg(arg, "k", Locale::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayVariant());
      return j2p(value);
    }

    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Country());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Language());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOCountries());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOLanguages());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__script(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__variant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getVariant());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *DateBasedManeuverTriggers::class$ = NULL;
          jmethodID *DateBasedManeuverTriggers::mids$ = NULL;
          bool DateBasedManeuverTriggers::live$ = false;
          ::java::lang::String *DateBasedManeuverTriggers::DEFAULT_NAME = NULL;

          jclass DateBasedManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ed2c1cd7b0b1c75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_init$_738a36cb63fab284] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
              mids$[mid_getEndDate_80e11148db499dda] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStartDate_80e11148db499dda] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_convertIntervalDetector_aa7e751bcd989dd1] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_6ed2c1cd7b0b1c75, a0.this$, a1)) {}

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_738a36cb63fab284, a0.this$, a1.this$, a2)) {}

          jdouble DateBasedManeuverTriggers::getDuration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_80e11148db499dda]));
          }

          ::java::lang::String DateBasedManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::java::util::List DateBasedManeuverTriggers::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_80e11148db499dda]));
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
          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args);
          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data);
          static PyGetSetDef t_DateBasedManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, duration),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, endDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, name),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parametersDrivers),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, startDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DateBasedManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_DateBasedManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, of_, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getDuration, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getName, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DateBasedManeuverTriggers)[] = {
            { Py_tp_methods, t_DateBasedManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_DateBasedManeuverTriggers_init_ },
            { Py_tp_getset, t_DateBasedManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DateBasedManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(DateBasedManeuverTriggers, t_DateBasedManeuverTriggers, DateBasedManeuverTriggers);
          PyObject *t_DateBasedManeuverTriggers::wrap_Object(const DateBasedManeuverTriggers& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DateBasedManeuverTriggers::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DateBasedManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(DateBasedManeuverTriggers), &PY_TYPE_DEF(DateBasedManeuverTriggers), module, "DateBasedManeuverTriggers", 0);
          }

          void t_DateBasedManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "class_", make_descriptor(DateBasedManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "wrapfn_", make_descriptor(t_DateBasedManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            env->getClass(DateBasedManeuverTriggers::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "DEFAULT_NAME", make_descriptor(j2p(*DateBasedManeuverTriggers::DEFAULT_NAME)));
          }

          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DateBasedManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_DateBasedManeuverTriggers::wrap_Object(DateBasedManeuverTriggers(((t_DateBasedManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DateBasedManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble a1;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
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

          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDuration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getName", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDuration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovariance::class$ = NULL;
            jmethodID *RTNCovariance::mids$ = NULL;
            bool RTNCovariance::live$ = false;

            jclass RTNCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCdrgdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgn_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgn", "()D");
                mids$[mid_getCdrgndot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgndot", "()D");
                mids$[mid_getCdrgr_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgr", "()D");
                mids$[mid_getCdrgrdot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgrdot", "()D");
                mids$[mid_getCdrgt_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgt", "()D");
                mids$[mid_getCdrgtdot_9981f74b2d109da6] = env->getMethodID(cls, "getCdrgtdot", "()D");
                mids$[mid_getCndotn_9981f74b2d109da6] = env->getMethodID(cls, "getCndotn", "()D");
                mids$[mid_getCndotndot_9981f74b2d109da6] = env->getMethodID(cls, "getCndotndot", "()D");
                mids$[mid_getCndotr_9981f74b2d109da6] = env->getMethodID(cls, "getCndotr", "()D");
                mids$[mid_getCndotrdot_9981f74b2d109da6] = env->getMethodID(cls, "getCndotrdot", "()D");
                mids$[mid_getCndott_9981f74b2d109da6] = env->getMethodID(cls, "getCndott", "()D");
                mids$[mid_getCndottdot_9981f74b2d109da6] = env->getMethodID(cls, "getCndottdot", "()D");
                mids$[mid_getCnn_9981f74b2d109da6] = env->getMethodID(cls, "getCnn", "()D");
                mids$[mid_getCnr_9981f74b2d109da6] = env->getMethodID(cls, "getCnr", "()D");
                mids$[mid_getCnt_9981f74b2d109da6] = env->getMethodID(cls, "getCnt", "()D");
                mids$[mid_getCrdotn_9981f74b2d109da6] = env->getMethodID(cls, "getCrdotn", "()D");
                mids$[mid_getCrdotr_9981f74b2d109da6] = env->getMethodID(cls, "getCrdotr", "()D");
                mids$[mid_getCrdotrdot_9981f74b2d109da6] = env->getMethodID(cls, "getCrdotrdot", "()D");
                mids$[mid_getCrdott_9981f74b2d109da6] = env->getMethodID(cls, "getCrdott", "()D");
                mids$[mid_getCrr_9981f74b2d109da6] = env->getMethodID(cls, "getCrr", "()D");
                mids$[mid_getCsrpdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpn_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpn", "()D");
                mids$[mid_getCsrpndot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpndot", "()D");
                mids$[mid_getCsrpr_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpr", "()D");
                mids$[mid_getCsrprdot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrprdot", "()D");
                mids$[mid_getCsrpsrp_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpt_9981f74b2d109da6] = env->getMethodID(cls, "getCsrpt", "()D");
                mids$[mid_getCsrptdot_9981f74b2d109da6] = env->getMethodID(cls, "getCsrptdot", "()D");
                mids$[mid_getCtdotn_9981f74b2d109da6] = env->getMethodID(cls, "getCtdotn", "()D");
                mids$[mid_getCtdotr_9981f74b2d109da6] = env->getMethodID(cls, "getCtdotr", "()D");
                mids$[mid_getCtdotrdot_9981f74b2d109da6] = env->getMethodID(cls, "getCtdotrdot", "()D");
                mids$[mid_getCtdott_9981f74b2d109da6] = env->getMethodID(cls, "getCtdott", "()D");
                mids$[mid_getCtdottdot_9981f74b2d109da6] = env->getMethodID(cls, "getCtdottdot", "()D");
                mids$[mid_getCthrdrg_9981f74b2d109da6] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrn_9981f74b2d109da6] = env->getMethodID(cls, "getCthrn", "()D");
                mids$[mid_getCthrndot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrndot", "()D");
                mids$[mid_getCthrr_9981f74b2d109da6] = env->getMethodID(cls, "getCthrr", "()D");
                mids$[mid_getCthrrdot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrrdot", "()D");
                mids$[mid_getCthrsrp_9981f74b2d109da6] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrt_9981f74b2d109da6] = env->getMethodID(cls, "getCthrt", "()D");
                mids$[mid_getCthrtdot_9981f74b2d109da6] = env->getMethodID(cls, "getCthrtdot", "()D");
                mids$[mid_getCthrthr_9981f74b2d109da6] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCtr_9981f74b2d109da6] = env->getMethodID(cls, "getCtr", "()D");
                mids$[mid_getCtt_9981f74b2d109da6] = env->getMethodID(cls, "getCtt", "()D");
                mids$[mid_getRTNCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getRTNCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_setCdrgdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgn", "(D)V");
                mids$[mid_setCdrgndot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgndot", "(D)V");
                mids$[mid_setCdrgr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgr", "(D)V");
                mids$[mid_setCdrgrdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgrdot", "(D)V");
                mids$[mid_setCdrgt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgt", "(D)V");
                mids$[mid_setCdrgtdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCdrgtdot", "(D)V");
                mids$[mid_setCndotn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndotn", "(D)V");
                mids$[mid_setCndotndot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndotndot", "(D)V");
                mids$[mid_setCndotr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndotr", "(D)V");
                mids$[mid_setCndotrdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndotrdot", "(D)V");
                mids$[mid_setCndott_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndott", "(D)V");
                mids$[mid_setCndottdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCndottdot", "(D)V");
                mids$[mid_setCnn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCnn", "(D)V");
                mids$[mid_setCnr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCnr", "(D)V");
                mids$[mid_setCnt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCnt", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCrdotn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrdotn", "(D)V");
                mids$[mid_setCrdotr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrdotr", "(D)V");
                mids$[mid_setCrdotrdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrdotrdot", "(D)V");
                mids$[mid_setCrdott_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrdott", "(D)V");
                mids$[mid_setCrr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCrr", "(D)V");
                mids$[mid_setCsrpdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpn", "(D)V");
                mids$[mid_setCsrpndot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpndot", "(D)V");
                mids$[mid_setCsrpr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpr", "(D)V");
                mids$[mid_setCsrprdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrprdot", "(D)V");
                mids$[mid_setCsrpsrp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrpt", "(D)V");
                mids$[mid_setCsrptdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCsrptdot", "(D)V");
                mids$[mid_setCtdotn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtdotn", "(D)V");
                mids$[mid_setCtdotr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtdotr", "(D)V");
                mids$[mid_setCtdotrdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtdotrdot", "(D)V");
                mids$[mid_setCtdott_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtdott", "(D)V");
                mids$[mid_setCtdottdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtdottdot", "(D)V");
                mids$[mid_setCthrdrg_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrn_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrn", "(D)V");
                mids$[mid_setCthrndot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrndot", "(D)V");
                mids$[mid_setCthrr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrr", "(D)V");
                mids$[mid_setCthrrdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrrdot", "(D)V");
                mids$[mid_setCthrsrp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrt", "(D)V");
                mids$[mid_setCthrtdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrtdot", "(D)V");
                mids$[mid_setCthrthr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCtr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtr", "(D)V");
                mids$[mid_setCtt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCtt", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RTNCovariance::RTNCovariance() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble RTNCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgndot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgrdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgt_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCdrgtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgtdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndotndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotndot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndotrdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndott_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCndottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCndottdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCnn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCnr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCnt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCnt_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCrdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCrdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCrdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdotrdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCrdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrdott_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpndot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrprdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrprdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrpt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpt_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCsrptdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrptdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtdotn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtdotr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtdotrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdotrdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtdott() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdott_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtdottdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtdottdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrn() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrn_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrndot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrndot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrrdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrrdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrt_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrtdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrtdot_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr_9981f74b2d109da6]);
            }

            jdouble RTNCovariance::getCtt() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtt_9981f74b2d109da6]);
            }

            ::org::hipparchus::linear::RealMatrix RTNCovariance::getRTNCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceMatrix_b2eebabce70526d8]));
            }

            void RTNCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgndot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgrdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgt_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCdrgtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgtdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndotndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotndot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndotrdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndott_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCndottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCndottdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCnn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCnr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCnt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCnt_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
            }

            void RTNCovariance::setCrdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCrdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCrdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdotrdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCrdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrdott_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpndot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrprdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrprdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrpt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpt_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCsrptdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrptdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtdotn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtdotr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtdotrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdotrdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtdott(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdott_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtdottdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtdottdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrn(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrn_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrndot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrndot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrrdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrrdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrt_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrtdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrtdot_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtr_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::setCtt(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCtt_1ad26e8c8c0cd65b], a0);
            }

            void RTNCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self);
            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg);
            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args);
            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data);
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data);
            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data);
            static PyGetSetDef t_RTNCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cdrgtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cndottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cnt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, crr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrprdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrpt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, csrptdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdotrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdott),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctdottdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrn),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrndot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrrdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrt),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrtdot),
              DECLARE_GETSET_FIELD(t_RTNCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctr),
              DECLARE_GETSET_FIELD(t_RTNCovariance, ctt),
              DECLARE_GET_FIELD(t_RTNCovariance, rTNCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovariance__methods_[] = {
              DECLARE_METHOD(t_RTNCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCdrgtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCndottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCnt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrprdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrpt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCsrptdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdotrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdott, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtdottdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrn, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrndot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrrdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrtdot, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtr, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getCtt, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, getRTNCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_RTNCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCdrgtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCndottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCnt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovariance, setCrdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrprdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrpt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCsrptdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdotrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdott, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtdottdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrn, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrndot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrrdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrtdot, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtr, METH_O),
              DECLARE_METHOD(t_RTNCovariance, setCtt, METH_O),
              DECLARE_METHOD(t_RTNCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovariance)[] = {
              { Py_tp_methods, t_RTNCovariance__methods_ },
              { Py_tp_init, (void *) t_RTNCovariance_init_ },
              { Py_tp_getset, t_RTNCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(RTNCovariance, t_RTNCovariance, RTNCovariance);

            void t_RTNCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovariance), &PY_TYPE_DEF(RTNCovariance), module, "RTNCovariance", 0);
            }

            void t_RTNCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "class_", make_descriptor(RTNCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "wrapfn_", make_descriptor(t_RTNCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovariance::initializeClass, 1)))
                return NULL;
              return t_RTNCovariance::wrap_Object(RTNCovariance(((t_RTNCovariance *) arg)->object.this$));
            }
            static PyObject *t_RTNCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RTNCovariance_init_(t_RTNCovariance *self, PyObject *args, PyObject *kwds)
            {
              RTNCovariance object((jobject) NULL);

              INT_CALL(object = RTNCovariance());
              self->object = object;

              return 0;
            }

            static PyObject *t_RTNCovariance_getCdrgdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCdrgtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCndottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCndottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCnt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCnt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrprdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrpt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCsrptdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdotrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdott(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdott());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtdottdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrdrg(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrn(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrn());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrndot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrndot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrrdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrsrp(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrtdot(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCthrthr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtr(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getCtt(t_RTNCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtt());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_RTNCovariance_getRTNCovarianceMatrix(t_RTNCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_RTNCovariance_setCdrgdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCdrgtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCndottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCndottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCndottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCnt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCnt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCnt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCovarianceMatrixEntry(t_RTNCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrprdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrprdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrprdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrpt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCsrptdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrptdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrptdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdotrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdotrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdotrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdott(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdott(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdott", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtdottdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtdottdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtdottdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrdrg(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrn(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrn(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrn", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrndot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrndot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrndot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrrdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrrdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrrdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrsrp(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrtdot(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrtdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrtdot", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCthrthr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtr(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtr", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_setCtt(t_RTNCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCtt(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCtt", arg);
              return NULL;
            }

            static PyObject *t_RTNCovariance_validate(t_RTNCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(RTNCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_RTNCovariance_get__cdrgdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cdrgtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cdrgtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cndottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCndottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cndottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCndottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cndottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cnt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCnt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cnt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCnt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cnt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__crr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__crr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrprdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrprdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrprdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrprdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrprdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrpt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrpt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__csrptdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrptdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__csrptdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrptdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrptdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdotrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdotrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdotrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdotrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdotrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdott(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdott());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdott(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdott(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdott", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctdottdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtdottdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctdottdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtdottdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctdottdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrdrg(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrdrg(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrn(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrn());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrn(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrn(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrn", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrndot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrndot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrndot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrndot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrndot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrrdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrrdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrrdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrrdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrrdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrsrp(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrsrp(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrtdot(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrtdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrtdot(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrtdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrtdot", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__cthrthr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__cthrthr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctr(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctr(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctr", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__ctt(t_RTNCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtt());
              return PyFloat_FromDouble((double) value);
            }
            static int t_RTNCovariance_set__ctt(t_RTNCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCtt(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ctt", arg);
              return -1;
            }

            static PyObject *t_RTNCovariance_get__rTNCovarianceMatrix(t_RTNCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationAlgorithm::class$ = NULL;
            jmethodID *TleGenerationAlgorithm::mids$ = NULL;
            bool TleGenerationAlgorithm::live$ = false;

            jclass TleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_166cccd89c387fd5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_f8078c645a12d356] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_166cccd89c387fd5], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_f8078c645a12d356], a0.this$, a1.this$));
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
            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_TleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_TleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_TleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationAlgorithm, t_TleGenerationAlgorithm, TleGenerationAlgorithm);

            void t_TleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationAlgorithm), &PY_TYPE_DEF(TleGenerationAlgorithm), module, "TleGenerationAlgorithm", 0);
            }

            void t_TleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "class_", make_descriptor(TleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "wrapfn_", make_descriptor(t_TleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_TleGenerationAlgorithm::wrap_Object(TleGenerationAlgorithm(((t_TleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getField_7ee697680d30d1e8] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_5fbf1330f033ba72] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_5fbf1330f033ba72] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGeoMagneticFields::PythonGeoMagneticFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonGeoMagneticFields::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonGeoMagneticFields::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonGeoMagneticFields::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/propagation/events/FieldLatitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
            mids$[mid_init$_2d2108d21f1071ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_7fe9da35cd6952f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_486415863a3e51f9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2d2108d21f1071ae, a0.this$, a1.this$, a2)) {}

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7fe9da35cd6952f4, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLatitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
        }

        jdouble FieldLatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_9981f74b2d109da6]);
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
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sqrt::class$ = NULL;
        jmethodID *Sqrt::mids$ = NULL;
        bool Sqrt::live$ = false;

        jclass Sqrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sqrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sqrt::Sqrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Sqrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sqrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args);

        static PyMethodDef t_Sqrt__methods_[] = {
          DECLARE_METHOD(t_Sqrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sqrt)[] = {
          { Py_tp_methods, t_Sqrt__methods_ },
          { Py_tp_init, (void *) t_Sqrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sqrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sqrt, t_Sqrt, Sqrt);

        void t_Sqrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Sqrt), &PY_TYPE_DEF(Sqrt), module, "Sqrt", 0);
        }

        void t_Sqrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "class_", make_descriptor(Sqrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "wrapfn_", make_descriptor(t_Sqrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sqrt::initializeClass, 1)))
            return NULL;
          return t_Sqrt::wrap_Object(Sqrt(((t_Sqrt *) arg)->object.this$));
        }
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sqrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds)
        {
          Sqrt object((jobject) NULL);

          INT_CALL(object = Sqrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args)
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
#include "org/orekit/rugged/utils/PythonSelector.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *PythonSelector::class$ = NULL;
        jmethodID *PythonSelector::mids$ = NULL;
        bool PythonSelector::live$ = false;

        jclass PythonSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/PythonSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_selectFirst_0fc66ee74538f12c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSelector::PythonSelector() : ::org::orekit::rugged::utils::Selector(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonSelector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonSelector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonSelector::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace utils {
        static PyObject *t_PythonSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSelector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSelector_init_(t_PythonSelector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSelector_finalize(t_PythonSelector *self);
        static PyObject *t_PythonSelector_pythonExtension(t_PythonSelector *self, PyObject *args);
        static void JNICALL t_PythonSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonSelector_selectFirst1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonSelector_get__self(t_PythonSelector *self, void *data);
        static PyGetSetDef t_PythonSelector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSelector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSelector__methods_[] = {
          DECLARE_METHOD(t_PythonSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSelector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSelector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSelector)[] = {
          { Py_tp_methods, t_PythonSelector__methods_ },
          { Py_tp_init, (void *) t_PythonSelector_init_ },
          { Py_tp_getset, t_PythonSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(PythonSelector, t_PythonSelector, PythonSelector);

        void t_PythonSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSelector), &PY_TYPE_DEF(PythonSelector), module, "PythonSelector", 1);
        }

        void t_PythonSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSelector), "class_", make_descriptor(PythonSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSelector), "wrapfn_", make_descriptor(t_PythonSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSelector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSelector::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonSelector_pythonDecRef0 },
            { "selectFirst", "(DD)Z", (void *) t_PythonSelector_selectFirst1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSelector::initializeClass, 1)))
            return NULL;
          return t_PythonSelector::wrap_Object(PythonSelector(((t_PythonSelector *) arg)->object.this$));
        }
        static PyObject *t_PythonSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSelector_init_(t_PythonSelector *self, PyObject *args, PyObject *kwds)
        {
          PythonSelector object((jobject) NULL);

          INT_CALL(object = PythonSelector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSelector_finalize(t_PythonSelector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSelector_pythonExtension(t_PythonSelector *self, PyObject *args)
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

        static void JNICALL t_PythonSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSelector::mids$[PythonSelector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSelector::mids$[PythonSelector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonSelector_selectFirst1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSelector::mids$[PythonSelector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "selectFirst", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("selectFirst", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonSelector_get__self(t_PythonSelector *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/ParameterDriver.h"
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
              mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_24ca2746f3be6434] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_cf38abfd6de73cb1] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_2a8a1978d107f938] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24ca2746f3be6434, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_cf38abfd6de73cb1], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_2a8a1978d107f938], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaThreeModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement ViennaThreeModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble ViennaThreeModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
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
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SignalInSpaceAccuracy::class$ = NULL;
            jmethodID *SignalInSpaceAccuracy::mids$ = NULL;
            bool SignalInSpaceAccuracy::live$ = false;

            jclass SignalInSpaceAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SignalInSpaceAccuracy::SignalInSpaceAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jdouble SignalInSpaceAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_9981f74b2d109da6]);
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
            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self);
            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data);
            static PyGetSetDef t_SignalInSpaceAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_SignalInSpaceAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SignalInSpaceAccuracy__methods_[] = {
              DECLARE_METHOD(t_SignalInSpaceAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SignalInSpaceAccuracy)[] = {
              { Py_tp_methods, t_SignalInSpaceAccuracy__methods_ },
              { Py_tp_init, (void *) t_SignalInSpaceAccuracy_init_ },
              { Py_tp_getset, t_SignalInSpaceAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SignalInSpaceAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SignalInSpaceAccuracy, t_SignalInSpaceAccuracy, SignalInSpaceAccuracy);

            void t_SignalInSpaceAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(SignalInSpaceAccuracy), &PY_TYPE_DEF(SignalInSpaceAccuracy), module, "SignalInSpaceAccuracy", 0);
            }

            void t_SignalInSpaceAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "class_", make_descriptor(SignalInSpaceAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "wrapfn_", make_descriptor(t_SignalInSpaceAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SignalInSpaceAccuracy::initializeClass, 1)))
                return NULL;
              return t_SignalInSpaceAccuracy::wrap_Object(SignalInSpaceAccuracy(((t_SignalInSpaceAccuracy *) arg)->object.this$));
            }
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SignalInSpaceAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SignalInSpaceAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SignalInSpaceAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *MagneticFieldDetector::class$ = NULL;
        jmethodID *MagneticFieldDetector::mids$ = NULL;
        bool MagneticFieldDetector::live$ = false;

        jclass MagneticFieldDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/MagneticFieldDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ea029b6cf1682d56] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_b6a40dd499347870] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_787d50daab686bc3] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_ad585fabb24f419c] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_af6c8ef2d17ccd69] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/MagneticFieldDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ea029b6cf1682d56, a0, a1.this$, a2.this$)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jboolean a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b6a40dd499347870, a0, a1.this$, a2.this$, a3)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_787d50daab686bc3, a0, a1, a2, a3.this$, a4.this$, a5)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5, const ::org::orekit::data::DataContext & a6) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ad585fabb24f419c, a0, a1, a2, a3.this$, a4.this$, a5, a6.this$)) {}

        jdouble MagneticFieldDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        void MagneticFieldDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args);
        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data);
        static PyGetSetDef t_MagneticFieldDetector__fields_[] = {
          DECLARE_GET_FIELD(t_MagneticFieldDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MagneticFieldDetector__methods_[] = {
          DECLARE_METHOD(t_MagneticFieldDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MagneticFieldDetector)[] = {
          { Py_tp_methods, t_MagneticFieldDetector__methods_ },
          { Py_tp_init, (void *) t_MagneticFieldDetector_init_ },
          { Py_tp_getset, t_MagneticFieldDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MagneticFieldDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(MagneticFieldDetector, t_MagneticFieldDetector, MagneticFieldDetector);
        PyObject *t_MagneticFieldDetector::wrap_Object(const MagneticFieldDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MagneticFieldDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MagneticFieldDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(MagneticFieldDetector), &PY_TYPE_DEF(MagneticFieldDetector), module, "MagneticFieldDetector", 0);
        }

        void t_MagneticFieldDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "class_", make_descriptor(MagneticFieldDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "wrapfn_", make_descriptor(t_MagneticFieldDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MagneticFieldDetector::initializeClass, 1)))
            return NULL;
          return t_MagneticFieldDetector::wrap_Object(MagneticFieldDetector(((t_MagneticFieldDetector *) arg)->object.this$));
        }
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MagneticFieldDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jboolean a3;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2, &a3))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 6:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              ::org::orekit::data::DataContext a6((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5, &a6))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
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

        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonFieldEventHandler::class$ = NULL;
          jmethodID *PythonFieldEventHandler::mids$ = NULL;
          bool PythonFieldEventHandler::live$ = false;

          jclass PythonFieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonFieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_09584b3c735adb0f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_cd642b76f63f95b7] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldEventHandler::PythonFieldEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonFieldEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonFieldEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonFieldEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args);
          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self);
          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data);
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data);
          static PyGetSetDef t_PythonFieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, self),
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonFieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventHandler)[] = {
            { Py_tp_methods, t_PythonFieldEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonFieldEventHandler_init_ },
            { Py_tp_getset, t_PythonFieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldEventHandler, t_PythonFieldEventHandler, PythonFieldEventHandler);
          PyObject *t_PythonFieldEventHandler::wrap_Object(const PythonFieldEventHandler& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonFieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonFieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldEventHandler), &PY_TYPE_DEF(PythonFieldEventHandler), module, "PythonFieldEventHandler", 1);
          }

          void t_PythonFieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "class_", make_descriptor(PythonFieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "wrapfn_", make_descriptor(t_PythonFieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonFieldEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonFieldEventHandler::wrap_Object(PythonFieldEventHandler(((t_PythonFieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldEventHandler object((jobject) NULL);

            INT_CALL(object = PythonFieldEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data)
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
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data)
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
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStateInterpolator::class$ = NULL;
        jmethodID *ODEStateInterpolator::mids$ = NULL;
        bool ODEStateInterpolator::live$ = false;

        jclass ODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_abe7a2bda3ab9237] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_dddd5f60deb44228] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_abe7a2bda3ab9237] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_abe7a2bda3ab9237]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_dddd5f60deb44228], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_abe7a2bda3ab9237]));
        }

        jboolean ODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_eee3de00fe971136]);
        }

        jboolean ODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        jboolean ODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_eee3de00fe971136]);
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
      namespace sampling {
        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyGetSetDef t_ODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_ODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_ODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStateInterpolator)[] = {
          { Py_tp_methods, t_ODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ODEStateInterpolator, t_ODEStateInterpolator, ODEStateInterpolator);

        void t_ODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStateInterpolator), &PY_TYPE_DEF(ODEStateInterpolator), module, "ODEStateInterpolator", 0);
        }

        void t_ODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "class_", make_descriptor(ODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "wrapfn_", make_descriptor(t_ODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_ODEStateInterpolator::wrap_Object(ODEStateInterpolator(((t_ODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          ::java::lang::Class *RinexFileType::class$ = NULL;
          jmethodID *RinexFileType::mids$ = NULL;
          bool RinexFileType::live$ = false;
          RinexFileType *RinexFileType::NAVIGATION = NULL;
          RinexFileType *RinexFileType::OBSERVATION = NULL;

          jclass RinexFileType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/RinexFileType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseRinexFileType_176e3ba58e1dca50] = env->getStaticMethodID(cls, "parseRinexFileType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_valueOf_176e3ba58e1dca50] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_values_6e8dd7f88554d8b1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/utils/RinexFileType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NAVIGATION = new RinexFileType(env->getStaticObjectField(cls, "NAVIGATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              OBSERVATION = new RinexFileType(env->getStaticObjectField(cls, "OBSERVATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexFileType RinexFileType::parseRinexFileType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_parseRinexFileType_176e3ba58e1dca50], a0.this$));
          }

          RinexFileType RinexFileType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_176e3ba58e1dca50], a0.this$));
          }

          JArray< RinexFileType > RinexFileType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexFileType >(env->callStaticObjectMethod(cls, mids$[mid_values_6e8dd7f88554d8b1]));
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
        namespace utils {
          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args);
          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexFileType_values(PyTypeObject *type);
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data);
          static PyGetSetDef t_RinexFileType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexFileType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexFileType__methods_[] = {
            DECLARE_METHOD(t_RinexFileType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexFileType, parseRinexFileType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexFileType)[] = {
            { Py_tp_methods, t_RinexFileType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexFileType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexFileType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexFileType, t_RinexFileType, RinexFileType);
          PyObject *t_RinexFileType::wrap_Object(const RinexFileType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexFileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexFileType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexFileType), &PY_TYPE_DEF(RinexFileType), module, "RinexFileType", 0);
          }

          void t_RinexFileType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "class_", make_descriptor(RinexFileType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "wrapfn_", make_descriptor(t_RinexFileType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexFileType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "NAVIGATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::NAVIGATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "OBSERVATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::OBSERVATION)));
          }

          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexFileType::initializeClass, 1)))
              return NULL;
            return t_RinexFileType::wrap_Object(RinexFileType(((t_RinexFileType *) arg)->object.this$));
          }
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexFileType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::parseRinexFileType(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseRinexFileType", arg);
            return NULL;
          }

          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::valueOf(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexFileType_values(PyTypeObject *type)
          {
            JArray< RinexFileType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexFileType::wrap_jobject);
          }
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data)
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
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAngularCoordinates::class$ = NULL;
      jmethodID *FieldAngularCoordinates::mids$ = NULL;
      bool FieldAngularCoordinates::live$ = false;

      jclass FieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_93243f17280cd27c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_fbf220282d78d500] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_9b3177aa0063bfd6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_cea7ef07608fc27b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_1744820a539d0a5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_38895dc8ac761c3b] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_applyTo_42f03a1654758e56] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_25934c59f051a43a] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_1bd1ef8a7bbb7399] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_bbe671ce7c49d0a3] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_9f8340afbe9a0f67] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_estimateRate_abfbb1e338383f1f] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_estimateRate_a00e1d2416bbd412] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_9cc2b9634d93173d] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getModifiedRodrigues_a17af817fe464523] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRotation_5c8e6f300713559c] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_d1b42a6748e907f9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_d1b42a6748e907f9] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_revert_f9d057933ad73f59] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_rotationShiftedBy_bb3ec91d8d6ff7f2] = env->getMethodID(cls, "rotationShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_shiftedBy_29cf63b368ce4444] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_shiftedBy_61bee88ebe869cf4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_subtractOffset_38895dc8ac761c3b] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_toAngularCoordinates_76b9e5ce5fa05103] = env->getMethodID(cls, "toAngularCoordinates", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_6d38f548acbe7c0a] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_5c8e6f300713559c] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_5c8e6f300713559c] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93243f17280cd27c, a0.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbf220282d78d500, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9b3177aa0063bfd6, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cea7ef07608fc27b, a0.this$, a1.this$, a2.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1744820a539d0a5d, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      FieldAngularCoordinates FieldAngularCoordinates::addOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_38895dc8ac761c3b], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_42f03a1654758e56], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_25934c59f051a43a], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_1bd1ef8a7bbb7399], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_bbe671ce7c49d0a3], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_9f8340afbe9a0f67], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_abfbb1e338383f1f], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_a00e1d2416bbd412], a0.this$, a1.this$, a2.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_9cc2b9634d93173d], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldAngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_a17af817fe464523], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_d1b42a6748e907f9]));
      }

      FieldAngularCoordinates FieldAngularCoordinates::revert() const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_f9d057933ad73f59]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_bb3ec91d8d6ff7f2], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_29cf63b368ce4444], a0));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_61bee88ebe869cf4], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::subtractOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_38895dc8ac761c3b], a0.this$));
      }

      ::org::orekit::utils::AngularCoordinates FieldAngularCoordinates::toAngularCoordinates() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngularCoordinates_76b9e5ce5fa05103]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_6d38f548acbe7c0a], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_5c8e6f300713559c]));
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
      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args);
      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_FieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationRate),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toAngularCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAngularCoordinates)[] = {
        { Py_tp_methods, t_FieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAngularCoordinates_init_ },
        { Py_tp_getset, t_FieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAngularCoordinates, t_FieldAngularCoordinates, FieldAngularCoordinates);
      PyObject *t_FieldAngularCoordinates::wrap_Object(const FieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAngularCoordinates), &PY_TYPE_DEF(FieldAngularCoordinates), module, "FieldAngularCoordinates", 0);
      }

      void t_FieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "class_", make_descriptor(FieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "wrapfn_", make_descriptor(t_FieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAngularCoordinates::wrap_Object(FieldAngularCoordinates(((t_FieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKD", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::createFromModifiedRodrigues(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::getIdentity(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self)
      {
        FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAngularCoordinates());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialFunction::class$ = NULL;
        jmethodID *FieldPolynomialFunction::mids$ = NULL;
        bool FieldPolynomialFunction::live$ = false;

        jclass FieldPolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e61a645c496adc] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_add_0f4fc8a8c5782fe0] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_antiDerivative_ad0e69ebdd54e8db] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_degree_d6ab429752e7c267] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_getCoefficients_94ed2e0620f8833d] = env->getMethodID(cls, "getCoefficients", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_integrate_44b518e8c914a050] = env->getMethodID(cls, "integrate", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_b5ecd7df9e053968] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_multiply_0f4fc8a8c5782fe0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_negate_ad0e69ebdd54e8db] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_polynomialDerivative_ad0e69ebdd54e8db] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_subtract_0f4fc8a8c5782fe0] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_value_e3d0ff3c0584eadf] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_ddfab947e3a8530e] = env->getStaticMethodID(cls, "evaluate", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_differentiate_38b803e86c0bea36] = env->getStaticMethodID(cls, "differentiate", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialFunction::FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e61a645c496adc, a0.this$)) {}

        FieldPolynomialFunction FieldPolynomialFunction::add(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_0f4fc8a8c5782fe0], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::antiDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_ad0e69ebdd54e8db]));
        }

        jint FieldPolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialFunction::getCoefficients() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCoefficients_94ed2e0620f8833d]));
        }

        ::org::hipparchus::Field FieldPolynomialFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_44b518e8c914a050], a0, a1));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_b5ecd7df9e053968], a0.this$, a1.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::multiply(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_0f4fc8a8c5782fe0], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::negate() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_ad0e69ebdd54e8db]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::polynomialDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_ad0e69ebdd54e8db]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::subtract(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_0f4fc8a8c5782fe0], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_e3d0ff3c0584eadf], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
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
        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args);
        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, coefficients),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialFunction, t_FieldPolynomialFunction, FieldPolynomialFunction);
        PyObject *t_FieldPolynomialFunction::wrap_Object(const FieldPolynomialFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialFunction), &PY_TYPE_DEF(FieldPolynomialFunction), module, "FieldPolynomialFunction", 0);
        }

        void t_FieldPolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "class_", make_descriptor(FieldPolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "wrapfn_", make_descriptor(t_FieldPolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialFunction::wrap_Object(FieldPolynomialFunction(((t_FieldPolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldPolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader$LineParameters::class$ = NULL;
            jmethodID *SOLFSMYDataLoader$LineParameters::mids$ = NULL;
            bool SOLFSMYDataLoader$LineParameters::live$ = false;

            jclass SOLFSMYDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cd9c30ad8d9ee983] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDD)V");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getF10_9981f74b2d109da6] = env->getMethodID(cls, "getF10", "()D");
                mids$[mid_getF10B_9981f74b2d109da6] = env->getMethodID(cls, "getF10B", "()D");
                mids$[mid_getS10_9981f74b2d109da6] = env->getMethodID(cls, "getS10", "()D");
                mids$[mid_getS10B_9981f74b2d109da6] = env->getMethodID(cls, "getS10B", "()D");
                mids$[mid_getXM10_9981f74b2d109da6] = env->getMethodID(cls, "getXM10", "()D");
                mids$[mid_getXM10B_9981f74b2d109da6] = env->getMethodID(cls, "getXM10B", "()D");
                mids$[mid_getY10_9981f74b2d109da6] = env->getMethodID(cls, "getY10", "()D");
                mids$[mid_getY10B_9981f74b2d109da6] = env->getMethodID(cls, "getY10B", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader$LineParameters::SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd9c30ad8d9ee983, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_9981f74b2d109da6]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_9981f74b2d109da6]);
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
            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10B),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10B, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader$LineParameters, t_SOLFSMYDataLoader$LineParameters, SOLFSMYDataLoader$LineParameters);

            void t_SOLFSMYDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader$LineParameters), &PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters), module, "SOLFSMYDataLoader$LineParameters", 0);
            }

            void t_SOLFSMYDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "class_", make_descriptor(SOLFSMYDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader$LineParameters::wrap_Object(SOLFSMYDataLoader$LineParameters(((t_SOLFSMYDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              SOLFSMYDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = SOLFSMYDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10B());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
